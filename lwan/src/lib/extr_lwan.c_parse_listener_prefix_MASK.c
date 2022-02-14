
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lwan_url_map {int flags; struct lwan_module const* module; void* handler; struct hash* data; } ;
struct lwan_module {int flags; void* handle_request; struct hash* (* create_from_hash ) (char*,struct hash*) ;int (* parse_conf ) (struct hash*,struct config*) ;} ;
struct lwan {int url_map_trie; } ;
struct hash {int dummy; } ;
struct config_line {int type; int key; int value; } ;
struct config {int dummy; } ;





 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,char*,struct lwan_url_map*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct config*) ;
 int FUNC_4 (struct config*,char*,...) ;
 struct config* FUNC_5 (struct config*,struct config_line const*) ;
 char* FUNC_6 (struct config*) ;
 struct config_line* FUNC_7 (struct config*) ;
 int FUNC_8 (struct config*,struct config_line const*) ;
 int VAR_2 ;
 int FUNC_9 (struct hash*,int ,int ) ;
 int FUNC_10 (struct hash*) ;
 struct hash* FUNC_11 (int ,int ) ;
 int FUNC_12 (struct config*,struct config_line const*,struct lwan_url_map*) ;
 int FUNC_13 (int ) ;
 char* FUNC_14 (int ) ;
 int FUNC_15 (int ,char*) ;
 struct hash* FUNC_16 (char*,struct hash*) ;
 int FUNC_17 (struct hash*,struct config*) ;

__attribute__((used)) static void FUNC_18(struct config *VAR_3,
                                  const struct config_line *VAR_4,
                                  struct lwan *VAR_5,
                                  const struct lwan_module *VAR_6,
                                  void *VAR_7)
{
    struct lwan_url_map VAR_8 = {};
    struct hash *VAR_9 = FUNC_11(VAR_2, VAR_2);
    char *VAR_10 = FUNC_14(VAR_4->value);
    struct config *VAR_11;

    VAR_11 = FUNC_5(VAR_3, VAR_4);
    if (!VAR_11) {
        FUNC_4(VAR_3, "Could not isolate configuration file");
        goto out;
    }

    while ((VAR_4 = FUNC_7(VAR_3))) {
        switch (VAR_4->type) {
        case 130:
            FUNC_9(VAR_9, FUNC_13(VAR_4->key), FUNC_13(VAR_4->value));
            break;

        case 129:
            if (FUNC_15(VAR_4->key, "authorization")) {
                FUNC_12(VAR_3, VAR_4, &VAR_8);
            } else if (!FUNC_8(VAR_3, VAR_4)) {
                FUNC_4(VAR_3, "Could not skip section");
                goto out;
            }
            break;

        case 128:
            goto add_map;
        }
    }

    FUNC_4(VAR_3, "Expecting section end while parsing prefix");
    goto out;

add_map:
    FUNC_2((VAR_7 && !VAR_6) || (!VAR_7 && VAR_6));

    if (VAR_7) {
        VAR_8.handler = VAR_7;
        VAR_8.flags |= VAR_1 | VAR_0;
        VAR_8.data = VAR_9;
        VAR_8.module = ((void*)0);

        VAR_9 = ((void*)0);
    } else if (VAR_6->create_from_hash && VAR_6->handle_request) {
        VAR_8.data = VAR_6->create_from_hash(VAR_10, VAR_9);
        if (!VAR_8.data) {
            FUNC_4(VAR_3, "Could not create module instance");
            goto out;
        }

        if (VAR_6->parse_conf && !VAR_6->parse_conf(VAR_8.data, VAR_11)) {
            const char *VAR_12 = FUNC_6(VAR_11);

            FUNC_4(VAR_3, "Error from module: %s", VAR_12 ? VAR_12 : "Unknown");
            goto out;
        }

        VAR_8.handler = VAR_6->handle_request;
        VAR_8.flags |= VAR_6->flags;
        VAR_8.module = VAR_6;
    } else if (FUNC_0(!VAR_6->create_from_hash)) {
        FUNC_4(VAR_3, "Module isn't prepared to load settings from a file; "
                        "create_from_hash() method isn't present");
        goto out;
    } else if (FUNC_0(!VAR_6->handle_request)) {
        FUNC_4(VAR_3, "Module does not have handle_request() method");
        goto out;
    }

    FUNC_1(&VAR_5->url_map_trie, VAR_10, &VAR_8);

out:
    FUNC_10(VAR_9);
    FUNC_3(VAR_11);
}

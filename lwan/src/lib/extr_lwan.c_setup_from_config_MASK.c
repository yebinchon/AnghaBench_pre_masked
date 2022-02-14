
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned short keep_alive_timeout; unsigned short n_threads; size_t max_post_data_size; int allow_post_temp_file; int error_template; int expires; void* allow_cors; void* proxy_protocol; void* reuse_port; void* quiet; } ;
struct lwan {TYPE_1__ config; int url_map_trie; } ;
struct config_line {int type; int key; int value; } ;
struct config {int dummy; } ;
typedef int path_buf ;
struct TYPE_4__ {long keep_alive_timeout; long n_threads; scalar_t__ max_post_data_size; int expires; int allow_cors; int proxy_protocol; int reuse_port; int quiet; } ;





 int VAR_0 ;
 int FUNC_0 (struct config*) ;
 int FUNC_1 (struct config*) ;
 int FUNC_2 (struct config*,char*,...) ;
 scalar_t__ FUNC_3 (struct config*) ;
 struct config* FUNC_4 (char const*) ;
 struct config_line* FUNC_5 (struct config*) ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int ) ;
 char* FUNC_7 (char*,int) ;
 int FUNC_8 (char*,char const*,int ,scalar_t__) ;
 int FUNC_9 (char*,char const*) ;
 int FUNC_10 (struct config*) ;
 int FUNC_11 (int *,int ) ;
 void* FUNC_12 (int ,int ) ;
 int FUNC_13 (struct config*,struct config_line const*,struct lwan*) ;
 long FUNC_14 (int ,long) ;
 int FUNC_15 (int ,int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,char*) ;
 int FUNC_18 (int ,char*) ;

__attribute__((used)) static bool FUNC_19(struct lwan *VAR_3, const char *VAR_4)
{
    const struct config_line *VAR_5;
    struct config *VAR_6;
    bool VAR_7 = 0;
    char VAR_8[VAR_0];

    if (!VAR_4)
        VAR_4 = FUNC_7(VAR_8, sizeof(VAR_8));
    FUNC_9("Loading configuration file: %s", VAR_4);

    VAR_6 = FUNC_4(VAR_4);
    if (!VAR_6)
        return 0;

    if (!FUNC_11(&VAR_3->url_map_trie, VAR_2))
        return 0;

    while ((VAR_5 = FUNC_5(VAR_6))) {
        switch (VAR_5->type) {
        case 130:
            if (FUNC_17(VAR_5->key, "keep_alive_timeout")) {
                VAR_3->config.keep_alive_timeout = (unsigned short)FUNC_14(
                    VAR_5->value, VAR_1.keep_alive_timeout);
            } else if (FUNC_17(VAR_5->key, "quiet")) {
                VAR_3->config.quiet =
                    FUNC_12(VAR_5->value, VAR_1.quiet);
            } else if (FUNC_17(VAR_5->key, "reuse_port")) {
                VAR_3->config.reuse_port =
                    FUNC_12(VAR_5->value, VAR_1.reuse_port);
            } else if (FUNC_17(VAR_5->key, "proxy_protocol")) {
                VAR_3->config.proxy_protocol =
                    FUNC_12(VAR_5->value, VAR_1.proxy_protocol);
            } else if (FUNC_17(VAR_5->key, "allow_cors")) {
                VAR_3->config.allow_cors =
                    FUNC_12(VAR_5->value, VAR_1.allow_cors);
            } else if (FUNC_17(VAR_5->key, "expires")) {
                VAR_3->config.expires =
                    FUNC_15(VAR_5->value, VAR_1.expires);
            } else if (FUNC_17(VAR_5->key, "error_template")) {
                FUNC_6(VAR_3->config.error_template);
                VAR_3->config.error_template = FUNC_16(VAR_5->value);
            } else if (FUNC_17(VAR_5->key, "threads")) {
                long VAR_9 =
                    FUNC_14(VAR_5->value, VAR_1.n_threads);
                if (VAR_9 < 0)
                    FUNC_2(VAR_6, "Invalid number of threads: %ld",
                                 VAR_9);
                VAR_3->config.n_threads = (unsigned short int)VAR_9;
            } else if (FUNC_17(VAR_5->key, "max_post_data_size")) {
                long VAR_10 = FUNC_14(
                    VAR_5->value, (long)VAR_1.max_post_data_size);
                if (VAR_10 < 0)
                    FUNC_2(VAR_6, "Negative maximum post data size");
                else if (VAR_10 > 128 * (1 << 20))
                    FUNC_2(VAR_6,
                                 "Maximum post data can't be over 128MiB");
                VAR_3->config.max_post_data_size = (size_t)VAR_10;
            } else if (FUNC_17(VAR_5->key, "allow_temp_files")) {
                VAR_3->config.allow_post_temp_file =
                    !!FUNC_18(VAR_5->value, "post");
            } else {
                FUNC_2(VAR_6, "Unknown config key: %s", VAR_5->key);
            }
            break;
        case 129:
            if (FUNC_17(VAR_5->key, "listener")) {
                if (!VAR_7) {
                    FUNC_13(VAR_6, VAR_5, VAR_3);
                    VAR_7 = 1;
                } else {
                    FUNC_2(VAR_6, "Only one listener supported");
                }
            } else if (FUNC_17(VAR_5->key, "straitjacket")) {
                FUNC_10(VAR_6);
            } else {
                FUNC_2(VAR_6, "Unknown section type: %s", VAR_5->key);
            }
            break;
        case 128:
            FUNC_2(VAR_6, "Unexpected section end");
        }
    }

    if (FUNC_3(VAR_6)) {
        FUNC_8("Error on config file \"%s\", line %d: %s", VAR_4,
                             FUNC_1(VAR_6), FUNC_3(VAR_6));
    }

    FUNC_0(VAR_6);

    return 1;
}

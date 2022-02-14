
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct private_data {int patterns; } ;
struct pattern {char* pattern; char* expand_pattern; int flags; } ;
struct config_line {int type; int key; int value; } ;
struct config {int dummy; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct config*,char*,...) ;
 struct config_line* FUNC_1 (struct config*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int) ;
 struct pattern* FUNC_4 (int *) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 (int ,char*) ;

__attribute__((used)) static bool FUNC_7(struct private_data *VAR_4,
                                       struct config *VAR_5,
                                       const struct config_line *VAR_6)
{
    struct pattern *VAR_7;
    char *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);
    bool VAR_10 = 0;

    VAR_7 = FUNC_4(&VAR_4->patterns);
    if (!VAR_7)
        goto out_no_free;

    VAR_7->pattern = FUNC_5(VAR_6->value);
    if (!VAR_7->pattern)
        goto out;

    while ((VAR_6 = FUNC_1(VAR_5))) {
        switch (VAR_6->type) {
        case 130:
            if (FUNC_6(VAR_6->key, "redirect_to")) {
                FUNC_2(VAR_8);

                VAR_8 = FUNC_5(VAR_6->value);
                if (!VAR_8)
                    goto out;
            } else if (FUNC_6(VAR_6->key, "rewrite_as")) {
                FUNC_2(VAR_9);

                VAR_9 = FUNC_5(VAR_6->value);
                if (!VAR_9)
                    goto out;
            } else if (FUNC_6(VAR_6->key, "expand_with_lua")) {
                VAR_10 = FUNC_3(VAR_6->value, 0);
            } else {
                FUNC_0(VAR_5, "Unexpected key: %s", VAR_6->key);
                goto out;
            }
            break;
        case 129:
            FUNC_0(VAR_5, "Unexpected section: %s", VAR_6->key);
            break;
        case 128:
            if (VAR_8 && VAR_9) {
                FUNC_0(
                    VAR_5,
                    "`redirect to` and `rewrite as` are mutually exclusive");
                goto out;
            }
            if (VAR_8) {
                VAR_7->expand_pattern = VAR_8;
                VAR_7->flags |= VAR_2;
            } else if (VAR_9) {
                VAR_7->expand_pattern = VAR_9;
                VAR_7->flags |= VAR_3;
            } else {
                FUNC_0(
                    VAR_5,
                    "either `redirect to` or `rewrite as` are required");
                goto out;
            }
            if (VAR_10) {



                FUNC_0(VAR_5, "Lwan has been built without Lua. "
                                     "`expand_with_lua` is not available");
                goto out;

            } else {
                VAR_7->flags |= VAR_1;
            }

            return 1;
        }
    }

out:
    FUNC_2(VAR_7->pattern);
    FUNC_2(VAR_8);
    FUNC_2(VAR_9);
out_no_free:
    FUNC_0(VAR_5, "Could not copy pattern");
    return 0;
}

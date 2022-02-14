
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lwan_module {int dummy; } ;
struct TYPE_2__ {int listener; } ;
struct lwan {TYPE_1__ config; } ;
struct config_line {int type; char* key; int value; } ;
struct config {int dummy; } ;





 int FUNC_0 (struct config*,char*,...) ;
 struct config_line* FUNC_1 (struct config*) ;
 void* FUNC_2 (int ) ;
 struct lwan_module* FUNC_3 (char*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct config*,struct config_line const*,struct lwan*,struct lwan_module const*,void*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct config *VAR_0,
                           const struct config_line *VAR_1,
                           struct lwan *VAR_2)
{
    FUNC_4(VAR_2->config.listener);
    VAR_2->config.listener = FUNC_6(VAR_1->value);

    while ((VAR_1 = FUNC_1(VAR_0))) {
        switch (VAR_1->type) {
        case 130:
            FUNC_0(VAR_0, "Expecting prefix section");
            return;
        case 129:
            if (VAR_1->key[0] == '&') {
                void *VAR_3 = FUNC_2(VAR_1->key + 1);
                if (VAR_3) {
                    FUNC_5(VAR_0, VAR_1, VAR_2, ((void*)0), VAR_3);
                    continue;
                }

                FUNC_0(VAR_0, "Could not find handler name: %s", VAR_1->key + 1);
                return;
            }

            const struct lwan_module *VAR_4 = FUNC_3(VAR_1->key);
            if (VAR_4) {
                FUNC_5(VAR_0, VAR_1, VAR_2, VAR_4, ((void*)0));
                continue;
            }

            FUNC_0(VAR_0, "Invalid section or module not found: %s", VAR_1->key);
            return;
        case 128:
            return;
        }
    }

    FUNC_0(VAR_0, "Expecting section end while parsing listener");
}

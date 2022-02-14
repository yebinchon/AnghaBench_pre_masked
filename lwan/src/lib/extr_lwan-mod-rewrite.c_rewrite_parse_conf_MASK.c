
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct private_data {int dummy; } ;
struct config_line {int type; int key; } ;
struct config {int dummy; } ;





 int FUNC_0 (struct config*,char*,int ) ;
 int FUNC_1 (struct config*) ;
 struct config_line* FUNC_2 (struct config*) ;
 int FUNC_3 (struct private_data*,struct config*,struct config_line const*) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static bool FUNC_5(void *VAR_0, struct config *VAR_1)
{
    struct private_data *VAR_2 = VAR_0;
    const struct config_line *VAR_3;

    while ((VAR_3 = FUNC_2(VAR_1))) {
        switch (VAR_3->type) {
        case 130:
            FUNC_0(VAR_1, "Unknown option: %s", VAR_3->key);
            break;
        case 129:
            if (FUNC_4(VAR_3->key, "pattern")) {
                FUNC_3(VAR_2, VAR_1, VAR_3);
            } else {
                FUNC_0(VAR_1, "Unknown section: %s", VAR_3->key);
            }
            break;
        case 128:
            break;
        }
    }

    return !FUNC_1(VAR_1);
}

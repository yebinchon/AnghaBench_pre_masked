
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_ctx {int dummy; } ;
typedef enum mp_dnd_action { ____Placeholder_mp_dnd_action } mp_dnd_action ;


 int VAR_0 ;
 int FUNC_0 (struct input_ctx*,char const**) ;
 int FUNC_1 (char*) ;

void FUNC_2(struct input_ctx *VAR_1, int VAR_2, char **VAR_3,
                         enum mp_dnd_action VAR_4)
{
    bool VAR_5 = 1;
    for (int VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
        VAR_5 &= FUNC_1(VAR_3[VAR_6]);

    if (VAR_5) {
        for (int VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
            const char *VAR_8[] = {
                "osd-auto",
                "sub-add",
                VAR_3[VAR_7],
                ((void*)0)
            };
            FUNC_0(VAR_1, VAR_8);
        }
    } else {
        for (int VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
            const char *VAR_10[] = {
                "osd-auto",
                "loadfile",
                VAR_3[VAR_9],


                (VAR_9 == 0 && VAR_4 == VAR_0) ? "replace" : "append-play",
                ((void*)0)
            };
            FUNC_0(VAR_1, VAR_10);
        }
    }
}

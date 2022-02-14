
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_ctx {int mutex; struct input_ctx* current_down_cmd; int cmd_queue; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct input_ctx*) ;
 int FUNC_2 (struct input_ctx*) ;
 int FUNC_3 (struct input_ctx*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct input_ctx*,int) ;
 int FUNC_6 (struct input_ctx*) ;

void FUNC_7(struct input_ctx *VAR_0)
{
    if (!VAR_0)
        return;

    FUNC_2(VAR_0);
    FUNC_5(VAR_0, 1);
    FUNC_3(VAR_0);

    FUNC_1(VAR_0);
    FUNC_0(&VAR_0->cmd_queue);
    FUNC_6(VAR_0->current_down_cmd);
    FUNC_4(&VAR_0->mutex);
    FUNC_6(VAR_0);
}

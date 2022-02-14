
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_ctx {int cmd_queue; } ;
typedef int mp_cmd_t ;


 int FUNC_0 (struct input_ctx*) ;
 int FUNC_1 (struct input_ctx*) ;
 int FUNC_2 (struct input_ctx*) ;
 int FUNC_3 (int *,int *) ;

int FUNC_4(struct input_ctx *VAR_0, mp_cmd_t *VAR_1)
{
    FUNC_0(VAR_0);
    if (VAR_1) {
        FUNC_3(&VAR_0->cmd_queue, VAR_1);
        FUNC_2(VAR_0);
    }
    FUNC_1(VAR_0);
    return 1;
}

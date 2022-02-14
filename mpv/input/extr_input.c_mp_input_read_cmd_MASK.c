
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_cmd {int mouse_y; int mouse_x; scalar_t__ mouse_move; } ;
struct input_ctx {int mouse_y; int mouse_x; int cmd_queue; } ;
typedef struct mp_cmd mp_cmd_t ;


 struct mp_cmd* FUNC_0 (struct input_ctx*) ;
 int FUNC_1 (struct input_ctx*) ;
 int FUNC_2 (struct input_ctx*) ;
 struct mp_cmd* FUNC_3 (int *) ;

mp_cmd_t *FUNC_4(struct input_ctx *VAR_0)
{
    FUNC_1(VAR_0);
    struct mp_cmd *VAR_1 = FUNC_3(&VAR_0->cmd_queue);
    if (!VAR_1)
        VAR_1 = FUNC_0(VAR_0);
    if (VAR_1 && VAR_1->mouse_move) {
        VAR_0->mouse_x = VAR_1->mouse_x;
        VAR_0->mouse_y = VAR_1->mouse_y;
    }
    FUNC_2(VAR_0);
    return VAR_1;
}

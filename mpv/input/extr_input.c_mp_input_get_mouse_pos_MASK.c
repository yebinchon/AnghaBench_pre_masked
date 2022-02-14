
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_ctx {int mouse_x; int mouse_y; } ;


 int FUNC_0 (struct input_ctx*) ;
 int FUNC_1 (struct input_ctx*) ;

void FUNC_2(struct input_ctx *VAR_0, int *VAR_1, int *VAR_2)
{
    FUNC_0(VAR_0);
    *VAR_1 = VAR_0->mouse_x;
    *VAR_2 = VAR_0->mouse_y;
    FUNC_1(VAR_0);
}

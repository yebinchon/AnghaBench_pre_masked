
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_ctx {int mouse_event_counter; int mouse_y; int mouse_x; } ;


 int FUNC_0 (struct input_ctx*) ;
 int FUNC_1 (struct input_ctx*) ;
 scalar_t__ FUNC_2 (struct input_ctx*,int ,int ) ;

unsigned int FUNC_3(struct input_ctx *VAR_0)
{


    FUNC_0(VAR_0);
    if (FUNC_2(VAR_0, VAR_0->mouse_x, VAR_0->mouse_y))
        VAR_0->mouse_event_counter++;
    int VAR_1 = VAR_0->mouse_event_counter;
    FUNC_1(VAR_0);
    return VAR_1;
}

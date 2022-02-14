
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int control_lock; void* control_cb_ctx; int control_cb; } ;
typedef TYPE_1__ mpv_render_context ;
typedef int mp_render_cb_control_fn ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(mpv_render_context *VAR_0,
                                            mp_render_cb_control_fn VAR_1,
                                            void *VAR_2)
{
    FUNC_0(&VAR_0->control_lock);
    VAR_0->control_cb = VAR_1;
    VAR_0->control_cb_ctx = VAR_2;
    FUNC_1(&VAR_0->control_lock);
}

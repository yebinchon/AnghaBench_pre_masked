
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int (* mpv_render_update_fn ) (void*) ;
struct TYPE_3__ {int update_lock; void* update_cb_ctx; int (* update_cb ) (void*) ;} ;
typedef TYPE_1__ mpv_render_context ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (void*) ;

void FUNC_3(mpv_render_context *VAR_0,
                                            mpv_render_update_fn VAR_1,
                                            void *VAR_2)
{
    FUNC_0(&VAR_0->update_lock);
    VAR_0->update_cb = VAR_1;
    VAR_0->update_cb_ctx = VAR_2;
    if (VAR_0->update_cb)
        VAR_0->update_cb(VAR_0->update_cb_ctx);
    FUNC_1(&VAR_0->update_lock);
}

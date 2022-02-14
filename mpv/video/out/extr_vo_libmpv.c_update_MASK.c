
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpv_render_context {int update_lock; int update_cond; int update_cb_ctx; int (* update_cb ) (int ) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct mpv_render_context *VAR_0)
{
    FUNC_1(&VAR_0->update_lock);
    if (VAR_0->update_cb)
        VAR_0->update_cb(VAR_0->update_cb_ctx);

    FUNC_0(&VAR_0->update_cond);
    FUNC_2(&VAR_0->update_lock);
}

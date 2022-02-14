
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpv_render_context {int dummy; } ;
struct mp_client_api {int lock; struct mpv_render_context* render_context; } ;


 scalar_t__ FUNC_0 (struct mpv_render_context*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

struct mpv_render_context *
FUNC_3(struct mp_client_api *VAR_0)
{
    struct mpv_render_context *VAR_1 = ((void*)0);
    FUNC_1(&VAR_0->lock);
    if (VAR_0->render_context && FUNC_0(VAR_0->render_context))
        VAR_1 = VAR_0->render_context;
    FUNC_2(&VAR_0->lock);
    return VAR_1;
}

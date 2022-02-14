
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_priv {struct mpv_render_context* ctx; } ;
struct vo {struct vo_priv* priv; } ;
struct mp_image_params {int dummy; } ;
struct mpv_render_context {int need_reconfig; int need_resize; int lock; struct mp_image_params img_params; } ;


 int VAR_0 ;
 int FUNC_0 (struct vo*,int ,int *) ;
 int FUNC_1 (struct mpv_render_context*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct vo *VAR_1, struct mp_image_params *VAR_2)
{
    struct vo_priv *VAR_3 = VAR_1->priv;
    struct mpv_render_context *VAR_4 = VAR_3->ctx;

    FUNC_2(&VAR_4->lock);
    FUNC_1(VAR_4, 1);
    VAR_4->img_params = *VAR_2;
    VAR_4->need_reconfig = 1;
    VAR_4->need_resize = 1;
    FUNC_3(&VAR_4->lock);

    FUNC_0(VAR_1, VAR_0, ((void*)0));

    return 0;
}

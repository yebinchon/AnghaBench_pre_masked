
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo_priv {struct mpv_render_context* ctx; } ;
struct vo {struct vo_priv* priv; } ;
struct mpv_render_context {scalar_t__ dr; } ;
struct mp_image {int dummy; } ;


 struct mp_image* FUNC_0 (scalar_t__,int,int,int,int) ;

__attribute__((used)) static struct mp_image *FUNC_1(struct vo *VAR_0, int VAR_1, int VAR_2, int VAR_3,
                                  int VAR_4)
{
    struct vo_priv *VAR_5 = VAR_0->priv;
    struct mpv_render_context *VAR_6 = VAR_5->ctx;

    if (VAR_6->dr)
        return FUNC_0(VAR_6->dr, VAR_1, VAR_2, VAR_3, VAR_4);

    return ((void*)0);
}

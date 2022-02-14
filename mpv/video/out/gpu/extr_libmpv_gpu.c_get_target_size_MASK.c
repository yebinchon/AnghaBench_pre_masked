
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct render_backend {struct priv* priv; } ;
struct TYPE_4__ {int w; int h; } ;
struct ra_tex {TYPE_1__ params; } ;
struct priv {TYPE_3__* context; } ;
typedef int mpv_render_param ;
struct TYPE_6__ {TYPE_2__* fns; } ;
struct TYPE_5__ {int (* wrap_fbo ) (TYPE_3__*,int *,struct ra_tex**) ;} ;


 int FUNC_0 (TYPE_3__*,int *,struct ra_tex**) ;

__attribute__((used)) static int FUNC_1(struct render_backend *VAR_0, mpv_render_param *VAR_1,
                           int *VAR_2, int *VAR_3)
{
    struct priv *VAR_4 = VAR_0->priv;


    struct ra_tex *VAR_5;
    int VAR_6 = VAR_4->context->fns->wrap_fbo(VAR_4->context, VAR_1, &VAR_5);
    if (VAR_6 < 0)
        return VAR_6;
    *VAR_2 = VAR_5->params.w;
    *VAR_3 = VAR_5->params.h;
    return 0;
}

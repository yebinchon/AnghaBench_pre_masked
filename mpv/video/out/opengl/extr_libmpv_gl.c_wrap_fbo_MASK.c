
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ra_tex {int dummy; } ;
struct ra_swapchain {int dummy; } ;
struct ra_fbo {struct ra_tex* tex; } ;
struct priv {TYPE_2__* ra_ctx; TYPE_1__* gl; } ;
struct libmpv_gpu_context {struct priv* priv; } ;
typedef int mpv_render_param ;
struct TYPE_7__ {int fbo; int h; int w; } ;
typedef TYPE_3__ mpv_opengl_fbo ;
struct TYPE_6__ {struct ra_swapchain* swapchain; } ;
struct TYPE_5__ {int mpgl_caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct libmpv_gpu_context*,char*) ;
 TYPE_3__* FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (struct ra_swapchain*,int ,int ,int ) ;
 int FUNC_3 (struct ra_swapchain*,struct ra_fbo*) ;

__attribute__((used)) static int FUNC_4(struct libmpv_gpu_context *VAR_4, mpv_render_param *VAR_5,
                    struct ra_tex **VAR_6)
{
    struct priv *VAR_7 = VAR_4->priv;

    mpv_opengl_fbo *VAR_8 =
        FUNC_1(VAR_5, VAR_3, ((void*)0));
    if (!VAR_8)
        return VAR_1;

    if (VAR_8->fbo && !(VAR_7->gl->mpgl_caps & VAR_0)) {
        FUNC_0(VAR_4, "Rendering to FBO requested, but no FBO extension found!\n");
        return VAR_2;
    }

    struct ra_swapchain *VAR_9 = VAR_7->ra_ctx->swapchain;
    struct ra_fbo VAR_10;
    FUNC_2(VAR_9, VAR_8->w, VAR_8->h, VAR_8->fbo);
    FUNC_3(VAR_9, &VAR_10);
    *VAR_6 = VAR_10.tex;
    return 0;
}

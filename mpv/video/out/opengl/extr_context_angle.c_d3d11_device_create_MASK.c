
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vo {int log; TYPE_1__* opts; } ;
struct ra_ctx {struct vo* vo; struct priv* priv; } ;
struct priv {int egl_display; int egl_device; int d3d11_device; int d3d11_context; struct angle_opts* opts; } ;
struct d3d11_device_opts {int allow_warp; int force_warp; int max_frame_latency; int min_feature_level; int max_feature_level; } ;
struct angle_opts {int d3d11_warp; int d3d11_feature_level; } ;
struct TYPE_2__ {int swapchain_depth; } ;
typedef int (* PFNEGLGETPLATFORMDISPLAYEXTPROC ) (int ,int ,int *) ;
typedef int (* PFNEGLCREATEDEVICEANGLEPROC ) (int ,int ,int *) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct vo*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,struct d3d11_device_opts*,int *) ;

__attribute__((used)) static bool FUNC_4(struct ra_ctx *VAR_3)
{
    struct priv *VAR_4 = VAR_3->priv;
    struct vo *VAR_5 = VAR_3->vo;
    struct angle_opts *VAR_6 = VAR_4->opts;

    struct d3d11_device_opts VAR_7 = {
        .allow_warp = VAR_6->d3d11_warp != 0,
        .force_warp = VAR_6->d3d11_warp == 1,
        .max_feature_level = VAR_6->d3d11_feature_level,
        .min_feature_level = VAR_0,
        .max_frame_latency = VAR_3->vo->opts->swapchain_depth,
    };
    if (!FUNC_3(VAR_5->log, &VAR_7, &VAR_4->d3d11_device))
        return 0;
    FUNC_0(VAR_4->d3d11_device, &VAR_4->d3d11_context);

    PFNEGLGETPLATFORMDISPLAYEXTPROC VAR_8 =
        (PFNEGLGETPLATFORMDISPLAYEXTPROC)FUNC_2("eglGetPlatformDisplayEXT");
    if (!VAR_8) {
        FUNC_1(VAR_5, "Missing EGL_EXT_platform_base\n");
        return 0;
    }
    PFNEGLCREATEDEVICEANGLEPROC VAR_9 =
        (PFNEGLCREATEDEVICEANGLEPROC)FUNC_2("eglCreateDeviceANGLE");
    if (!VAR_9) {
        FUNC_1(VAR_5, "Missing EGL_EXT_platform_device\n");
        return 0;
    }

    VAR_4->egl_device = VAR_9(VAR_1,
        VAR_4->d3d11_device, ((void*)0));
    if (!VAR_4->egl_device) {
        FUNC_1(VAR_5, "Couldn't create EGL device\n");
        return 0;
    }

    VAR_4->egl_display = VAR_8(VAR_2,
        VAR_4->egl_device, ((void*)0));
    if (!VAR_4->egl_display) {
        FUNC_1(VAR_5, "Couldn't get EGL display\n");
        return 0;
    }

    return 1;
}

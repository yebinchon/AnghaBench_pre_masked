
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo {int dummy; } ;
struct ra_ctx {struct vo* vo; struct priv* priv; } ;
struct priv {int egl_context; int egl_backbuffer; int egl_display; int egl_config; int d3d11_backbuffer; int dxgi_swapchain; } ;
typedef int HRESULT ;
typedef int EGLint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int *,void**) ;
 int VAR_6 ;
 int FUNC_2 (struct vo*,char*) ;
 int FUNC_3 (int ,int ,int ,int ,int *) ;
 int FUNC_4 (int ,int ,int ,int ) ;

__attribute__((used)) static bool FUNC_5(struct ra_ctx *VAR_7)
{
    struct priv *VAR_8 = VAR_7->priv;
    struct vo *VAR_9 = VAR_7->vo;
    HRESULT VAR_10;

    VAR_10 = FUNC_1(VAR_8->dxgi_swapchain, 0, &VAR_6,
        (void**)&VAR_8->d3d11_backbuffer);
    if (FUNC_0(VAR_10)) {
        FUNC_2(VAR_9, "Couldn't get swap chain back buffer\n");
        return 0;
    }

    EGLint VAR_11[] = {
        VAR_3, VAR_4,
        VAR_5, VAR_2,
        VAR_1,
    };
    VAR_8->egl_backbuffer = FUNC_3(VAR_8->egl_display,
        VAR_0, VAR_8->d3d11_backbuffer, VAR_8->egl_config,
        VAR_11);
    if (!VAR_8->egl_backbuffer) {
        FUNC_2(VAR_9, "Couldn't create EGL pbuffer\n");
        return 0;
    }

    FUNC_4(VAR_8->egl_display, VAR_8->egl_backbuffer, VAR_8->egl_backbuffer,
                   VAR_8->egl_context);
    return 1;
}

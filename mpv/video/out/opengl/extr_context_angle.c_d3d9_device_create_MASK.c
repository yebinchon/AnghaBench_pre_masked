
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo {int dummy; } ;
struct ra_ctx {struct vo* vo; struct priv* priv; } ;
struct priv {scalar_t__ egl_display; } ;
typedef scalar_t__ (* PFNEGLGETPLATFORMDISPLAYEXTPROC ) (int ,int ,int *) ;
typedef int EGLint ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct vo*,char*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static bool FUNC_2(struct ra_ctx *VAR_8)
{
    struct priv *VAR_9 = VAR_8->priv;
    struct vo *VAR_10 = VAR_8->vo;

    PFNEGLGETPLATFORMDISPLAYEXTPROC VAR_11 =
        (PFNEGLGETPLATFORMDISPLAYEXTPROC)FUNC_1("eglGetPlatformDisplayEXT");
    if (!VAR_11) {
        FUNC_0(VAR_10, "Missing EGL_EXT_platform_base\n");
        return 0;
    }

    EGLint VAR_12[] = {
        VAR_6,
            VAR_7,
        VAR_4,
            VAR_5,
        VAR_1,
    };
    VAR_9->egl_display = VAR_11(VAR_3,
        VAR_0, VAR_12);
    if (VAR_9->egl_display == VAR_2) {
        FUNC_0(VAR_10, "Couldn't get display\n");
        return 0;
    }

    return 1;
}

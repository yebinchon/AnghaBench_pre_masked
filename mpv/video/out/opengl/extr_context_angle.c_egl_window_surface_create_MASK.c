
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo {int dummy; } ;
struct ra_ctx {struct vo* vo; struct priv* priv; } ;
struct priv {int flipped; int egl_context; int egl_window; int egl_display; int egl_config; } ;
typedef scalar_t__ EGLint ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct vo*,char*) ;
 int FUNC_1 (int *,scalar_t__*,int,scalar_t__) ;
 int FUNC_2 (struct vo*,char*) ;
 int FUNC_3 (int ,int ,int ,scalar_t__*) ;
 scalar_t__ FUNC_4 (int ,int ,int ,scalar_t__*) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (struct ra_ctx*) ;
 int FUNC_7 (scalar_t__*) ;
 int FUNC_8 (struct vo*) ;

__attribute__((used)) static bool FUNC_9(struct ra_ctx *VAR_4)
{
    struct priv *VAR_5 = VAR_4->priv;
    struct vo *VAR_6 = VAR_4->vo;

    int VAR_7 = 0;
    EGLint *VAR_8 = ((void*)0);

    EGLint VAR_9;
    if (FUNC_4(VAR_5->egl_display, VAR_5->egl_config,
                           VAR_1, &VAR_9))
    {
        if (VAR_9 == VAR_3) {
            FUNC_1(((void*)0), VAR_8, VAR_7,
                VAR_2);
            FUNC_1(((void*)0), VAR_8, VAR_7,
                VAR_3);
            VAR_5->flipped = 1;
            FUNC_2(VAR_6, "Rendering flipped.\n");
        }
    }

    FUNC_1(((void*)0), VAR_8, VAR_7, VAR_0);
    VAR_5->egl_window = FUNC_3(VAR_5->egl_display, VAR_5->egl_config,
                                           FUNC_8(VAR_6), VAR_8);
    FUNC_7(VAR_8);
    if (!VAR_5->egl_window) {
        FUNC_0(VAR_6, "Could not create EGL surface!\n");
        goto fail;
    }

    FUNC_5(VAR_5->egl_display, VAR_5->egl_window, VAR_5->egl_window,
                   VAR_5->egl_context);
    return 1;
fail:
    FUNC_6(VAR_4);
    return 0;
}

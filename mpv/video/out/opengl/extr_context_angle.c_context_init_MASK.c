
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo {int dummy; } ;
struct ra_ctx {struct vo* vo; struct priv* priv; } ;
struct priv {int egl_config; int egl_context; int egl_display; } ;


 int VAR_0 ;
 int FUNC_0 (struct vo*,char*,char const*) ;
 int FUNC_1 (struct vo*,char*) ;
 int FUNC_2 (struct ra_ctx*) ;
 int FUNC_3 (int ,int *,int *) ;
 char* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct ra_ctx*,int ,int *,int *) ;

__attribute__((used)) static bool FUNC_6(struct ra_ctx *VAR_1)
{
    struct priv *VAR_2 = VAR_1->priv;
    struct vo *VAR_3 = VAR_1->vo;

    if (!FUNC_3(VAR_2->egl_display, ((void*)0), ((void*)0))) {
        FUNC_1(VAR_3, "Couldn't initialize EGL\n");
        goto fail;
    }

    const char *VAR_4 = FUNC_4(VAR_2->egl_display, VAR_0);
    if (VAR_4)
        FUNC_0(VAR_3, "EGL extensions: %s\n", VAR_4);

    if (!FUNC_5(VAR_1, VAR_2->egl_display, &VAR_2->egl_context,
                              &VAR_2->egl_config))
    {
        FUNC_1(VAR_3, "Could not create EGL context!\n");
        goto fail;
    }

    return 1;
fail:
    FUNC_2(VAR_1);
    return 0;
}

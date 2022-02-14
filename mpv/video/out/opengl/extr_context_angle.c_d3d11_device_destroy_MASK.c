
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_ctx {struct priv* priv; } ;
struct priv {int d3d11_device; scalar_t__ egl_device; scalar_t__ egl_display; } ;
typedef int (* PFNEGLRELEASEDEVICEANGLEPROC ) (scalar_t__) ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct ra_ctx *VAR_1)
{
    struct priv *VAR_2 = VAR_1->priv;

    PFNEGLRELEASEDEVICEANGLEPROC VAR_3 =
        (PFNEGLRELEASEDEVICEANGLEPROC)FUNC_1("eglReleaseDeviceANGLE");

    if (VAR_2->egl_display)
        FUNC_2(VAR_2->egl_display);
    VAR_2->egl_display = VAR_0;

    if (VAR_2->egl_device && VAR_3)
        VAR_3(VAR_2->egl_device);
    VAR_2->egl_device = 0;

    FUNC_0(VAR_2->d3d11_device);
}

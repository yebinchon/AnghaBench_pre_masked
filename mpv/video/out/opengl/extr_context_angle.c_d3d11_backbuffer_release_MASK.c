
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_ctx {struct priv* priv; } ;
struct priv {int d3d11_backbuffer; scalar_t__ egl_backbuffer; int egl_display; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_3(struct ra_ctx *VAR_2)
{
    struct priv *VAR_3 = VAR_2->priv;

    if (VAR_3->egl_backbuffer) {
        FUNC_2(VAR_3->egl_display, VAR_1, VAR_1,
                       VAR_0);
        FUNC_1(VAR_3->egl_display, VAR_3->egl_backbuffer);
    }
    VAR_3->egl_backbuffer = VAR_1;

    FUNC_0(VAR_3->d3d11_backbuffer);
}

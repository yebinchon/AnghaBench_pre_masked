
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_ctx {struct priv* priv; } ;
struct priv {int egl_display; scalar_t__ egl_window; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct ra_ctx *VAR_2)
{
    struct priv *VAR_3 = VAR_2->priv;
    if (VAR_3->egl_window) {
        FUNC_0(VAR_3->egl_display, VAR_1, VAR_1,
                       VAR_0);
    }
}

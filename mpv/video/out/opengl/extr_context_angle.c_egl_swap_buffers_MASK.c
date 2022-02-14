
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_ctx {struct priv* priv; } ;
struct priv {int egl_window; int egl_display; } ;


 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct ra_ctx *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;
    FUNC_0(VAR_1->egl_display, VAR_1->egl_window);
}

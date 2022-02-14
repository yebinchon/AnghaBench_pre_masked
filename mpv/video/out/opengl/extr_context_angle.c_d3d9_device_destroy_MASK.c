
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_ctx {struct priv* priv; } ;
struct priv {scalar_t__ egl_display; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct ra_ctx *VAR_1)
{
    struct priv *VAR_2 = VAR_1->priv;

    if (VAR_2->egl_display)
        FUNC_0(VAR_2->egl_display);
    VAR_2->egl_display = VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_ctx {struct priv* priv; } ;
struct priv {scalar_t__ egl_context; int egl_display; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,int ,int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct ra_ctx *VAR_2)
{
    struct priv *VAR_3 = VAR_2->priv;
    if (VAR_3->egl_context) {
        FUNC_1(VAR_3->egl_display, VAR_1, VAR_1,
                       VAR_0);
        FUNC_0(VAR_3->egl_display, VAR_3->egl_context);
    }
    VAR_3->egl_context = VAR_0;
}

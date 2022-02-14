
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_ctx {struct priv* priv; } ;
struct priv {int egl_display; scalar_t__ egl_context; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ra_ctx*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 (struct ra_ctx*) ;
 int VAR_2 ;
 int FUNC_4 (int ,struct ra_ctx*) ;

__attribute__((used)) static void FUNC_5(struct ra_ctx *VAR_3)
{
    struct priv *VAR_4 = VAR_3->priv;
    FUNC_3(VAR_3);

    FUNC_4(VAR_2, VAR_3);

    FUNC_0(VAR_3);

    if (VAR_4->egl_context)
        FUNC_1(VAR_4->egl_display, VAR_4->egl_context);
    VAR_4->egl_context = VAR_0;
    FUNC_2();
    VAR_4->egl_display = VAR_1;
}

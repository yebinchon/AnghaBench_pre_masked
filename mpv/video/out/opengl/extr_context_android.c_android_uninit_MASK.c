
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_ctx {int vo; struct priv* priv; } ;
struct priv {scalar_t__ egl_context; int egl_display; scalar_t__ egl_surface; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,int ,int ,int ) ;
 int FUNC_3 (struct ra_ctx*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct ra_ctx *VAR_2)
{
    struct priv *VAR_3 = VAR_2->priv;
    FUNC_3(VAR_2);

    if (VAR_3->egl_surface) {
        FUNC_2(VAR_3->egl_display, VAR_1, VAR_1,
                       VAR_0);
        FUNC_1(VAR_3->egl_display, VAR_3->egl_surface);
    }
    if (VAR_3->egl_context)
        FUNC_0(VAR_3->egl_display, VAR_3->egl_context);

    FUNC_4(VAR_2->vo);
}

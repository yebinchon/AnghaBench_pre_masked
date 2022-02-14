
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_ctx {struct priv* priv; } ;
struct priv {scalar_t__ update; scalar_t__ display; scalar_t__ window; scalar_t__ egl_surface; int egl_display; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct ra_ctx *VAR_2)
{
    struct priv *VAR_3 = VAR_2->priv;

    if (VAR_3->egl_surface) {
        FUNC_1(VAR_3->egl_display, VAR_1, VAR_1,
                       VAR_0);
        FUNC_0(VAR_3->egl_display, VAR_3->egl_surface);
        VAR_3->egl_surface = VAR_1;
    }

    if (VAR_3->window)
        FUNC_3(VAR_3->update, VAR_3->window);
    VAR_3->window = 0;
    if (VAR_3->display)
        FUNC_2(VAR_3->display);
    VAR_3->display = 0;
    if (VAR_3->update)
        FUNC_4(VAR_3->update);
    VAR_3->update = 0;
}

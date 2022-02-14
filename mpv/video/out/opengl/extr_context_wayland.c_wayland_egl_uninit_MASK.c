
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_ctx {int vo; struct priv* priv; } ;
struct priv {int egl_display; int * egl_context; int egl_surface; scalar_t__ egl_window; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int *,int *,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ra_ctx*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__) ;

__attribute__((used)) static void FUNC_8(struct ra_ctx *VAR_1)
{
    struct priv *VAR_2 = VAR_1->priv;

    FUNC_5(VAR_1);

    if (VAR_2->egl_context) {
        FUNC_3();
        if (VAR_2->egl_window)
            FUNC_7(VAR_2->egl_window);
        FUNC_1(VAR_2->egl_display, VAR_2->egl_surface);
        FUNC_2(VAR_2->egl_display, ((void*)0), ((void*)0), VAR_0);
        FUNC_0(VAR_2->egl_display, VAR_2->egl_context);
        VAR_2->egl_context = ((void*)0);
    }
    FUNC_4(VAR_2->egl_display);

    FUNC_6(VAR_1->vo);
}

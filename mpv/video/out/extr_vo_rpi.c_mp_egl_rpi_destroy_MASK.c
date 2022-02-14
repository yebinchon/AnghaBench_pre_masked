
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_egl_rpi {int * gl; scalar_t__ egl_display; scalar_t__ egl_context; scalar_t__ egl_surface; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (scalar_t__,int ,int ,scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct mp_egl_rpi *VAR_3)
{
    if (VAR_3->egl_display) {
        FUNC_2(VAR_3->egl_display, VAR_2, VAR_2,
                       VAR_0);
    }
    if (VAR_3->egl_surface)
        FUNC_1(VAR_3->egl_display, VAR_3->egl_surface);
    if (VAR_3->egl_context)
        FUNC_0(VAR_3->egl_display, VAR_3->egl_context);
    VAR_3->egl_context = VAR_0;
    FUNC_3();
    VAR_3->egl_display = VAR_1;
    FUNC_4(VAR_3->gl);
    VAR_3->gl = ((void*)0);
}

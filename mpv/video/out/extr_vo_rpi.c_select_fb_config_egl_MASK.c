
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mp_egl_rpi {int egl_display; } ;
typedef int EGLint ;
typedef int * EGLConfig ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct mp_egl_rpi*,char*) ;
 int FUNC_1 (int ,int*,int **,int,int*) ;

__attribute__((used)) static EGLConfig FUNC_2(struct mp_egl_rpi *VAR_9)
{
    EGLint VAR_10[] = {
        VAR_7, VAR_8,
        VAR_5, 8,
        VAR_2, 8,
        VAR_0, 8,
        VAR_1, 0,
        VAR_6, VAR_4,
        VAR_3
    };

    EGLint VAR_11;
    EGLConfig VAR_12;

    FUNC_1(VAR_9->egl_display, VAR_10, &VAR_12, 1, &VAR_11);

    if (!VAR_11) {
        FUNC_0(VAR_9, "Could find EGL configuration!\n");
        return ((void*)0);
    }

    return VAR_12;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct vo {TYPE_1__* x11; } ;
struct ra_ctx {struct vo* vo; struct priv* priv; } ;
struct priv {int egl_display; } ;
struct TYPE_8__ {int visualid; } ;
typedef TYPE_2__ XVisualInfo ;
struct TYPE_7__ {int display; } ;
typedef int EGLConfig ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int ,int ,TYPE_2__*,int*) ;
 int FUNC_2 (int ,int ,int ,int*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_4(void *VAR_2, EGLConfig *VAR_3, int VAR_4)
{
    struct ra_ctx *VAR_5 = VAR_2;
    struct priv *VAR_6 = VAR_5->priv;
    struct vo *VAR_7 = VAR_5->vo;

    for (int VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
        int VAR_9 = 0, VAR_10;
        FUNC_2(VAR_6->egl_display, VAR_3[VAR_8], VAR_0, &VAR_9);
        XVisualInfo VAR_11 = {.visualid = VAR_9};
        XVisualInfo *VAR_12 = FUNC_1(VAR_7->x11->display, VAR_1,
                                         &VAR_11, &VAR_10);
        if (VAR_12) {
            bool VAR_13 = FUNC_3(VAR_12);
            FUNC_0(VAR_12);
            if (VAR_13)
                return VAR_8;
        }
    }

    return 0;
}

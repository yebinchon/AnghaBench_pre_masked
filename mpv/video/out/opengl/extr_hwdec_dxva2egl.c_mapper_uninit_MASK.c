
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ra_hwdec_mapper {int * tex; int ra; struct priv* priv; } ;
struct priv {scalar_t__ query9; scalar_t__ texture9; scalar_t__ surface9; scalar_t__ egl_surface; scalar_t__ egl_display; int gl_texture; } ;
struct TYPE_3__ {int (* DeleteTextures ) (int,int *) ;} ;
typedef TYPE_1__ GL ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,scalar_t__) ;
 int FUNC_4 (scalar_t__,scalar_t__,int ) ;
 TYPE_1__* FUNC_5 (int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int,int *) ;

__attribute__((used)) static void FUNC_8(struct ra_hwdec_mapper *VAR_1)
{
    struct priv *VAR_2 = VAR_1->priv;
    GL *VAR_3 = FUNC_5(VAR_1->ra);

    FUNC_6(VAR_1->ra, &VAR_1->tex[0]);
    VAR_3->DeleteTextures(1, &VAR_2->gl_texture);

    if (VAR_2->egl_display && VAR_2->egl_surface) {
        FUNC_4(VAR_2->egl_display, VAR_2->egl_surface, VAR_0);
        FUNC_3(VAR_2->egl_display, VAR_2->egl_surface);
    }

    if (VAR_2->surface9)
        FUNC_1(VAR_2->surface9);

    if (VAR_2->texture9)
        FUNC_2(VAR_2->texture9);

    if (VAR_2->query9)
        FUNC_0(VAR_2->query9);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ra_tex_gl {int texture; scalar_t__ fbo; scalar_t__ own_objects; int pbo; struct ra_tex_gl* priv; } ;
struct ra_tex {int texture; scalar_t__ fbo; scalar_t__ own_objects; int pbo; struct ra_tex* priv; } ;
struct ra {int dummy; } ;
struct TYPE_3__ {int (* DeleteTextures ) (int,int *) ;int (* DeleteFramebuffers ) (int,scalar_t__*) ;} ;
typedef TYPE_1__ GL ;


 int FUNC_0 (struct ra*,int *) ;
 TYPE_1__* FUNC_1 (struct ra*) ;
 int FUNC_2 (int,scalar_t__*) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (struct ra_tex_gl*) ;

__attribute__((used)) static void FUNC_5(struct ra *VAR_0, struct ra_tex *VAR_1)
{
    GL *VAR_2 = FUNC_1(VAR_0);
    struct ra_tex_gl *VAR_3 = VAR_1->priv;

    FUNC_0(VAR_0, &VAR_3->pbo);

    if (VAR_3->own_objects) {
        if (VAR_3->fbo)
            VAR_2->DeleteFramebuffers(1, &VAR_3->fbo);

        VAR_2->DeleteTextures(1, &VAR_3->texture);
    }
    FUNC_4(VAR_3);
    FUNC_4(VAR_1);
}

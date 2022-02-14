
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct vaapi_gl_mapper_priv {scalar_t__* gl_textures; } ;
struct ra_hwdec_mapper {int ra; struct priv* priv; } ;
struct priv {struct vaapi_gl_mapper_priv* interop_mapper_priv; int * tex; } ;
struct TYPE_3__ {int (* DeleteTextures ) (int,scalar_t__*) ;} ;
typedef TYPE_1__ GL ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int,scalar_t__*) ;
 int FUNC_3 (struct vaapi_gl_mapper_priv*) ;

__attribute__((used)) static void FUNC_4(const struct ra_hwdec_mapper *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;
    struct vaapi_gl_mapper_priv *VAR_2 = VAR_1->interop_mapper_priv;

    if (VAR_2) {
        GL *VAR_3 = FUNC_0(VAR_0->ra);
        VAR_3->DeleteTextures(4, VAR_2->gl_textures);
        for (int VAR_4 = 0; VAR_4 < 4; VAR_4++) {
            VAR_2->gl_textures[VAR_4] = 0;
            FUNC_1(VAR_0->ra, &VAR_1->tex[VAR_4]);
        }
        FUNC_3(VAR_2);
        VAR_1->interop_mapper_priv = ((void*)0);
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ra_hwdec_mapper {int ra; struct priv* priv; TYPE_1__* owner; } ;
struct priv_owner {int egl_display; int (* DestroyStreamKHR ) (int ,scalar_t__) ;} ;
struct priv {int gl_textures; scalar_t__ egl_stream; } ;
struct TYPE_5__ {int (* DeleteTextures ) (int,int ) ;} ;
struct TYPE_4__ {struct priv_owner* priv; } ;
typedef TYPE_2__ GL ;


 TYPE_2__* FUNC_0 (int ) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(struct ra_hwdec_mapper *VAR_0)
{
    struct priv_owner *VAR_1 = VAR_0->owner->priv;
    struct priv *VAR_2 = VAR_0->priv;
    GL *VAR_3 = FUNC_0(VAR_0->ra);

    if (VAR_2->egl_stream)
        VAR_1->DestroyStreamKHR(VAR_1->egl_display, VAR_2->egl_stream);
    VAR_2->egl_stream = 0;

    VAR_3->DeleteTextures(2, VAR_2->gl_textures);
}

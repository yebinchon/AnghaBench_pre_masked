
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ra_hwdec_mapper {int ra; struct priv* priv; } ;
struct priv {int gl_planes; } ;
struct TYPE_3__ {int (* DeleteTextures ) (int ,int ) ;} ;
typedef TYPE_1__ GL ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct ra_hwdec_mapper *VAR_1)
{
    struct priv *VAR_2 = VAR_1->priv;
    GL *VAR_3 = FUNC_0(VAR_1->ra);

    VAR_3->DeleteTextures(VAR_0, VAR_2->gl_planes);
}

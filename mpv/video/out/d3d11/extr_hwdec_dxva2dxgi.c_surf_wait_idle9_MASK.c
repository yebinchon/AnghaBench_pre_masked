
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ra_hwdec_mapper {TYPE_1__* src; struct priv* priv; } ;
struct queue_surf {int stage9; int surf9; } ;
struct priv {size_t queue_pos; TYPE_2__** queue; int dev9; } ;
struct TYPE_8__ {int member_3; int member_2; int member_1; int member_0; } ;
struct TYPE_7__ {int busy11; } ;
struct TYPE_6__ {int h; int w; } ;
typedef TYPE_3__ RECT ;
typedef int HRESULT ;
typedef int D3DLOCKED_RECT ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,TYPE_3__*,int ,TYPE_3__*,int ) ;
 int FUNC_2 (int ,int *,int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (struct ra_hwdec_mapper*,char*,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static bool FUNC_7(struct ra_hwdec_mapper *VAR_2,
                            struct queue_surf *VAR_3)
{
    struct priv *VAR_4 = VAR_2->priv;
    HRESULT VAR_5;




    RECT VAR_6 = {0, 0, FUNC_4(16, VAR_2->src->w), FUNC_4(16, VAR_2->src->h)};
    VAR_5 = FUNC_1(VAR_4->dev9, VAR_3->surf9, &VAR_6, VAR_3->stage9,
                                        &VAR_6, VAR_1);
    if (FUNC_0(VAR_5)) {
        FUNC_5(VAR_2, "Couldn't copy to D3D9 staging texture: %s\n",
               FUNC_6(VAR_5));
        return 0;
    }

    D3DLOCKED_RECT VAR_7;
    VAR_5 = FUNC_2(VAR_3->stage9, &VAR_7, ((void*)0), VAR_0);
    if (FUNC_0(VAR_5)) {
        FUNC_5(VAR_2, "Couldn't map D3D9 staging texture: %s\n",
               FUNC_6(VAR_5));
        return 0;
    }

    FUNC_3(VAR_3->stage9);
    VAR_4->queue[VAR_4->queue_pos]->busy11 = 1;
    return 1;
}

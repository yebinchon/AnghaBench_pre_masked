
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ra_hwdec_mapper {int * tex; TYPE_1__* src; struct priv* priv; } ;
struct queue_surf {int tex; int surf9; } ;
struct priv {int dev9; } ;
struct TYPE_6__ {int member_3; int member_2; int member_1; int member_0; } ;
struct TYPE_5__ {scalar_t__* planes; int h; int w; } ;
typedef TYPE_2__ RECT ;
typedef int IDirect3DSurface9 ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,TYPE_2__*,int ,TYPE_2__*,int ) ;
 int FUNC_2 (struct ra_hwdec_mapper*,char*,int ) ;
 int FUNC_3 (int ) ;
 struct queue_surf* FUNC_4 (struct ra_hwdec_mapper*) ;
 int FUNC_5 (struct ra_hwdec_mapper*,struct queue_surf*) ;

__attribute__((used)) static int FUNC_6(struct ra_hwdec_mapper *VAR_1)
{
    struct priv *VAR_2 = VAR_1->priv;
    HRESULT VAR_3;

    struct queue_surf *VAR_4 = FUNC_4(VAR_1);
    if (!VAR_4)
        return -1;

    RECT VAR_5 = {0, 0, VAR_1->src->w, VAR_1->src->h};
    IDirect3DSurface9* VAR_6 = (IDirect3DSurface9 *)VAR_1->src->planes[3];

    VAR_3 = FUNC_1(VAR_2->dev9, VAR_6, &VAR_5, VAR_4->surf9,
                                        &VAR_5, VAR_0);
    if (FUNC_0(VAR_3)) {
        FUNC_2(VAR_1, "StretchRect() failed: %s\n", FUNC_3(VAR_3));
        return -1;
    }

    if (!FUNC_5(VAR_1, VAR_4))
        return -1;

    VAR_1->tex[0] = VAR_4->tex;
    return 0;
}

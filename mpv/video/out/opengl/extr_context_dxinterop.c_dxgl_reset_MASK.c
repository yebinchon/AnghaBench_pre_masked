
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ra_ctx {TYPE_1__* vo; struct priv* priv; } ;
struct priv {scalar_t__ width; scalar_t__ height; scalar_t__ requested_swapinterval; scalar_t__ swapinterval; int lost_device; int device; } ;
struct TYPE_3__ {scalar_t__ dwidth; scalar_t__ dheight; } ;
typedef int HRESULT ;
typedef int D3DPRESENT_PARAMETERS ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int *,int *) ;
 int FUNC_2 (TYPE_1__*,char*,...) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 scalar_t__ FUNC_4 (struct ra_ctx*) ;
 int FUNC_5 (struct ra_ctx*) ;
 int FUNC_6 (struct ra_ctx*,int *) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct ra_ctx *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;
    HRESULT VAR_2;


    if (VAR_0->vo->dwidth == VAR_1->width && VAR_0->vo->dheight == VAR_1->height &&
        VAR_1->requested_swapinterval == VAR_1->swapinterval && !VAR_1->lost_device)
        return;

    FUNC_5(VAR_0);

    D3DPRESENT_PARAMETERS VAR_3;
    FUNC_6(VAR_0, &VAR_3);

    VAR_2 = FUNC_1(VAR_1->device, &VAR_3, ((void*)0));
    if (FUNC_0(VAR_2)) {
        VAR_1->lost_device = 1;
        FUNC_2(VAR_0->vo, "Couldn't reset device: %s\n", FUNC_7(VAR_2));
        return;
    }

    if (FUNC_4(VAR_0) < 0) {
        VAR_1->lost_device = 1;
        FUNC_2(VAR_0->vo, "Couldn't recreate Direct3D objects after reset\n");
        return;
    }

    FUNC_3(VAR_0->vo, "Direct3D device reset\n");
    VAR_1->width = VAR_0->vo->dwidth;
    VAR_1->height = VAR_0->vo->dheight;
    VAR_1->swapinterval = VAR_1->requested_swapinterval;
    VAR_1->lost_device = 0;
}

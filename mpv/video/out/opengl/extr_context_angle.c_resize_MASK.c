
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ra_ctx {TYPE_1__* vo; int swapchain; struct priv* priv; } ;
struct priv {scalar_t__ dxgi_swapchain; } ;
struct TYPE_2__ {int dheight; int dwidth; } ;


 int FUNC_0 (struct ra_ctx*) ;
 int FUNC_1 () ;
 int FUNC_2 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct ra_ctx *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;
    if (VAR_1->dxgi_swapchain)
        FUNC_0(VAR_0);
    else
        FUNC_1();
    FUNC_2(VAR_0->swapchain, VAR_0->vo->dwidth, VAR_0->vo->dheight, 0);
}

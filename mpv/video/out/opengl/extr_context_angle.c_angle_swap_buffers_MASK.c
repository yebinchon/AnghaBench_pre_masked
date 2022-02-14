
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_ctx {struct priv* priv; } ;
struct priv {scalar_t__ dxgi_swapchain; } ;


 int FUNC_0 (struct ra_ctx*) ;
 int FUNC_1 (struct ra_ctx*) ;

__attribute__((used)) static void FUNC_2(struct ra_ctx *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;
    if (VAR_1->dxgi_swapchain)
        FUNC_0(VAR_0);
    else
        FUNC_1(VAR_0);
}

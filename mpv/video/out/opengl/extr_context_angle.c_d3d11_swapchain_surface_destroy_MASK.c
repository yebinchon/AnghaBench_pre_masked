
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_ctx {struct priv* priv; } ;
struct priv {int dxgi_swapchain; scalar_t__ d3d11_context; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ra_ctx*) ;

__attribute__((used)) static void FUNC_3(struct ra_ctx *VAR_0)
{
    struct priv *VAR_1 = VAR_0->priv;

    bool VAR_2 = VAR_1->dxgi_swapchain;
    FUNC_1(VAR_1->dxgi_swapchain);
    FUNC_2(VAR_0);




    if (VAR_2 && VAR_1->d3d11_context)
        FUNC_0(VAR_1->d3d11_context);
}

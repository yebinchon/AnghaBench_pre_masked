
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ra_ctx {int vo; struct priv* priv; } ;
struct priv {scalar_t__ d3d11_device; scalar_t__ dxgi_swapchain; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct ra_ctx*) ;
 int FUNC_2 (struct ra_ctx*) ;
 int FUNC_3 (struct ra_ctx*) ;
 int FUNC_4 (struct ra_ctx*) ;
 int FUNC_5 (struct ra_ctx*) ;
 int FUNC_6 (struct ra_ctx*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct ra_ctx *VAR_1)
{
    struct priv *VAR_2 = VAR_1->priv;

    FUNC_6(VAR_1);

    FUNC_0(VAR_0);





    if (VAR_2->dxgi_swapchain)
        FUNC_3(VAR_1);
    else
        FUNC_5(VAR_1);

    FUNC_1(VAR_1);


    if (VAR_2->d3d11_device)
        FUNC_2(VAR_1);
    else
        FUNC_4(VAR_1);

    FUNC_7(VAR_1->vo);
}

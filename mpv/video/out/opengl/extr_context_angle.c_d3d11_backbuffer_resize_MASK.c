
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vo {int dummy; } ;
struct ra_ctx {struct vo* vo; struct priv* priv; } ;
struct priv {int sc_width; int sc_height; int dxgi_swapchain; } ;
typedef int HRESULT ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int,int,int ,int ) ;
 int FUNC_2 (struct vo*,char*,...) ;
 int FUNC_3 (struct ra_ctx*) ;
 int FUNC_4 (struct ra_ctx*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct ra_ctx*) ;

__attribute__((used)) static void FUNC_7(struct ra_ctx *VAR_1)
{
    struct priv *VAR_2 = VAR_1->priv;
    struct vo *VAR_3 = VAR_1->vo;
    HRESULT VAR_4;

    int VAR_5 = VAR_2->sc_width;
    int VAR_6 = VAR_2->sc_height;

    FUNC_6(VAR_1);

    if (VAR_5 == VAR_2->sc_width && VAR_6 == VAR_2->sc_height)
        return;



    FUNC_4(VAR_1);



    VAR_4 = FUNC_1(VAR_2->dxgi_swapchain, 0, VAR_2->sc_width,
        VAR_2->sc_height, VAR_0, 0);
    if (FUNC_0(VAR_4))
        FUNC_2(VAR_3, "Couldn't resize swapchain: %s\n", FUNC_5(VAR_4));

    if (!FUNC_3(VAR_1))
        FUNC_2(VAR_3, "Couldn't get back buffer after resize\n");
}

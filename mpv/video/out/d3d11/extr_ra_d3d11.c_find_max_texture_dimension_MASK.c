
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ra_d3d11 {int dev; } ;
struct ra {int max_texture_wh; struct ra_d3d11* priv; } ;
struct TYPE_4__ {int Count; } ;
struct TYPE_5__ {int Width; int Height; int MipLevels; int ArraySize; int BindFlags; int Format; TYPE_1__ SampleDesc; } ;
typedef TYPE_2__ D3D11_TEXTURE2D_DESC ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,TYPE_2__*,int *,int *) ;

__attribute__((used)) static void FUNC_2(struct ra *VAR_2)
{
    struct ra_d3d11 *VAR_3 = VAR_2->priv;

    D3D11_TEXTURE2D_DESC VAR_4 = {
        .Width = VAR_2->max_texture_wh,
        .Height = VAR_2->max_texture_wh,
        .MipLevels = 1,
        .ArraySize = 1,
        .SampleDesc.Count = 1,
        .Format = VAR_1,
        .BindFlags = VAR_0,
    };
    while (1) {
        VAR_4.Height = VAR_4.Width *= 2;
        if (VAR_4.Width >= 0x8000000u)
            return;
        if (FUNC_0(FUNC_1(VAR_3->dev, &VAR_4, ((void*)0), ((void*)0))))
            return;
        VAR_2->max_texture_wh = VAR_4.Width;
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int desktop_fmt; int cur_backbuf_height; int cur_backbuf_width; int vo; scalar_t__ opt_swap_discard; } ;
typedef TYPE_1__ d3d_priv ;
struct TYPE_7__ {int BackBufferCount; int EnableAutoDepthStencil; int BackBufferFormat; int PresentationInterval; int MultiSampleType; int BackBufferHeight; int BackBufferWidth; int hDeviceWindow; int Flags; int SwapEffect; int Windowed; } ;
typedef TYPE_2__ D3DPRESENT_PARAMETERS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(d3d_priv *VAR_7,
                                   D3DPRESENT_PARAMETERS *VAR_8)
{

    FUNC_0(VAR_8, 0, sizeof(D3DPRESENT_PARAMETERS));
    VAR_8->Windowed = VAR_6;
    VAR_8->SwapEffect =
        VAR_7->opt_swap_discard ? VAR_4 : VAR_3;
    VAR_8->Flags = VAR_1;
    VAR_8->hDeviceWindow = FUNC_1(VAR_7->vo);
    VAR_8->BackBufferWidth = VAR_7->cur_backbuf_width;
    VAR_8->BackBufferHeight = VAR_7->cur_backbuf_height;
    VAR_8->MultiSampleType = VAR_0;
    VAR_8->PresentationInterval = VAR_2;
    VAR_8->BackBufferFormat = VAR_7->desktop_fmt;
    VAR_8->BackBufferCount = 1;
    VAR_8->EnableAutoDepthStencil = VAR_5;
}

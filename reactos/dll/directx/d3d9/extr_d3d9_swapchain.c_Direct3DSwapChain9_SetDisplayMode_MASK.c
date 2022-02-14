
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_6__ {int BackBufferHeight; int BackBufferWidth; } ;
struct TYPE_5__ {int dwHeight; int dwWidth; } ;
typedef TYPE_1__ Direct3DSwapChain9_INT ;
typedef TYPE_2__ D3DPRESENT_PARAMETERS ;



VOID FUNC_0(Direct3DSwapChain9_INT* VAR_0, D3DPRESENT_PARAMETERS* VAR_1)
{
    VAR_0->dwWidth = VAR_1->BackBufferWidth;
    VAR_0->dwHeight = VAR_1->BackBufferHeight;
}

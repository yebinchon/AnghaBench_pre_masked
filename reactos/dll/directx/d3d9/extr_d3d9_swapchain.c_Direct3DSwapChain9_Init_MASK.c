
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int SwapEffect; } ;
struct TYPE_11__ {int* red; int* green; int* blue; } ;
struct TYPE_12__ {size_t ChainIndex; int * pCursor; int BaseObject; TYPE_3__ PresentParameters; int SwapEffect; TYPE_1__ GammaRamp; } ;
typedef int HRESULT ;
typedef TYPE_2__ Direct3DSwapChain9_INT ;
typedef int DIRECT3DDEVICE9_INT ;
typedef TYPE_3__ D3DPRESENT_PARAMETERS ;


 int * FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (int *,int **) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_4 (TYPE_2__*,TYPE_3__*) ;
 scalar_t__ FUNC_5 (int ) ;

HRESULT FUNC_6(Direct3DSwapChain9_INT* VAR_2, D3DPRESENT_PARAMETERS* VAR_3)
{
    int VAR_4;
    DIRECT3DDEVICE9_INT* VAR_5;

    for (VAR_4 = 0; VAR_4 < 256; VAR_4++)
    {
        VAR_2->GammaRamp.red[VAR_4] =
            VAR_2->GammaRamp.green[VAR_4] =
            VAR_2->GammaRamp.blue[VAR_4] = VAR_4;
    }

    VAR_2->PresentParameters = VAR_3[VAR_2->ChainIndex];
    VAR_2->SwapEffect = VAR_3->SwapEffect;
    FUNC_4(VAR_2, &VAR_2->PresentParameters);

    if (FUNC_5(FUNC_1(&VAR_2->BaseObject, &VAR_5)))
    {
        FUNC_2("Could not get the swapchain device");
        return VAR_0;
    }

    VAR_2->pCursor = FUNC_0(VAR_5, VAR_2);
    if (((void*)0) == VAR_2->pCursor)
    {
        FUNC_2("Could not allocate D3D9Cursor");
        return VAR_1;
    }

    return FUNC_3(VAR_2, VAR_3);
}

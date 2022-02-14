
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_19__ {scalar_t__ pfn; } ;
struct TYPE_18__ {TYPE_6__* ppdev; } ;
struct TYPE_12__ {int * EnableDirectDraw; int * DisableDirectDraw; } ;
struct TYPE_17__ {TYPE_5__* pEDDgpl; TYPE_1__ DriverFunctions; } ;
struct TYPE_15__ {int dwSize; } ;
struct TYPE_14__ {int dwSize; } ;
struct TYPE_13__ {int dwSize; } ;
struct TYPE_16__ {TYPE_4__ ddPaletteCallbacks; TYPE_3__ ddSurfaceCallbacks; TYPE_2__ ddCallbacks; int * pvmList; } ;
typedef TYPE_6__* PPDEVOBJ ;
typedef int (* PGD_DXDDENABLEDIRECTDRAW ) (TYPE_6__*,int ) ;
typedef int * PEPROCESS ;
typedef TYPE_8__* PDC ;
typedef int NTSTATUS ;
typedef int HDC ;
typedef int DD_SURFACECALLBACKS ;
typedef int DD_PALETTECALLBACKS ;
typedef int DD_CALLBACKS ;
typedef int BOOL ;


 TYPE_8__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_8__*) ;
 int FUNC_2 (char*,...) ;
 size_t VAR_0 ;
 int FUNC_3 (int ,int *,int ,int *,int *,int *) ;
 int VAR_1 ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 TYPE_9__* VAR_3 ;
 int * VAR_4 ;

BOOL
FUNC_5(HDC VAR_5)
{
    NTSTATUS VAR_6;
    PEPROCESS VAR_7 = ((void*)0);
    PDC VAR_8 = ((void*)0);
    PPDEVOBJ VAR_9 = ((void*)0);
    PGD_DXDDENABLEDIRECTDRAW VAR_10 = ((void*)0);
    BOOL VAR_11 = VAR_1;




    if (VAR_4 == ((void*)0))
    {
        VAR_6 = FUNC_3(0,((void*)0),0,((void*)0),((void*)0), VAR_7);
        if (!FUNC_4(VAR_6))
        {
            FUNC_2("Warning: Failed to create the directx interface\n");
            return VAR_1;
        }
    }

    VAR_8 = FUNC_0(VAR_5);
    if (VAR_8 == ((void*)0))
    {
        FUNC_2("Warning: Failed to lock hdc\n");
        return VAR_1;
    }

    VAR_9 = VAR_8->ppdev;


    if ( ( VAR_9->DriverFunctions.DisableDirectDraw == ((void*)0)) ||
          ( VAR_9->DriverFunctions.EnableDirectDraw == ((void*)0)))
    {
        FUNC_2("Warning : DisableDirectDraw and EnableDirectDraw are NULL, no dx driver \n");
    }
    else
    {


        if ( VAR_9->pEDDgpl->pvmList == ((void*)0))
        {
            VAR_9->pEDDgpl->ddCallbacks.dwSize = sizeof(DD_CALLBACKS);
            VAR_9->pEDDgpl->ddSurfaceCallbacks.dwSize = sizeof(DD_SURFACECALLBACKS);
            VAR_9->pEDDgpl->ddPaletteCallbacks.dwSize = sizeof(DD_PALETTECALLBACKS);

            VAR_10 = (PGD_DXDDENABLEDIRECTDRAW)VAR_3[VAR_0].pfn;
            if (VAR_10 == ((void*)0))
            {
                FUNC_2("Warning: no pfnDdEnableDirectDraw\n");
            }
            else
            {
                FUNC_2(" call to pfnDdEnableDirectDraw \n ");


                VAR_11 = VAR_10(VAR_8->ppdev, VAR_2);
            }
        }
        else
        {
            FUNC_2(" The dxg.sys and graphic card driver interface is enabled \n ");
            VAR_11 = VAR_2;
        }
    }


    FUNC_2("Return value : 0x%08x\n",VAR_11);
    FUNC_1(VAR_8);
    FUNC_2(" end call to pfnDdEnableDirectDraw \n ");
    return VAR_11;
}

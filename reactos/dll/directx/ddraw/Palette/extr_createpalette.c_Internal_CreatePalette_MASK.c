
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_10__ ;


typedef scalar_t__ ULONG_PTR ;
struct TYPE_22__ {scalar_t__ dwReserved1; struct TYPE_22__* lpLcl; struct TYPE_22__* lpLink; scalar_t__ dwProcessId; scalar_t__ lpVtbl; int dwFlags; TYPE_5__* lpDD_lcl; struct TYPE_22__* lpGbl; } ;
struct TYPE_21__ {TYPE_5__* lpLcl; } ;
struct TYPE_20__ {int dwLocalFlags; scalar_t__ dwProcessId; TYPE_4__* lpGbl; } ;
struct TYPE_19__ {TYPE_7__* palList; TYPE_3__* lpDDCBtmp; } ;
struct TYPE_17__ {scalar_t__ (* CreatePalette ) (TYPE_10__*) ;} ;
struct TYPE_16__ {int dwFlags; scalar_t__ (* CreatePalette ) (TYPE_10__*) ;} ;
struct TYPE_18__ {TYPE_2__ HELDD; TYPE_1__ HALDD; } ;
struct TYPE_15__ {scalar_t__ (* CreatePalette ) (TYPE_10__*) ;scalar_t__ ddRVal; int lpColorTable; TYPE_7__* lpDDPalette; TYPE_4__* lpDD; int member_0; } ;
typedef scalar_t__ PVOID ;
typedef scalar_t__ LPUNKNOWN ;
typedef int LPPALETTEENTRY ;
typedef scalar_t__ LPDIRECTDRAWPALETTE ;
typedef TYPE_6__* LPDDRAWI_DIRECTDRAW_INT ;
typedef TYPE_7__* LPDDRAWI_DDRAWPALETTE_LCL ;
typedef TYPE_7__* LPDDRAWI_DDRAWPALETTE_INT ;
typedef TYPE_7__* LPDDRAWI_DDRAWPALETTE_GBL ;
typedef scalar_t__ HRESULT ;
typedef int DWORD ;
typedef int DDRAWI_DDRAWPALETTE_LCL ;
typedef int DDRAWI_DDRAWPALETTE_INT ;
typedef int DDRAWI_DDRAWPALETTE_GBL ;
typedef TYPE_10__ DDHAL_CREATEPALETTEDATA ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (char*) ;
 int VAR_10 ;
 int FUNC_2 (TYPE_7__*,int) ;
 int FUNC_3 (TYPE_7__*) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (TYPE_10__*) ;

HRESULT
FUNC_7( LPDDRAWI_DIRECTDRAW_INT VAR_11, DWORD VAR_12,
                  LPPALETTEENTRY VAR_13, LPDIRECTDRAWPALETTE* VAR_14, LPUNKNOWN VAR_15)
{
    DDHAL_CREATEPALETTEDATA VAR_16 = { 0 };

    LPDDRAWI_DDRAWPALETTE_INT VAR_17 = ((void*)0);
    LPDDRAWI_DDRAWPALETTE_LCL VAR_18 = ((void*)0);
    LPDDRAWI_DDRAWPALETTE_GBL VAR_19 = ((void*)0);

    HRESULT VAR_20;

    if(VAR_15)
    {
        return VAR_0;
    }

    if(!(VAR_11->lpLcl->dwLocalFlags & VAR_8))
    {
        return VAR_3;
    }


    if (VAR_11->lpLcl->dwProcessId != FUNC_4() )
    {
        return VAR_2;
    }


    FUNC_2(VAR_17, sizeof( DDRAWI_DDRAWPALETTE_INT ) );
    if( VAR_17 == ((void*)0) )
    {
        VAR_20 = VAR_5;
        goto cleanup;
    }

    FUNC_2(VAR_18, sizeof( DDRAWI_DDRAWPALETTE_LCL ) );
    if( VAR_18 == ((void*)0) )
    {
        VAR_20 = VAR_5;
        goto cleanup;
    }

    FUNC_2(VAR_19, sizeof( DDRAWI_DDRAWPALETTE_GBL ) );
    if( VAR_19 == ((void*)0) )
    {
        VAR_20 = VAR_5;
        goto cleanup;
    }



    VAR_17->lpLcl = VAR_18;
    VAR_18->lpGbl = VAR_19;

    VAR_18->lpDD_lcl = VAR_19->lpDD_lcl = VAR_11->lpLcl;
    VAR_19->dwFlags = FUNC_0(VAR_12);

    VAR_17->lpVtbl = (PVOID)&VAR_10;
    VAR_19->dwProcessId = FUNC_4();

    VAR_16.lpDD = VAR_11->lpLcl->lpGbl;
    VAR_16.lpDDPalette = VAR_19;
    if(VAR_11->lpLcl->lpGbl->lpDDCBtmp->HALDD.dwFlags & VAR_6) {
        VAR_16.CreatePalette = VAR_11->lpLcl->lpGbl->lpDDCBtmp->HALDD.CreatePalette;
        FUNC_1("Using HAL CreatePalette\n");
    }
    else {
        VAR_16.CreatePalette = VAR_11->lpLcl->lpGbl->lpDDCBtmp->HELDD.CreatePalette;
        FUNC_1("Using HEL CreatePalette\n");
    }
    VAR_16.ddRVal = VAR_1;
    VAR_16.lpColorTable = VAR_13;

    if (VAR_16.CreatePalette(&VAR_16) == VAR_7)
    {
        FUNC_1("mDdCreateSurface failed with DDHAL_DRIVER_NOTHANDLED.");
        VAR_20 = VAR_4;
        goto cleanup;
    }

    if (VAR_16.ddRVal != VAR_9)
    {
        FUNC_1("mDdCreateSurface failed.");
        VAR_20 = VAR_16.ddRVal;
        goto cleanup;
    }

    *VAR_14 = (LPDIRECTDRAWPALETTE)VAR_17;
    VAR_17->lpLink = VAR_11->lpLcl->lpGbl->palList;
    VAR_11->lpLcl->lpGbl->palList = VAR_17;
    VAR_17->lpLcl->dwReserved1 = (ULONG_PTR)VAR_11;
    FUNC_5(*VAR_14);

    return VAR_9;

cleanup:
    if(VAR_17) FUNC_3(VAR_17);
    if(VAR_18) FUNC_3(VAR_18);
    if(VAR_19) FUNC_3(VAR_19);

    return VAR_20;
}

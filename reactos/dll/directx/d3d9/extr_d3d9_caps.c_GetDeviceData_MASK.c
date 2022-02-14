
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * pSupportedQueriesList; scalar_t__ NumSupportedQueries; int * pSupportedExtendedModes; scalar_t__ NumSupportedExtendedModes; int * pSupportedFormatOps; scalar_t__ NumSupportedFormatOps; int dwRefreshRate; int DisplayFormat; int RawDisplayFormat; int dwDisplayHeight; int dwDisplayWidth; } ;
struct TYPE_6__ {TYPE_2__ DriverCaps; int hD3DRefDll; int szDeviceName; int D3D9Callbacks; int * pUnknown6BC; int DeviceType; int hDC; } ;
typedef int * LPDDSURFACEDESC ;
typedef TYPE_1__* LPD3D9_DEVICEDATA ;
typedef scalar_t__ DWORD ;
typedef int DDSURFACEDESC ;
typedef int DDPIXELFORMAT ;
typedef int D3DQUERYTYPE ;
typedef int D3DHAL_GLOBALDRIVERDATA ;
typedef int D3DHAL_D3DEXTENDEDCAPS ;
typedef int D3DDISPLAYMODE ;
typedef TYPE_2__ D3D9_DRIVERCAPS ;
typedef int D3D9_CALLBACKS ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int **,int ,int *) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (int *,TYPE_2__*,int *,int ,int ,int *,int *,int *,int *,int *,int *,scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_4 () ;
 int VAR_1 ;
 int * FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ,int *) ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_8 (scalar_t__,int) ;

BOOL FUNC_9(LPD3D9_DEVICEDATA VAR_3)
{
    BOOL VAR_4;
    D3DHAL_GLOBALDRIVERDATA VAR_5;
    D3DHAL_D3DEXTENDEDCAPS VAR_6;
    LPDDSURFACEDESC VAR_7;
    DDPIXELFORMAT* VAR_8;
    D3DDISPLAYMODE* VAR_9;
    D3DQUERYTYPE* VAR_10;
    DWORD VAR_11 = 0;
    DWORD VAR_12 = 0;
    DWORD VAR_13 = 0;
    DWORD VAR_14 = 0;

    if (((void*)0) == VAR_3->pUnknown6BC)
    {
        FUNC_1(
            VAR_3->hDC,
            VAR_3->szDeviceName,
            &VAR_3->pUnknown6BC,
            VAR_3->DeviceType,
            &VAR_3->hD3DRefDll
            );

        if (((void*)0) == VAR_3->pUnknown6BC)
        {
            FUNC_2("Failed to create DirectDrawObject for Direct3D9");
            return VAR_0;
        }
    }
    else
    {
        D3D9_DRIVERCAPS VAR_15;
        D3D9_CALLBACKS VAR_16;

        if (VAR_0 == FUNC_0(VAR_3->pUnknown6BC))
        {
            FUNC_2("Failed to re-enable DirectDrawObject");
            return VAR_0;
        }

        VAR_4 = FUNC_3(
            VAR_3->pUnknown6BC,
            &VAR_15,
            &VAR_16,
            VAR_3->szDeviceName,
            VAR_3->hD3DRefDll,
            &VAR_5,
            &VAR_6,
            ((void*)0),
            ((void*)0),
            ((void*)0),
            ((void*)0),
            &VAR_11,
            &VAR_12,
            &VAR_13,
            &VAR_14
            );

        if (VAR_2 == VAR_4)
        {
            VAR_3->DriverCaps.dwDisplayWidth = VAR_15.dwDisplayWidth;
            VAR_3->DriverCaps.dwDisplayHeight = VAR_15.dwDisplayHeight;
            VAR_3->DriverCaps.RawDisplayFormat = VAR_15.RawDisplayFormat;
            VAR_3->DriverCaps.DisplayFormat = VAR_15.DisplayFormat;
            VAR_3->DriverCaps.dwRefreshRate = VAR_15.dwRefreshRate;
        }

        return VAR_4;
    }


    if (VAR_3->DriverCaps.pSupportedFormatOps)
    {
        FUNC_6(FUNC_4(), 0, VAR_3->DriverCaps.pSupportedFormatOps);
        VAR_3->DriverCaps.pSupportedFormatOps = ((void*)0);
    }
    if (VAR_3->DriverCaps.pSupportedExtendedModes)
    {
        FUNC_6(FUNC_4(), 0, VAR_3->DriverCaps.pSupportedExtendedModes);
        VAR_3->DriverCaps.pSupportedExtendedModes = ((void*)0);
    }
    if (VAR_3->DriverCaps.pSupportedQueriesList)
    {
        FUNC_6(FUNC_4(), 0, VAR_3->DriverCaps.pSupportedQueriesList);
        VAR_3->DriverCaps.pSupportedQueriesList = ((void*)0);
    }

    if (VAR_0 == FUNC_0(VAR_3->pUnknown6BC))
    {
        FUNC_2("Failed to re-enable DirectDrawObject");
        FUNC_7(VAR_3);
        return VAR_0;
    }

    VAR_4 = FUNC_3(
        VAR_3->pUnknown6BC,
        &VAR_3->DriverCaps,
        &VAR_3->D3D9Callbacks,
        VAR_3->szDeviceName,
        VAR_3->hD3DRefDll,
        &VAR_5,
        &VAR_6,
        ((void*)0),
        ((void*)0),
        ((void*)0),
        ((void*)0),
        &VAR_11,
        &VAR_12,
        &VAR_13,
        &VAR_14
        );

    if (VAR_0 == VAR_4)
    {
        FUNC_2("Could not query DirectDrawObject, aborting");
        FUNC_7(VAR_3);
        return VAR_0;
    }

    VAR_7 = FUNC_5(FUNC_4(), VAR_1, FUNC_8(VAR_11, 1) * sizeof(DDSURFACEDESC));
    VAR_8 = FUNC_5(FUNC_4(), VAR_1, FUNC_8(VAR_12, 1) * sizeof(DDPIXELFORMAT));
    VAR_9 = FUNC_5(FUNC_4(), VAR_1, FUNC_8(VAR_13, 1) * sizeof(D3DDISPLAYMODE));
    VAR_10 = FUNC_5(FUNC_4(), VAR_1, FUNC_8(VAR_14, 1) * sizeof(D3DQUERYTYPE));

    VAR_4 = FUNC_3(
        VAR_3->pUnknown6BC,
        &VAR_3->DriverCaps,
        &VAR_3->D3D9Callbacks,
        VAR_3->szDeviceName,
        VAR_3->hD3DRefDll,
        &VAR_5,
        &VAR_6,
        VAR_7,
        VAR_8,
        VAR_9,
        VAR_10,
        &VAR_11,
        &VAR_12,
        &VAR_13,
        &VAR_14
        );

    if (VAR_0 == VAR_4)
    {
        FUNC_2("Could not query DirectDrawObject, aborting");
        FUNC_6(FUNC_4(), 0, VAR_7);
        FUNC_6(FUNC_4(), 0, VAR_8);
        FUNC_6(FUNC_4(), 0, VAR_9);
        FUNC_6(FUNC_4(), 0, VAR_10);
        FUNC_7(VAR_3);
        return VAR_0;
    }

    VAR_3->DriverCaps.NumSupportedFormatOps = VAR_11;
    if (VAR_11 > 0)
        VAR_3->DriverCaps.pSupportedFormatOps = VAR_7;

    VAR_3->DriverCaps.NumSupportedExtendedModes = VAR_13;
    if (VAR_13 > 0)
        VAR_3->DriverCaps.pSupportedExtendedModes = VAR_9;

    VAR_3->DriverCaps.NumSupportedQueries = VAR_14;
    if (VAR_14 > 0)
        VAR_3->DriverCaps.pSupportedQueriesList = VAR_10;

    FUNC_6(FUNC_4(), 0, VAR_8);

    return VAR_2;
}

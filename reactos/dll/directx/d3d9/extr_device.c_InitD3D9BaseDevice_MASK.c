
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_11__ {int RawDisplayFormat; int dwRefreshRate; int dwDisplayHeight; int dwDisplayWidth; } ;
struct TYPE_14__ {TYPE_2__ DriverCaps; } ;
struct TYPE_13__ {TYPE_9__* DisplayAdapters; } ;
struct TYPE_12__ {int lRefCnt; size_t AdjustedBehaviourFlags; size_t BehaviourFlags; size_t NumAdaptersInDevice; int dwDXVersion; size_t* AdapterIndexInGroup; int * pSwapChains; int * pSwapChains2; TYPE_1__* CurrentDisplayMode; int * DeviceData; int hWnd; int DeviceType; TYPE_4__* pDirect3D9; int CriticalSection; int * lpVtbl; int * pUnknown; int dwProcessId; int * pResourceManager; } ;
struct TYPE_10__ {int Format; int RefreshRate; int Height; int Width; } ;
typedef int LPVOID ;
typedef TYPE_3__* LPDIRECT3DDEVICE9_INT ;
typedef TYPE_4__* LPDIRECT3D9_INT ;
typedef int IUnknown ;
typedef int HWND ;
typedef int HRESULT ;
typedef size_t DWORD ;
typedef int D3DPRESENT_PARAMETERS ;
typedef int D3DDEVTYPE ;
typedef int D3D9ResourceManager ;


 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (TYPE_9__*,int *) ;
 int FUNC_2 (int ,TYPE_3__*,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (char*,...) ;
 int VAR_3 ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_6 () ;
 int FUNC_7 (int *,TYPE_3__*) ;
 int FUNC_8 (int *) ;
 int VAR_5 ;

HRESULT FUNC_9(LPDIRECT3DDEVICE9_INT VAR_6, LPDIRECT3D9_INT VAR_7,
                           UINT VAR_8, D3DDEVTYPE VAR_9, HWND VAR_10, DWORD VAR_11,
                           D3DPRESENT_PARAMETERS* VAR_12, DWORD VAR_13)
{
    D3D9ResourceManager* VAR_14;
    DWORD VAR_15;



    if (FUNC_5(FUNC_0((LPVOID *)&VAR_14, sizeof(D3D9ResourceManager))) ||
        FUNC_5(FUNC_7(VAR_14, VAR_6)))
    {
        FUNC_3("Could not create resource manager");
        return VAR_2;
    }

    VAR_6->pResourceManager = VAR_14;

    VAR_6->lpVtbl = &VAR_3;
    VAR_6->lRefCnt = 1;
    VAR_6->dwProcessId = FUNC_6();
    VAR_6->pUnknown = (IUnknown*) &VAR_6->lpVtbl;
    FUNC_8(&VAR_6->CriticalSection);

    VAR_6->pDirect3D9 = VAR_7;
    VAR_6->DeviceType = VAR_9;
    VAR_6->hWnd = VAR_10;
    VAR_6->AdjustedBehaviourFlags = VAR_11;
    VAR_6->BehaviourFlags = VAR_11;
    VAR_6->NumAdaptersInDevice = VAR_13;


    VAR_6->dwDXVersion = 9;

    for (VAR_15 = 0; VAR_15 < VAR_13; VAR_15++)
    {
        if (VAR_4 == FUNC_1(&VAR_7->DisplayAdapters[VAR_15], &VAR_6->DeviceData[VAR_15]))
        {
            FUNC_3("Failed to get device data for adapter: %d", VAR_15);
            return VAR_1;
        }

        VAR_6->AdapterIndexInGroup[VAR_15] = VAR_15;
        VAR_6->CurrentDisplayMode[VAR_15].Width = VAR_7->DisplayAdapters[VAR_15].DriverCaps.dwDisplayWidth;
        VAR_6->CurrentDisplayMode[VAR_15].Height = VAR_7->DisplayAdapters[VAR_15].DriverCaps.dwDisplayHeight;
        VAR_6->CurrentDisplayMode[VAR_15].RefreshRate = VAR_7->DisplayAdapters[VAR_15].DriverCaps.dwRefreshRate;
        VAR_6->CurrentDisplayMode[VAR_15].Format = VAR_7->DisplayAdapters[VAR_15].DriverCaps.RawDisplayFormat;

        VAR_6->pSwapChains[VAR_15] = FUNC_2(VAR_5, VAR_6, VAR_15);
        VAR_6->pSwapChains2[VAR_15] = VAR_6->pSwapChains[VAR_15];

        if (FUNC_5(FUNC_4(VAR_6->pSwapChains[VAR_15], VAR_12)))
        {
            FUNC_3("Failed to init swap chain: %d", VAR_15);
            return VAR_1;
        }
    }

    return VAR_0;
}

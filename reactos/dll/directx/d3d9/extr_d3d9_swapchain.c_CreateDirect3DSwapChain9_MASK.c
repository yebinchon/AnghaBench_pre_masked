
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct _Direct3DDevice9_INT {TYPE_2__* DeviceData; int lpVtbl; } ;
typedef enum REF_TYPE { ____Placeholder_REF_TYPE } REF_TYPE ;
struct TYPE_5__ {int lpVtbl; } ;
struct TYPE_7__ {size_t ChainIndex; size_t AdapterGroupIndex; scalar_t__ pUnknown015c; int pUnknown6BC; int * lpVtbl; TYPE_1__ BaseObject; } ;
struct TYPE_6__ {int pUnknown6BC; } ;
typedef scalar_t__ LPVOID ;
typedef int IUnknown ;
typedef TYPE_3__ Direct3DSwapChain9_INT ;
typedef size_t DWORD ;
typedef int D3D9BaseObject ;


 int FUNC_0 (scalar_t__*,int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *,int,int *) ;

Direct3DSwapChain9_INT* FUNC_4(enum REF_TYPE VAR_1, struct _Direct3DDevice9_INT* VAR_2, DWORD VAR_3)
{
    Direct3DSwapChain9_INT* VAR_4;
    if (FUNC_2(FUNC_0((LPVOID*)&VAR_4, sizeof(Direct3DSwapChain9_INT))))
    {
        FUNC_1("Could not create Direct3DSwapChain9_INT");
        return ((void*)0);
    }

    FUNC_3((D3D9BaseObject*) &VAR_4->BaseObject.lpVtbl, VAR_1, (IUnknown*) &VAR_2->lpVtbl);

    VAR_4->lpVtbl = &VAR_0;

    VAR_4->ChainIndex = VAR_3;
    VAR_4->AdapterGroupIndex = VAR_3;
    VAR_4->pUnknown6BC = VAR_2->DeviceData[VAR_3].pUnknown6BC;
    VAR_4->pUnknown015c = (LPVOID)0xD3D9D3D9;

    return VAR_4;
}

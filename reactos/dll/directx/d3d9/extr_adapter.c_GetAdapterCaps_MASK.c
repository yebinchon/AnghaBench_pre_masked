
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int DeviceType; int NumberOfAdaptersInGroup; int AdapterOrdinalInGroup; int MasterAdapterOrdinal; } ;
struct TYPE_9__ {TYPE_3__ DriverCaps9; } ;
struct TYPE_10__ {int NumAdaptersInGroup; int AdapterIndexInGroup; int MasterAdapterIndex; TYPE_1__ DriverCaps; } ;
typedef TYPE_2__* LPDIRECT3D9_DISPLAYADAPTER ;
typedef int HRESULT ;
typedef int D3DDEVTYPE ;
typedef TYPE_3__ D3DCAPS9 ;


 int FUNC_0 (TYPE_3__*,TYPE_3__*) ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_3__*,int) ;

HRESULT FUNC_4(const LPDIRECT3D9_DISPLAYADAPTER VAR_3, D3DDEVTYPE VAR_4, D3DCAPS9* VAR_5)
{
    HRESULT VAR_6 = VAR_0;
    D3DCAPS9* VAR_7 = ((void*)0);

    FUNC_3(VAR_5, sizeof(D3DCAPS9));

    switch (VAR_4)
    {
    case 131:
        VAR_7 = &VAR_3->DriverCaps.DriverCaps9;
        VAR_6 = VAR_1;
        break;

    case 129:
    case 128:
    case 130:
        VAR_2;
        VAR_6 = VAR_1;
        break;

    default:
        FUNC_1("Unknown DeviceType argument");
        break;
    }

    if (VAR_7 != ((void*)0))
    {
        FUNC_0(VAR_7, VAR_5);
    }

    if (FUNC_2(VAR_6))
    {
        VAR_5->DeviceType = VAR_4;
        VAR_5->MasterAdapterOrdinal = VAR_3->MasterAdapterIndex;
        VAR_5->AdapterOrdinalInGroup = VAR_3->AdapterIndexInGroup;
        VAR_5->NumberOfAdaptersInGroup = VAR_3->NumAdaptersInGroup;
    }

    return VAR_6;
}

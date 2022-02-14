
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int didev ;
typedef char WCHAR ;
struct TYPE_11__ {int dwSize; int guidInstance; int tszInstanceName; } ;
struct TYPE_10__ {int IDirectInputDevice8W_iface; } ;
struct TYPE_9__ {int dwNumActions; TYPE_1__* rgoAction; int guidActionMap; } ;
struct TYPE_8__ {int dwObjID; int dwHow; int guidInstance; int dwSemantic; } ;
typedef TYPE_2__* LPDIACTIONFORMATW ;
typedef int LPBYTE ;
typedef TYPE_3__ IDirectInputDeviceImpl ;
typedef int HKEY ;
typedef int GUID ;
typedef int DWORD ;
typedef TYPE_4__ DIDEVICEINSTANCEW ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,TYPE_4__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ,int *,int ,int*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_4 (int *,char**) ;
 int VAR_4 ;
 int FUNC_5 (int ,char const*,char*,int ) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (char*,char const*,int ) ;

BOOL FUNC_8(IDirectInputDeviceImpl *VAR_5, LPDIACTIONFORMATW VAR_6, const WCHAR *VAR_7)
{
    HKEY VAR_8;
    WCHAR *VAR_9;
    DIDEVICEINSTANCEW VAR_10;
    int VAR_11;

    VAR_10.dwSize = sizeof(VAR_10);
    FUNC_1(&VAR_5->IDirectInputDevice8W_iface, &VAR_10);

    if (FUNC_4(&VAR_6->guidActionMap, &VAR_9) != VAR_3)
        return VAR_2;

    VAR_8 = FUNC_5(VAR_10.tszInstanceName, VAR_7, VAR_9, VAR_2);

    if (!VAR_8)
    {
        FUNC_0(VAR_9);
        return VAR_2;
    }


    for (VAR_11 = 0; VAR_11 < VAR_6->dwNumActions; VAR_11++)
    {
        static const WCHAR VAR_12[] = {'%','x','\0'};
        DWORD VAR_13, VAR_14 = sizeof(DWORD);
        WCHAR VAR_15[9];

        FUNC_7(VAR_15, VAR_12, VAR_6->rgoAction[VAR_11].dwSemantic);

        if (!FUNC_3(VAR_8, VAR_15, 0, ((void*)0), (LPBYTE) &VAR_13, &VAR_14))
        {
            VAR_6->rgoAction[VAR_11].dwObjID = VAR_13;
            VAR_6->rgoAction[VAR_11].guidInstance = VAR_10.guidInstance;
            VAR_6->rgoAction[VAR_11].dwHow = VAR_1;
        }
        else
        {
            FUNC_6(&VAR_6->rgoAction[VAR_11].guidInstance, 0, sizeof(GUID));
            VAR_6->rgoAction[VAR_11].dwHow = VAR_0;
        }

    }

    FUNC_2(VAR_8);
    FUNC_0(VAR_9);


    return VAR_4;
}

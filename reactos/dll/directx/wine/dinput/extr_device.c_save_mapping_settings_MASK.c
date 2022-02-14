
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int didev ;
typedef char WCHAR ;
struct TYPE_8__ {int dwSize; int guidInstance; int tszInstanceName; } ;
struct TYPE_7__ {int dwNumActions; TYPE_1__* rgoAction; int guidActionMap; } ;
struct TYPE_6__ {scalar_t__ dwHow; int dwObjID; int dwSemantic; int guidInstance; } ;
typedef TYPE_2__* LPDIACTIONFORMATW ;
typedef int LPCWSTR ;
typedef int IDirectInputDevice8W ;
typedef int HRESULT ;
typedef int HKEY ;
typedef int DWORD ;
typedef TYPE_3__ DIDEVICEINSTANCEW ;
typedef int BYTE ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,TYPE_3__*) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int ,int ,int const*,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_5 (int *,char**) ;
 int VAR_5 ;
 int FUNC_6 (int ,int ,char*) ;
 int FUNC_7 (int ,int ,char*,int ) ;
 int FUNC_8 (char*,char const*,int ) ;

HRESULT FUNC_9(IDirectInputDevice8W *VAR_6, LPDIACTIONFORMATW VAR_7, LPCWSTR VAR_8)
{
    WCHAR *VAR_9 = ((void*)0);
    DIDEVICEINSTANCEW VAR_10;
    HKEY VAR_11;
    int VAR_12;

    VAR_10.dwSize = sizeof(VAR_10);
    FUNC_1(VAR_6, &VAR_10);

    if (FUNC_5(&VAR_7->guidActionMap, &VAR_9) != VAR_4)
        return VAR_2;

    FUNC_6(VAR_10.tszInstanceName, VAR_8, VAR_9);

    VAR_11 = FUNC_7(VAR_10.tszInstanceName, VAR_8, VAR_9, VAR_5);

    if (!VAR_11)
    {
        FUNC_0(VAR_9);
        return VAR_2;
    }




    for (VAR_12 = 0; VAR_12 < VAR_7->dwNumActions; VAR_12++)
    {
        static const WCHAR VAR_13[] = {'%','x','\0'};
        WCHAR VAR_14[9];

        if (FUNC_2(&VAR_10.guidInstance, &VAR_7->rgoAction[VAR_12].guidInstance) &&
            VAR_7->rgoAction[VAR_12].dwHow != VAR_0)
        {
             FUNC_8(VAR_14, VAR_13, VAR_7->rgoAction[VAR_12].dwSemantic);
             FUNC_4(VAR_11, VAR_14, 0, VAR_3, (const BYTE*) &VAR_7->rgoAction[VAR_12].dwObjID, sizeof(DWORD));
        }
    }

    FUNC_3(VAR_11);
    FUNC_0(VAR_9);

    return VAR_1;
}

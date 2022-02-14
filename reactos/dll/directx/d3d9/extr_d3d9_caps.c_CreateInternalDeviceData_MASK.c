
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ hDirectDrawLocal; int bForceDriverFlagsOff; int bForceDriverFlagsOn; scalar_t__ DeviceType; int szDeviceName; } ;
typedef int LPCSTR ;
typedef int LPBYTE ;
typedef int * HMODULE ;
typedef int HDC ;
typedef int DWORD ;
typedef scalar_t__ D3DDEVTYPE ;
typedef TYPE_1__ D3D9_Unknown6BC ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int VAR_2 ;
 TYPE_1__* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,TYPE_1__*) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 (int ,char*,int ,int*) ;
 int FUNC_6 (int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_7(HDC VAR_6, LPCSTR VAR_7, D3D9_Unknown6BC** VAR_8, D3DDEVTYPE VAR_9, HMODULE* VAR_10)
{
    D3D9_Unknown6BC* VAR_11;
    DWORD VAR_12;

    if (VAR_8) *VAR_8 = ((void*)0);
    if (VAR_10) *VAR_10 = ((void*)0);

    if (VAR_9 != VAR_1)
    {

        VAR_4;
        return;
    }

    VAR_11 = FUNC_2(FUNC_1(), VAR_2, sizeof(D3D9_Unknown6BC));
    if (((void*)0) == VAR_11)
    {
        FUNC_0("Out of memory");
        return;
    }

    VAR_11->hDirectDrawLocal = FUNC_4(VAR_6);
    if (0 == VAR_11->hDirectDrawLocal)
    {
        FUNC_3(FUNC_1(), 0, VAR_11);
        return;
    }


    FUNC_6(VAR_11->szDeviceName, VAR_0, VAR_7);

    VAR_11->DeviceType = VAR_9;


    VAR_12 = sizeof(DWORD);
    FUNC_5(VAR_3, "ForceDriverFlagsOn", (LPBYTE)&VAR_11->bForceDriverFlagsOn, &VAR_12);

    VAR_12 = sizeof(DWORD);
    FUNC_5(VAR_3, "ForceDriverFlagsOff", (LPBYTE)&VAR_11->bForceDriverFlagsOff, &VAR_12);

    ++VAR_5;

    *VAR_8 = VAR_11;
}

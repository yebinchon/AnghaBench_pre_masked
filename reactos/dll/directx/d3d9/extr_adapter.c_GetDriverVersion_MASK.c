
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int dwFileVersionLS; int dwFileVersionMS; } ;
typedef TYPE_2__ VS_FIXEDFILEINFO ;
typedef scalar_t__ UINT ;
struct TYPE_5__ {int LowPart; int HighPart; } ;
struct TYPE_7__ {TYPE_1__ DriverVersion; int Driver; } ;
typedef int PVOID ;
typedef int LPVOID ;
typedef int (* LPFN_REVERTWOW64FSREDIRECTION ) (int *) ;
typedef int (* LPFN_ISWOW64PROCESS ) (int ,scalar_t__*) ;
typedef int (* LPFN_DISABLEWOW64FSREDIRECTION ) (int *) ;
typedef int LPDISPLAY_DEVICEA ;
typedef int HMODULE ;
typedef TYPE_3__ D3DADAPTER_IDENTIFIER9 ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ,char*) ;
 int FUNC_5 () ;
 int VAR_1 ;
 int FUNC_6 (int ,int ,scalar_t__) ;
 int FUNC_7 (int ,int ,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_8 (int ,char*,int *,scalar_t__*) ;

__attribute__((used)) static void FUNC_9(LPDISPLAY_DEVICEA VAR_3, D3DADAPTER_IDENTIFIER9* VAR_4)
{
    HMODULE VAR_5;
    LPFN_ISWOW64PROCESS VAR_6;
    BOOL VAR_7 = VAR_0;
    PVOID VAR_8;
    UINT VAR_9;

    VAR_5 = FUNC_3("KERNEL32");
    VAR_6 = (LPFN_ISWOW64PROCESS)FUNC_4(VAR_5, "IsWow64Process");
    if (VAR_6)
    {
        VAR_6(FUNC_0(), &VAR_7);
        if (VAR_7)
        {
            LPFN_DISABLEWOW64FSREDIRECTION VAR_10;
            VAR_10 = (LPFN_DISABLEWOW64FSREDIRECTION)FUNC_4(VAR_5, "Wow64DisableWow64FsRedirection");
            VAR_10(&VAR_8);
        }
    }

    VAR_9 = FUNC_2(VAR_4->Driver, ((void*)0));
    if (VAR_9 > 0)
    {
        VS_FIXEDFILEINFO* VAR_11 = ((void*)0);
        LPVOID VAR_12 = FUNC_6(FUNC_5(), VAR_1, VAR_9);

        if (VAR_2 == FUNC_1(VAR_4->Driver, 0, VAR_9, VAR_12))
        {
            if (VAR_2 == FUNC_8(VAR_12, "\\", (LPVOID*)&VAR_11, &VAR_9))
            {
                VAR_4->DriverVersion.HighPart = VAR_11->dwFileVersionMS;
                VAR_4->DriverVersion.LowPart = VAR_11->dwFileVersionLS;
            }
        }

        FUNC_7(FUNC_5(), 0, VAR_12);
    }

    if (VAR_7)
    {
        LPFN_REVERTWOW64FSREDIRECTION VAR_13;
        VAR_13 = (LPFN_REVERTWOW64FSREDIRECTION)FUNC_4(VAR_5, "Wow64RevertWow64FsRedirection");
        VAR_13(&VAR_8);
    }
}

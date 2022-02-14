
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dwWaitHint; scalar_t__ dwCheckPoint; scalar_t__ dwServiceSpecificExitCode; int dwWin32ExitCode; scalar_t__ dwControlsAccepted; int dwCurrentState; scalar_t__ dwServiceType; } ;
struct TYPE_6__ {TYPE_1__ Status; int ServiceListEntry; scalar_t__ dwResumeCount; scalar_t__ dwStartType; int lpServiceName; int lpDisplayName; int szServiceName; } ;
typedef TYPE_2__* PSERVICE ;
typedef int LPCWSTR ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int VAR_4 ;
 TYPE_2__* FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *,int *) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int * VAR_11 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;

DWORD
FUNC_7(LPCWSTR VAR_12,
                          PSERVICE *VAR_13,
                          DWORD VAR_14,
                          DWORD VAR_15)
{
    PSERVICE VAR_16 = ((void*)0);

    FUNC_0("Service: '%S'\n", VAR_12);


    VAR_16 = FUNC_3(FUNC_2(),
                          VAR_4,
                          FUNC_1(VAR_6, VAR_11[FUNC_6(VAR_12) + 1]));
    if (VAR_16 == ((void*)0))
        return VAR_0;

    *VAR_13 = VAR_16;


    FUNC_5(VAR_16->szServiceName, VAR_12);
    VAR_16->lpServiceName = VAR_16->szServiceName;
    VAR_16->lpDisplayName = VAR_16->lpServiceName;


    VAR_16->dwStartType = VAR_15;


    VAR_16->dwResumeCount = VAR_5++;


    FUNC_4(&VAR_10,
                   &VAR_16->ServiceListEntry);


    VAR_16->Status.dwServiceType = VAR_14;
    VAR_16->Status.dwCurrentState = VAR_9;
    VAR_16->Status.dwControlsAccepted = 0;
    VAR_16->Status.dwWin32ExitCode =
        (VAR_15 == VAR_7) ? VAR_1 : VAR_2;
    VAR_16->Status.dwServiceSpecificExitCode = 0;
    VAR_16->Status.dwCheckPoint = 0;
    VAR_16->Status.dwWaitHint =
        (VAR_14 & VAR_8) ? 0 : 2000;

    return VAR_3;
}

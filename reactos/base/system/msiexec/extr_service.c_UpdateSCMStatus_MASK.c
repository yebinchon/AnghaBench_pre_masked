
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dwControlsAccepted; scalar_t__ dwWaitHint; scalar_t__ dwCheckPoint; scalar_t__ dwServiceSpecificExitCode; scalar_t__ dwWin32ExitCode; scalar_t__ dwCurrentState; int dwServiceType; } ;
typedef TYPE_1__ SERVICE_STATUS ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int VAR_9 ;
 int FUNC_2 (int ,char*) ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static BOOL FUNC_3(DWORD VAR_12, DWORD VAR_13,
                            DWORD VAR_14)
{
    SERVICE_STATUS VAR_15;

    VAR_15.dwServiceType = VAR_8;
    VAR_15.dwCurrentState = VAR_12;

    if (VAR_12 == VAR_5
            || VAR_12 == VAR_7
            || VAR_12 == VAR_6)
        VAR_15.dwControlsAccepted = 0;
    else
    {
        VAR_15.dwControlsAccepted = VAR_4 |
                                    VAR_2 |
                                    VAR_3;
    }

    if (VAR_14 == 0)
    {
        VAR_15.dwWin32ExitCode = VAR_13;
    }
    else
    {
        VAR_15.dwWin32ExitCode = VAR_0;
    }

    VAR_15.dwServiceSpecificExitCode = VAR_14;
    VAR_15.dwCheckPoint = 0;
    VAR_15.dwWaitHint = 0;

    if (!FUNC_1(VAR_10, &VAR_15))
    {
        FUNC_2(VAR_11, "Failed to set service status\n");
        FUNC_0();
        return VAR_1;
    }

    return VAR_9;
}

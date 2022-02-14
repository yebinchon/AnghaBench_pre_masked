
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_3__ {int dwControlsAccepted; scalar_t__ dwWaitHint; scalar_t__ dwCheckPoint; scalar_t__ dwServiceSpecificExitCode; scalar_t__ dwWin32ExitCode; scalar_t__ dwCurrentState; int dwServiceType; } ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static VOID
FUNC_3(DWORD VAR_8, DWORD VAR_9, DWORD VAR_10)
{
    VAR_5.dwServiceType = VAR_4;
    VAR_5.dwCurrentState = VAR_8;
    if (VAR_8 == VAR_3)
        VAR_5.dwControlsAccepted = 0;
    else
        VAR_5.dwControlsAccepted
            = (VAR_2 | VAR_0
               | VAR_1);
    VAR_5.dwWin32ExitCode = 0;
    VAR_5.dwServiceSpecificExitCode = 0;
    VAR_5.dwCheckPoint = 0;
    VAR_5.dwWaitHint = VAR_10;

    if (!FUNC_2(VAR_6, &VAR_5)) {
        FUNC_0("failed to set service status\n");
        FUNC_1(VAR_7);
    }
}

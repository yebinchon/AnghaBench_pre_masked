
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_3__ {int dwControlsAccepted; int dwWaitHint; scalar_t__ dwCheckPoint; scalar_t__ dwServiceSpecificExitCode; scalar_t__ dwWin32ExitCode; scalar_t__ dwCurrentState; int dwServiceType; } ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 TYPE_1__ VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,TYPE_1__*) ;

__attribute__((used)) static VOID
FUNC_2(DWORD VAR_10)
{
    VAR_8.dwServiceType = VAR_7;
    VAR_8.dwCurrentState = VAR_10;
    VAR_8.dwControlsAccepted = 0;
    VAR_8.dwWin32ExitCode = 0;
    VAR_8.dwServiceSpecificExitCode = 0;
    VAR_8.dwCheckPoint = 0;

    if (VAR_10 == VAR_5 ||
        VAR_10 == VAR_6 ||
        VAR_10 == VAR_3 ||
        VAR_10 == VAR_2)
        VAR_8.dwWaitHint = 1000;
    else
        VAR_8.dwWaitHint = 0;

    if (VAR_10 == VAR_4)
        VAR_8.dwControlsAccepted = VAR_1 | VAR_0;

    FUNC_1(VAR_9,
                     &VAR_8);
    FUNC_0("WU UpdateServiceStatus() called\n");
}

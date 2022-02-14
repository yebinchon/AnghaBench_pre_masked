
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_3__ {int dwWaitHint; scalar_t__ dwCheckPoint; scalar_t__ dwServiceSpecificExitCode; scalar_t__ dwWin32ExitCode; scalar_t__ dwControlsAccepted; scalar_t__ dwCurrentState; int dwServiceType; } ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,TYPE_1__*) ;

__attribute__((used)) static
VOID
FUNC_1(
    DWORD VAR_7)
{
    VAR_5.dwServiceType = VAR_4;
    VAR_5.dwCurrentState = VAR_7;
    VAR_5.dwControlsAccepted = 0;
    VAR_5.dwWin32ExitCode = 0;
    VAR_5.dwServiceSpecificExitCode = 0;
    VAR_5.dwCheckPoint = 0;

    if (VAR_7 == VAR_2 ||
        VAR_7 == VAR_3 ||
        VAR_7 == VAR_1 ||
        VAR_7 == VAR_0)
        VAR_5.dwWaitHint = 10000;
    else
        VAR_5.dwWaitHint = 0;

    FUNC_0(VAR_6,
                     &VAR_5);
}

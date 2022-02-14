
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_3__ {int dwControlsAccepted; int dwWaitHint; scalar_t__ dwCheckPoint; scalar_t__ dwServiceSpecificExitCode; scalar_t__ dwWin32ExitCode; scalar_t__ dwCurrentState; int dwServiceType; } ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 TYPE_1__ VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,TYPE_1__*) ;

__attribute__((used)) static VOID
FUNC_1(DWORD VAR_12)
{
    VAR_10.dwServiceType = VAR_9;
    VAR_10.dwCurrentState = VAR_12;

    if (VAR_12 == VAR_4 || VAR_12 == VAR_6)
        VAR_10.dwControlsAccepted = VAR_2 |
                                           VAR_1 |
                                           VAR_0;
    else
        VAR_10.dwControlsAccepted = 0;

    VAR_10.dwWin32ExitCode = 0;
    VAR_10.dwServiceSpecificExitCode = 0;
    VAR_10.dwCheckPoint = 0;

    if (VAR_12 == VAR_7 ||
        VAR_12 == VAR_8 ||
        VAR_12 == VAR_5 ||
        VAR_12 == VAR_3)
        VAR_10.dwWaitHint = 10000;
    else
        VAR_10.dwWaitHint = 0;

    FUNC_0(VAR_11,
                     &VAR_10);
}

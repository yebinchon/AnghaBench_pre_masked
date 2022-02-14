
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dwControlsAccepted; scalar_t__ dwCheckPoint; scalar_t__ dwServiceSpecificExitCode; void* dwWaitHint; void* dwWin32ExitCode; void* dwCurrentState; int dwServiceType; } ;
typedef TYPE_1__ SERVICE_STATUS ;
typedef void* DWORD ;
typedef int BOOL ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,TYPE_1__*) ;
 int VAR_7 ;
 int FUNC_2 (int ,char*,void*,int ) ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_3(DWORD VAR_9,
                      DWORD VAR_10,
                      DWORD VAR_11)
{
    BOOL VAR_12;
    SERVICE_STATUS VAR_13;

    VAR_13.dwServiceType = VAR_6;
    VAR_13.dwCurrentState = VAR_9;
    VAR_13.dwWin32ExitCode = VAR_10;
    VAR_13.dwWaitHint = VAR_11;

    VAR_13.dwServiceSpecificExitCode = 0;
    VAR_13.dwCheckPoint = 0;

    if ( (VAR_9 == VAR_3) ||
         (VAR_9 == VAR_5) ||
         (VAR_9 == VAR_4) )
    {
        VAR_13.dwControlsAccepted = 0;
    }
    else
    {
        VAR_13.dwControlsAccepted = VAR_1 | VAR_0;
    }
    VAR_12 = FUNC_1(VAR_8, &VAR_13);
    FUNC_2(VAR_12, "SetServiceStatus(%d) failed: %lu\n", VAR_9, FUNC_0());
}

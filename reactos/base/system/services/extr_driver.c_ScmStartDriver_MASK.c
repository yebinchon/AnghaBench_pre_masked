
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ dwWin32ExitCode; int dwControlsAccepted; int dwCurrentState; } ;
struct TYPE_6__ {TYPE_1__ Status; } ;
typedef TYPE_2__* PSERVICE ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (char*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;

DWORD
FUNC_2(PSERVICE VAR_3)
{
    DWORD VAR_4;

    FUNC_0("ScmStartDriver(%p)\n", VAR_3);

    VAR_4 = FUNC_1(VAR_3);
    if (VAR_4 == VAR_0)
    {
        VAR_3->Status.dwCurrentState = VAR_2;
        VAR_3->Status.dwControlsAccepted = VAR_1;
        VAR_3->Status.dwWin32ExitCode = VAR_0;
    }

    FUNC_0("ScmStartDriver returns %lu\n", VAR_4);

    return VAR_4;
}

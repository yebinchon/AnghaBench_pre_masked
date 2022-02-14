
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int statusproc ;
struct TYPE_5__ {int dwCurrentState; } ;
struct TYPE_4__ {scalar_t__ dwCurrentState; scalar_t__ dwProcessId; } ;
typedef TYPE_1__ SERVICE_STATUS_PROCESS ;
typedef TYPE_2__ SERVICE_STATUS ;
typedef int SC_HANDLE ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int FUNC_0 (int ,int ,TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 () ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,int ,int *) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int,char*,char const*,...) ;
 int FUNC_6 (int ,int ,int *,int,scalar_t__*) ;
 int VAR_4 ;

__attribute__((used)) static DWORD FUNC_7(SC_HANDLE VAR_5, const char* VAR_6, DWORD VAR_7)
{
    BOOL VAR_8;
    DWORD VAR_9, VAR_10;
    SERVICE_STATUS VAR_11;




    VAR_8 = FUNC_2(VAR_5, 0, ((void*)0));
    VAR_9 = FUNC_1();
    FUNC_5(!VAR_8, "%s: StartServiceA() should have failed\n", VAR_6);

    if (&FUNC_6)
    {
        DWORD VAR_12;
        SERVICE_STATUS_PROCESS VAR_13;

        VAR_8 = FUNC_6(VAR_5, VAR_1, (BYTE*)&VAR_13, sizeof(VAR_13), &VAR_12);
        FUNC_5(VAR_8, "%s: QueryServiceStatusEx() failed le=%u\n", VAR_6, FUNC_1());
        FUNC_5(VAR_13.dwCurrentState == VAR_3, "%s: should be stopped state=%x\n", VAR_6, VAR_13.dwCurrentState);
        FUNC_5(VAR_13.dwProcessId == 0, "%s: ProcessId should be 0 instead of %x\n", VAR_6, VAR_13.dwProcessId);
    }

    VAR_8 = FUNC_2(VAR_5, 0, ((void*)0));
    VAR_10 = FUNC_1();
    FUNC_5(!VAR_8, "%s: StartServiceA() should have failed\n", VAR_6);
    FUNC_5(VAR_10 == VAR_9, "%s: the second try should yield the same error: %u != %u\n", VAR_6, VAR_9, VAR_10);

    VAR_11.dwCurrentState = 0xdeadbeef;
    VAR_8 = FUNC_0(VAR_5, VAR_2, &VAR_11);
    VAR_10 = FUNC_1();
    FUNC_5(!VAR_8, "%s: ControlService() should have failed\n", VAR_6);
    FUNC_5(VAR_10 == VAR_0, "%s: %d != ERROR_SERVICE_NOT_ACTIVE\n", VAR_6, VAR_10);
    FUNC_5(VAR_11.dwCurrentState == VAR_3 ||
       FUNC_3(VAR_7),
       "%s: should be stopped state=%x\n", VAR_6, VAR_11.dwCurrentState);

    return VAR_9;
}

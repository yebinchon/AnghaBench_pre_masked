
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int buffer ;
struct TYPE_3__ {int dwFull; } ;
typedef int * HANDLE ;
typedef TYPE_1__ EVENTLOG_FULL_INFORMATION ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int * FUNC_2 (int *,char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (int *,int,TYPE_1__*,int,int*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(void)
{
    HANDLE VAR_5;
    BOOL VAR_6;
    DWORD VAR_7;
    BYTE VAR_8[2 * sizeof(EVENTLOG_FULL_INFORMATION)];
    EVENTLOG_FULL_INFORMATION *VAR_9 = (void *)VAR_8;

    if (!&FUNC_5)
    {

        FUNC_6("GetEventLogInformation is not available\n");
        return;
    }
    FUNC_3(0xdeadbeef);
    VAR_6 = FUNC_5(((void*)0), 1, ((void*)0), 0, ((void*)0));
    FUNC_4(!VAR_6, "Expected failure\n");
    FUNC_4(FUNC_1() == VAR_2, "Expected ERROR_INVALID_LEVEL, got %d\n", FUNC_1());

    FUNC_3(0xdeadbeef);
    VAR_6 = FUNC_5(((void*)0), VAR_3, ((void*)0), 0, ((void*)0));
    FUNC_4(!VAR_6, "Expected failure\n");
    FUNC_4(FUNC_1() == VAR_1, "Expected ERROR_INVALID_HANDLE, got %d\n", FUNC_1());

    VAR_5 = FUNC_2(((void*)0), "Application");

    FUNC_3(0xdeadbeef);
    VAR_6 = FUNC_5(VAR_5, VAR_3, ((void*)0), 0, ((void*)0));
    FUNC_4(!VAR_6, "Expected failure\n");
    FUNC_4(FUNC_1() == VAR_4, "Expected RPC_X_NULL_REF_POINTER, got %d\n", FUNC_1());

    FUNC_3(0xdeadbeef);
    VAR_6 = FUNC_5(VAR_5, VAR_3, ((void*)0), 0, &VAR_7);
    FUNC_4(!VAR_6, "Expected failure\n");
    FUNC_4(FUNC_1() == VAR_4, "Expected RPC_X_NULL_REF_POINTER, got %d\n", FUNC_1());

    FUNC_3(0xdeadbeef);
    VAR_6 = FUNC_5(VAR_5, VAR_3, VAR_9, 0, ((void*)0));
    FUNC_4(!VAR_6, "Expected failure\n");
    FUNC_4(FUNC_1() == VAR_4, "Expected RPC_X_NULL_REF_POINTER, got %d\n", FUNC_1());

    FUNC_3(0xdeadbeef);
    VAR_7 = 0xdeadbeef;
    VAR_9->dwFull = 0xdeadbeef;
    VAR_6 = FUNC_5(VAR_5, VAR_3, VAR_9, 0, &VAR_7);
    FUNC_4(!VAR_6, "Expected failure\n");
    FUNC_4(FUNC_1() == VAR_0, "Expected ERROR_INSUFFICIENT_BUFFER, got %d\n", FUNC_1());
    FUNC_4(VAR_7 == sizeof(EVENTLOG_FULL_INFORMATION), "Expected sizeof(EVENTLOG_FULL_INFORMATION), got %d\n", VAR_7);
    FUNC_4(VAR_9->dwFull == 0xdeadbeef, "Expected no change to the dwFull member\n");


    VAR_9->dwFull = 0xdeadbeef;
    VAR_7 = sizeof(VAR_8);
    VAR_6 = FUNC_5(VAR_5, VAR_3, VAR_9, VAR_7, &VAR_7);
    FUNC_4(VAR_6, "Expected success\n");
    FUNC_4(VAR_7 == sizeof(EVENTLOG_FULL_INFORMATION), "Expected sizeof(EVENTLOG_FULL_INFORMATION), got %d\n", VAR_7);
    FUNC_4(VAR_9->dwFull == 0 || VAR_9->dwFull == 1, "Expected 0 (not full) or 1 (full), got %d\n", VAR_9->dwFull);

    FUNC_0(VAR_5);
}

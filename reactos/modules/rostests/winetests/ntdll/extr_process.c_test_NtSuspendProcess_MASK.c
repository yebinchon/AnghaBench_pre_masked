
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int startup ;
typedef int ULONG ;
struct TYPE_10__ {scalar_t__ dwDebugEventCode; int dwThreadId; int dwProcessId; } ;
struct TYPE_9__ {int hThread; int hProcess; int dwProcessId; } ;
struct TYPE_8__ {int cb; } ;
typedef TYPE_1__ STARTUPINFOA ;
typedef TYPE_2__ PROCESS_INFORMATION ;
typedef int NTSTATUS ;
typedef int HANDLE ;
typedef int DWORD ;
typedef TYPE_3__ DEBUG_EVENT ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *,int ,int ,char*) ;
 int FUNC_3 (int *,char*,int *,int *,int ,int ,int *,int *,TYPE_1__*,TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_7 (int ,int*) ;
 scalar_t__ VAR_4 ;
 int FUNC_8 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (TYPE_3__*,int ) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (TYPE_1__*,int ,int) ;
 int FUNC_13 (int,char*,int) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int*) ;
 int FUNC_17 (char*,char*,char*) ;

__attribute__((used)) static void FUNC_18(char *VAR_9)
{
    PROCESS_INFORMATION VAR_10;
    DEBUG_EVENT VAR_11;
    STARTUPINFOA VAR_12;
    NTSTATUS VAR_13;
    HANDLE VAR_14;
    char VAR_15[VAR_3];
    ULONG VAR_16;
    DWORD VAR_17;

    VAR_13 = FUNC_14(FUNC_5());
    FUNC_13(VAR_13 == VAR_5, "NtResumeProcess failed: %x\n", VAR_13);

    VAR_14 = FUNC_2(((void*)0), VAR_6, VAR_1, "wine_suspend_event");
    FUNC_13(!!VAR_14, "Failed to create event: %u\n", FUNC_6());

    FUNC_12(&VAR_12, 0, sizeof(VAR_12));
    VAR_12.cb = sizeof(VAR_12);

    FUNC_17(VAR_15, "%s tests/process.c dummy_process wine_suspend_event", VAR_9);
    VAR_17 = FUNC_3(((void*)0), VAR_15, ((void*)0), ((void*)0), VAR_1, 0, ((void*)0), ((void*)0), &VAR_12, &VAR_10);
    FUNC_13(VAR_17, "CreateProcess failed with error %u\n", FUNC_6());

    VAR_17 = FUNC_11(VAR_14, 500);
    FUNC_13(VAR_17 == VAR_7, "Event was not signaled: %d\n", VAR_17);

    VAR_13 = FUNC_15(VAR_10.hProcess);
    FUNC_13(VAR_13 == VAR_5, "NtResumeProcess failed: %x\n", VAR_13);

    FUNC_8(VAR_14);

    VAR_17 = FUNC_11(VAR_14, 200);
    FUNC_13(VAR_17 == VAR_8, "Expected timeout, got: %d\n", VAR_17);

    VAR_13 = FUNC_7(VAR_10.hThread, &VAR_16);
    FUNC_13(VAR_13 == VAR_5, "NtResumeProcess failed: %x\n", VAR_13);
    FUNC_13(VAR_16 == 1, "Expected count 1, got %d\n", VAR_16);

    VAR_17 = FUNC_11(VAR_14, 200);
    FUNC_13(VAR_17 == VAR_7, "Event was not signaled: %d\n", VAR_17);

    VAR_13 = FUNC_14(VAR_10.hProcess);
    FUNC_13(VAR_13 == VAR_5, "NtResumeProcess failed: %x\n", VAR_13);

    VAR_13 = FUNC_16(VAR_10.hThread, &VAR_16);
    FUNC_13(VAR_13 == VAR_5, "NtSuspendThread failed: %x\n", VAR_13);
    FUNC_13(VAR_16 == 0, "Expected count 0, got %d\n", VAR_16);

    FUNC_8(VAR_14);

    VAR_17 = FUNC_11(VAR_14, 200);
    FUNC_13(VAR_17 == VAR_8, "Expected timeout, got: %d\n", VAR_17);

    VAR_13 = FUNC_14(VAR_10.hProcess);
    FUNC_13(VAR_13 == VAR_5, "NtResumeProcess failed: %x\n", VAR_13);

    VAR_17 = FUNC_11(VAR_14, 200);
    FUNC_13(VAR_17 == VAR_7, "Event was not signaled: %d\n", VAR_17);

    VAR_13 = FUNC_16(VAR_10.hThread, &VAR_16);
    FUNC_13(VAR_13 == VAR_5, "NtSuspendThread failed: %x\n", VAR_13);
    FUNC_13(VAR_16 == 0, "Expected count 0, got %d\n", VAR_16);

    VAR_13 = FUNC_16(VAR_10.hThread, &VAR_16);
    FUNC_13(VAR_13 == VAR_5, "NtSuspendThread failed: %x\n", VAR_13);
    FUNC_13(VAR_16 == 1, "Expected count 1, got %d\n", VAR_16);

    FUNC_8(VAR_14);

    VAR_17 = FUNC_11(VAR_14, 200);
    FUNC_13(VAR_17 == VAR_8, "Expected timeout, got: %d\n", VAR_17);

    VAR_13 = FUNC_14(VAR_10.hProcess);
    FUNC_13(VAR_13 == VAR_5, "NtResumeProcess failed: %x\n", VAR_13);

    VAR_17 = FUNC_11(VAR_14, 200);
    FUNC_13(VAR_17 == VAR_8, "Expected timeout, got: %d\n", VAR_17);

    VAR_13 = FUNC_14(VAR_10.hProcess);
    FUNC_13(VAR_13 == VAR_5, "NtResumeProcess failed: %x\n", VAR_13);

    VAR_17 = FUNC_11(VAR_14, 200);
    FUNC_13(VAR_17 == VAR_7, "Event was not signaled: %d\n", VAR_17);

    VAR_17 = FUNC_4(VAR_10.dwProcessId);
    FUNC_13(VAR_17, "Failed to debug process: %d\n", FUNC_6());

    FUNC_8(VAR_14);

    VAR_17 = FUNC_11(VAR_14, 200);
    FUNC_13(VAR_17 == VAR_8, "Expected timeout, got: %d\n", VAR_17);

    for (;;)
    {
        VAR_17 = FUNC_10(&VAR_11, VAR_2);
        FUNC_13(VAR_17, "WaitForDebugEvent failed, last error %#x.\n", FUNC_6());
        if (!VAR_17) break;

        if (VAR_11.dwDebugEventCode == VAR_4) break;

        VAR_17 = FUNC_1(VAR_11.dwProcessId, VAR_11.dwThreadId, VAR_0);
        FUNC_13(VAR_17, "ContinueDebugEvent failed, last error %#x.\n", FUNC_6());
        if (!VAR_17) break;
    }

    FUNC_8(VAR_14);

    VAR_17 = FUNC_11(VAR_14, 200);
    FUNC_13(VAR_17 == VAR_8, "Expected timeout, got: %d\n", VAR_17);

    VAR_13 = FUNC_14(VAR_10.hProcess);
    FUNC_13(VAR_13 == VAR_5, "NtResumeProcess failed: %x\n", VAR_13);

    VAR_17 = FUNC_11(VAR_14, 200);
    FUNC_13(VAR_17 == VAR_8, "Expected timeout, got: %d\n", VAR_17);

    VAR_13 = FUNC_7(VAR_10.hThread, &VAR_16);
    FUNC_13(VAR_13 == VAR_5, "NtResumeProcess failed: %x\n", VAR_13);
    FUNC_13(VAR_16 == 0, "Expected count 0, got %d\n", VAR_16);

    VAR_17 = FUNC_11(VAR_14, 200);
    FUNC_13(VAR_17 == VAR_8, "Expected timeout, got: %d\n", VAR_17);

    VAR_17 = FUNC_1(VAR_11.dwProcessId, VAR_11.dwThreadId, VAR_0);
    FUNC_13(VAR_17, "ContinueDebugEvent failed, last error %#x.\n", FUNC_6());

    VAR_17 = FUNC_11(VAR_14, 200);
    FUNC_13(VAR_17 == VAR_7, "Event was not signaled: %d\n", VAR_17);

    FUNC_9(VAR_10.hProcess, 0);

    FUNC_0(VAR_10.hProcess);
    FUNC_0(VAR_10.hThread);
}

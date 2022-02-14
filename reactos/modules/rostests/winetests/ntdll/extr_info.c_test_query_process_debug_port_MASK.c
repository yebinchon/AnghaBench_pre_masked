
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int si ;
typedef int debug_port ;
struct TYPE_9__ {scalar_t__ dwDebugEventCode; int dwThreadId; int dwProcessId; } ;
struct TYPE_8__ {int * hProcess; int * hThread; } ;
struct TYPE_7__ {int cb; int member_0; } ;
typedef TYPE_1__ STARTUPINFOA ;
typedef TYPE_2__ PROCESS_INFORMATION ;
typedef scalar_t__ NTSTATUS ;
typedef scalar_t__ DWORD_PTR ;
typedef TYPE_3__ DEBUG_EVENT ;
typedef int BOOL ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *,char*,int *,int *,int ,int ,int *,int *,TYPE_1__*,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int * FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_5 (TYPE_3__*,int ) ;
 int FUNC_6 (int,char*,scalar_t__,...) ;
 scalar_t__ FUNC_7 (int *,int ,scalar_t__*,int,int *) ;
 int FUNC_8 (char*,char*,char*,char*,char*) ;

__attribute__((used)) static void FUNC_9(int VAR_10, char **VAR_11)
{
    DWORD_PTR VAR_12 = 0xdeadbeef;
    char VAR_13[VAR_5];
    PROCESS_INFORMATION VAR_14;
    STARTUPINFOA VAR_15 = { 0 };
    NTSTATUS VAR_16;
    BOOL VAR_17;

    FUNC_8(VAR_13, "%s %s %s", VAR_11[0], VAR_11[1], "debuggee");

    VAR_15.cb = sizeof(VAR_15);
    VAR_17 = FUNC_2(((void*)0), VAR_13, ((void*)0), ((void*)0), VAR_3, VAR_1, ((void*)0), ((void*)0), &VAR_15, &VAR_14);
    FUNC_6(VAR_17, "CreateProcess failed, last error %#x.\n", FUNC_4());
    if (!VAR_17) return;

    VAR_16 = FUNC_7(((void*)0), VAR_6,
            ((void*)0), 0, ((void*)0));
    FUNC_6(VAR_16 == VAR_8, "Expected STATUS_INFO_LENGTH_MISMATCH, got %#x.\n", VAR_16);

    VAR_16 = FUNC_7(((void*)0), VAR_6,
            ((void*)0), sizeof(VAR_12), ((void*)0));
    FUNC_6(VAR_16 == VAR_9 || VAR_16 == VAR_7,
            "Expected STATUS_INVALID_HANDLE, got %#x.\n", VAR_16);

    VAR_16 = FUNC_7(FUNC_3(), VAR_6,
            ((void*)0), sizeof(VAR_12), ((void*)0));
    FUNC_6(VAR_16 == VAR_7, "Expected STATUS_ACCESS_VIOLATION, got %#x.\n", VAR_16);

    VAR_16 = FUNC_7(((void*)0), VAR_6,
            &VAR_12, sizeof(VAR_12), ((void*)0));
    FUNC_6(VAR_16 == VAR_9, "Expected STATUS_INVALID_HANDLE, got %#x.\n", VAR_16);

    VAR_16 = FUNC_7(FUNC_3(), VAR_6,
            &VAR_12, sizeof(VAR_12) - 1, ((void*)0));
    FUNC_6(VAR_16 == VAR_8, "Expected STATUS_INFO_LENGTH_MISMATCH, got %#x.\n", VAR_16);

    VAR_16 = FUNC_7(FUNC_3(), VAR_6,
            &VAR_12, sizeof(VAR_12) + 1, ((void*)0));
    FUNC_6(VAR_16 == VAR_8, "Expected STATUS_INFO_LENGTH_MISMATCH, got %#x.\n", VAR_16);

    VAR_16 = FUNC_7(FUNC_3(), VAR_6,
            &VAR_12, sizeof(VAR_12), ((void*)0));
    FUNC_6(!VAR_16, "NtQueryInformationProcess failed, status %#x.\n", VAR_16);
    FUNC_6(VAR_12 == 0, "Expected port 0, got %#lx.\n", VAR_12);

    VAR_16 = FUNC_7(VAR_14.hProcess, VAR_6,
            &VAR_12, sizeof(VAR_12), ((void*)0));
    FUNC_6(!VAR_16, "NtQueryInformationProcess failed, status %#x.\n", VAR_16);
    FUNC_6(VAR_12 == ~(DWORD_PTR)0, "Expected port %#lx, got %#lx.\n", ~(DWORD_PTR)0, VAR_12);

    for (;;)
    {
        DEBUG_EVENT VAR_18;

        VAR_17 = FUNC_5(&VAR_18, VAR_4);
        FUNC_6(VAR_17, "WaitForDebugEvent failed, last error %#x.\n", FUNC_4());
        if (!VAR_17) break;

        if (VAR_18.dwDebugEventCode == VAR_2) break;

        VAR_17 = FUNC_1(VAR_18.dwProcessId, VAR_18.dwThreadId, VAR_0);
        FUNC_6(VAR_17, "ContinueDebugEvent failed, last error %#x.\n", FUNC_4());
        if (!VAR_17) break;
    }

    VAR_17 = FUNC_0(VAR_14.hThread);
    FUNC_6(VAR_17, "CloseHandle failed, last error %#x.\n", FUNC_4());
    VAR_17 = FUNC_0(VAR_14.hProcess);
    FUNC_6(VAR_17, "CloseHandle failed, last error %#x.\n", FUNC_4());
}

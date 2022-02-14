
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int startup ;
struct TYPE_7__ {int hProcess; int hThread; } ;
struct TYPE_6__ {int cb; int wShowWindow; int dwFlags; } ;
typedef TYPE_1__ STARTUPINFOA ;
typedef TYPE_2__ PROCESS_INFORMATION ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,char*,int *,int *,int ,int ,int *,int *,TYPE_1__*,TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,scalar_t__*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 char* FUNC_5 (int ,int ,scalar_t__) ;
 int FUNC_6 (int ,int ,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_7 (int ,char*,int ,int ,int *,int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_8 (int ,int) ;
 int FUNC_9 (TYPE_1__*,int ,int) ;
 int FUNC_10 (int,char*,...) ;
 int FUNC_11 (char*,char*,char const*) ;
 scalar_t__ FUNC_12 (char const*) ;
 int FUNC_13 (char*) ;

__attribute__((used)) static void FUNC_14(HKEY VAR_7, const char* VAR_8)
{
    BOOL VAR_9;
    DWORD VAR_10;
    char* VAR_11;
    PROCESS_INFORMATION VAR_12;
    STARTUPINFOA VAR_13;
    DWORD VAR_14;

    VAR_10=FUNC_7(VAR_7, "auto", 0, VAR_2, (BYTE*)"1", 2);
    FUNC_10(VAR_10 == VAR_0, "unable to set AeDebug/auto: ret=%d\n", VAR_10);

    VAR_11=FUNC_5(FUNC_4(), 0, FUNC_12(VAR_8)+15+1);
    FUNC_11(VAR_11, "%s debugger crash", VAR_8);

    FUNC_9(&VAR_13, 0, sizeof(VAR_13));
    VAR_13.cb = sizeof(VAR_13);
    VAR_13.dwFlags = VAR_3;
    VAR_13.wShowWindow = VAR_5;
    VAR_10=FUNC_1(((void*)0), VAR_11, ((void*)0), ((void*)0), VAR_1, 0, ((void*)0), ((void*)0), &VAR_13, &VAR_12);
    FUNC_10(VAR_10, "CreateProcess: err=%d\n", FUNC_3());
    FUNC_6(FUNC_4(), 0, VAR_11);
    FUNC_0(VAR_12.hThread);

    FUNC_13("waiting for child exit...\n");
    FUNC_10(FUNC_8(VAR_12.hProcess, 60000) == VAR_6, "Timed out waiting for the child to crash\n");
    VAR_9 = FUNC_2(VAR_12.hProcess, &VAR_14);
    FUNC_10(VAR_9, "GetExitCodeProcess failed: err=%d\n", FUNC_3());
    FUNC_10(VAR_14 == VAR_4, "exit code = %08x\n", VAR_14);
    FUNC_0(VAR_12.hProcess);
}

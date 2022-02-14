
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int si ;
struct TYPE_6__ {int hProcess; int hThread; } ;
struct TYPE_5__ {int member_0; } ;
typedef TYPE_1__ STARTUPINFOA ;
typedef TYPE_2__ PROCESS_INFORMATION ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,char*,int *,int *,int ,int ,int *,int *,TYPE_1__*,TYPE_2__*) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (int ) ;
 int VAR_2 ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int,char*,int ,...) ;
 int VAR_3 ;
 char const* VAR_4 ;
 int FUNC_9 (char*,char*,char const*) ;
 int FUNC_10 (char*) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_11(const char *VAR_6, DWORD VAR_7)
{
    char VAR_8[VAR_1];
    STARTUPINFOA VAR_9 = {sizeof(VAR_9)};
    PROCESS_INFORMATION VAR_10;
    DWORD VAR_11;
    BOOL VAR_12;

    VAR_4 = VAR_6;
    FUNC_9(VAR_8, "wscript.exe %s arg1 2 ar3", VAR_6);

    FUNC_6(VAR_3);

    VAR_12 = FUNC_3(((void*)0), VAR_8, ((void*)0), ((void*)0), VAR_2, 0, ((void*)0), ((void*)0), &VAR_9, &VAR_10);
    if(!VAR_12) {
        FUNC_10("script.exe is not available\n");
        FUNC_1(VAR_3);
        return;
    }

    VAR_5 = VAR_10.hProcess;
    FUNC_7(VAR_10.hProcess, VAR_0);

    VAR_12 = FUNC_4(VAR_10.hProcess, &VAR_11);
    FUNC_8(VAR_12, "GetExitCodeProcess failed: %u\n", FUNC_5());
    FUNC_8(VAR_11 == VAR_7, "exit_code = %u, expected %u\n", VAR_11, VAR_7);

    FUNC_2(VAR_10.hThread);
    FUNC_2(VAR_10.hProcess);

    FUNC_0(VAR_3);
}

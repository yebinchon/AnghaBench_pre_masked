
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int hProcess; int hThread; } ;
struct TYPE_5__ {int member_0; void* hStdError; void* hStdOutput; void* hStdInput; int dwFlags; } ;
typedef TYPE_1__ STARTUPINFOA ;
typedef TYPE_2__ PROCESS_INFORMATION ;
typedef scalar_t__ DWORD ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int *,int *,int ,int ,int *,int *,TYPE_1__*,TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_2 (int ,scalar_t__*) ;
 int FUNC_3 () ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_5 (int ,int) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (char*,char const*) ;

__attribute__((used)) static BOOL FUNC_8(unsigned VAR_5, const char *VAR_6, DWORD *VAR_7)
{
    STARTUPINFOA VAR_8 = {sizeof(STARTUPINFOA)};
    PROCESS_INFORMATION VAR_9;
    BOOL VAR_10;
    DWORD VAR_11;
    char VAR_12[256];

    VAR_8.dwFlags = VAR_2;
    VAR_8.hStdInput = VAR_1;
    VAR_8.hStdOutput = VAR_1;
    VAR_8.hStdError = VAR_1;

    FUNC_7(VAR_12, VAR_6);
    if (!FUNC_1(((void*)0), VAR_12, ((void*)0), ((void*)0), VAR_3, 0, ((void*)0), ((void*)0), &VAR_8, &VAR_9))
        return VAR_0;

    VAR_11 = FUNC_5(VAR_9.hProcess, 10000);
    if (VAR_11 == VAR_4)
        FUNC_4(VAR_9.hProcess, 1);

    VAR_10 = FUNC_2(VAR_9.hProcess, VAR_7);
    FUNC_6(VAR_10, "GetExitCodeProcess failed: %d\n", FUNC_3());

    FUNC_0(VAR_9.hThread);
    FUNC_0(VAR_9.hProcess);
    return VAR_10;
}

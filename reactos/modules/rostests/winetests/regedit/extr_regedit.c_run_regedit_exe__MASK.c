
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
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (char*,char const*) ;

__attribute__((used)) static BOOL FUNC_5(unsigned VAR_5, const char *VAR_6)
{
    STARTUPINFOA VAR_7 = {sizeof(STARTUPINFOA)};
    PROCESS_INFORMATION VAR_8;
    DWORD VAR_9;
    char VAR_10[256];

    VAR_7.dwFlags = VAR_2;
    VAR_7.hStdInput = VAR_1;
    VAR_7.hStdOutput = VAR_1;
    VAR_7.hStdError = VAR_1;

    FUNC_4(VAR_10, VAR_6);
    if (!FUNC_1(((void*)0), VAR_10, ((void*)0), ((void*)0), VAR_3, 0, ((void*)0), ((void*)0), &VAR_7, &VAR_8))
        return VAR_0;

    VAR_9 = FUNC_3(VAR_8.hProcess, 10000);
    if (VAR_9 == VAR_4)
        FUNC_2(VAR_8.hProcess, 1);

    FUNC_0(VAR_8.hThread);
    FUNC_0(VAR_8.hProcess);
    return (VAR_9 != VAR_4);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int si ;
struct TYPE_11__ {scalar_t__ hProcess; scalar_t__ hThread; } ;
struct TYPE_10__ {int cb; scalar_t__ hStdError; scalar_t__ hStdOutput; scalar_t__ hStdInput; int dwFlags; } ;
struct TYPE_9__ {scalar_t__ bStdOutput; scalar_t__ bStdError; scalar_t__ dwExitCode; int line; scalar_t__ cmdline; } ;
typedef TYPE_1__ TEST_ENTRY ;
typedef TYPE_2__ STARTUPINFOA ;
typedef TYPE_3__ PROCESS_INFORMATION ;
typedef int * HANDLE ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int *,char*,int *,int *,int ,int ,int *,int *,TYPE_2__*,TYPE_3__*) ;
 int FUNC_2 (scalar_t__,scalar_t__*) ;
 int FUNC_3 (int *,int *,int,scalar_t__*,int *,int *) ;
 int FUNC_4 (TYPE_2__*,int *,int **,int **) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (scalar_t__,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (TYPE_2__*,int ,int) ;
 int FUNC_8 (int,char*,int ,scalar_t__,scalar_t__) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void FUNC_10(const TEST_ENTRY *VAR_4)
{
    STARTUPINFOA VAR_5;
    PROCESS_INFORMATION VAR_6;
    DWORD VAR_7, VAR_8;
    HANDLE VAR_9 = ((void*)0);
    HANDLE VAR_10 = ((void*)0);
    BYTE VAR_11;
    DWORD VAR_12;
    BOOL VAR_13, VAR_14;

    FUNC_7(&VAR_5, 0, sizeof(VAR_5));
    VAR_5.cb = sizeof(VAR_5);
    VAR_5.dwFlags = VAR_0;

    if (!FUNC_4(&VAR_5, ((void*)0), &VAR_9, &VAR_10))
    {
        FUNC_9("PrepareForRedirect failed\n");
        return;
    }

    if (FUNC_1(((void*)0), (char *)VAR_4->cmdline, ((void*)0), ((void*)0), VAR_2, 0, ((void*)0), ((void*)0), &VAR_5, &VAR_6))
    {
        FUNC_0(VAR_5.hStdInput);
        VAR_8 = FUNC_6(VAR_6.hProcess, VAR_1);
        if (VAR_8 == VAR_3)
        {
            FUNC_5(VAR_6.hProcess, 9999);
        }
        FUNC_2(VAR_6.hProcess, &VAR_7);
        FUNC_0(VAR_6.hThread);
        FUNC_0(VAR_6.hProcess);
    }
    else
    {
        VAR_7 = 8888;
    }

    FUNC_3(VAR_9, &VAR_11, 1, &VAR_12, ((void*)0), ((void*)0));
    VAR_13 = VAR_12 != 0;
    FUNC_3(VAR_10, &VAR_11, 1, &VAR_12, ((void*)0), ((void*)0));
    VAR_14 = VAR_12 != 0;

    if (VAR_5.hStdInput)
        FUNC_0(VAR_5.hStdInput);
    if (VAR_5.hStdOutput)
        FUNC_0(VAR_5.hStdOutput);
    if (VAR_5.hStdError)
        FUNC_0(VAR_5.hStdError);

    FUNC_8(VAR_4->bStdOutput == VAR_13,
       "Line %u: bStdOutput %d vs %d\n",
       VAR_4->line, VAR_4->bStdOutput, VAR_13);

    FUNC_8(VAR_4->bStdError == VAR_14,
       "Line %u: bStdError %d vs %d\n",
       VAR_4->line, VAR_4->bStdError, VAR_14);

    FUNC_8(VAR_4->dwExitCode == VAR_7,
       "Line %u: dwExitCode %ld vs %ld\n",
       VAR_4->line, VAR_4->dwExitCode, VAR_7);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int si ;
typedef int sa ;
struct TYPE_9__ {int hProcess; int hThread; } ;
struct TYPE_8__ {int nLength; int bInheritHandle; int * lpSecurityDescriptor; } ;
struct TYPE_7__ {int cb; void* hStdOutput; void* hStdError; void* hStdInput; int dwFlags; } ;
typedef TYPE_1__ STARTUPINFOA ;
typedef TYPE_2__ SECURITY_ATTRIBUTES ;
typedef TYPE_3__ PROCESS_INFORMATION ;
typedef int HANDLE ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char const*,char*,int *,int *,int ,int ,int *,int *,TYPE_1__*,TYPE_3__*) ;
 int FUNC_2 () ;
 void* FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (int ,char*,char*,int ) ;
 int FUNC_6 (char*,char*,char const*) ;

__attribute__((used)) static HANDLE FUNC_7(const char *VAR_5)
{
    PROCESS_INFORMATION VAR_6;
    STARTUPINFOA VAR_7;
    SECURITY_ATTRIBUTES VAR_8;
    char VAR_9[VAR_0 * 2];
    BOOL VAR_10;

    FUNC_4(&VAR_7, 0, sizeof(VAR_7));
    VAR_7.cb = sizeof(VAR_7);
    VAR_7.dwFlags = VAR_1;
    VAR_7.hStdInput = FUNC_3(VAR_2);
    VAR_7.hStdOutput = FUNC_3(VAR_3);
    VAR_7.hStdError = VAR_7.hStdOutput;

    VAR_8.nLength = sizeof(VAR_8);
    VAR_8.lpSecurityDescriptor = ((void*)0);
    VAR_8.bInheritHandle = VAR_4;

    FUNC_6(VAR_9, "\"%s\" ole_server -server", VAR_5);
    VAR_10 = FUNC_1(VAR_5, VAR_9, ((void*)0), ((void*)0), VAR_4, 0, ((void*)0), ((void*)0), &VAR_7, &VAR_6);
    FUNC_5(VAR_10, "CreateProcess(%s) error %d\n", VAR_9, FUNC_2());
    if (!VAR_10) return 0;

    FUNC_0(VAR_6.hThread);
    return VAR_6.hProcess;
}

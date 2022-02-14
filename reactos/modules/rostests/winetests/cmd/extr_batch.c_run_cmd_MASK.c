
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int si ;
typedef int sa ;
struct TYPE_9__ {scalar_t__ hProcess; scalar_t__ hThread; } ;
struct TYPE_8__ {int member_0; int member_2; int member_1; } ;
struct TYPE_7__ {int member_0; scalar_t__ hStdError; scalar_t__ hStdOutput; int dwFlags; } ;
typedef TYPE_1__ STARTUPINFOA ;
typedef TYPE_2__ SECURITY_ATTRIBUTES ;
typedef TYPE_3__ PROCESS_INFORMATION ;
typedef scalar_t__ HANDLE ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,int ,int,TYPE_2__*,int ,int ,int *) ;
 int FUNC_2 (int *,char*,int *,int *,int ,int ,int *,int *,TYPE_1__*,TYPE_3__*) ;
 int FUNC_3 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 () ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (scalar_t__,char const*,int ,int *,int *) ;
 int FUNC_7 (int,char*,...) ;

__attribute__((used)) static BOOL FUNC_8(const char *VAR_10, DWORD VAR_11)
{
    SECURITY_ATTRIBUTES VAR_12 = {sizeof(VAR_12), 0, VAR_9};
    char VAR_13[] = "test.cmd";
    STARTUPINFOA VAR_14 = {sizeof(VAR_14)};
    PROCESS_INFORMATION VAR_15;
    HANDLE VAR_16,VAR_17;
    DWORD VAR_18;
    BOOL VAR_19;

    VAR_16 = FUNC_1("test.cmd", VAR_5, 0, ((void*)0), VAR_0,
            VAR_2, ((void*)0));
    FUNC_7(VAR_16 != VAR_7, "CreateFile failed\n");
    if(VAR_16 == VAR_7)
        return VAR_1;

    VAR_19 = FUNC_6(VAR_16, VAR_10, VAR_11, &VAR_18, ((void*)0));
    FUNC_0(VAR_16);
    FUNC_7(VAR_19, "Could not write to file: %u\n", FUNC_4());
    if(!VAR_19)
        return VAR_1;

    VAR_16 = FUNC_1("test.out", VAR_5, VAR_4|VAR_3, &VAR_12, VAR_0,
            VAR_2, ((void*)0));
    FUNC_7(VAR_16 != VAR_7, "CreateFile failed\n");
    if(VAR_16 == VAR_7)
        return VAR_1;

    VAR_17 = FUNC_1("test.err", VAR_5, VAR_4|VAR_3, &VAR_12, VAR_0,
            VAR_2, ((void*)0));
    FUNC_7(VAR_17 != VAR_7, "CreateFile stderr failed\n");
    if(VAR_17 == VAR_7)
        return VAR_1;

    VAR_14.dwFlags = VAR_8;
    VAR_14.hStdOutput = VAR_16;
    VAR_14.hStdError = VAR_17;
    VAR_19 = FUNC_2(((void*)0), VAR_13, ((void*)0), ((void*)0), VAR_9, 0, ((void*)0), ((void*)0), &VAR_14, &VAR_15);
    FUNC_7(VAR_19, "CreateProcess failed: %u\n", FUNC_4());
    if(!VAR_19) {
        FUNC_3("test.out");
        return VAR_1;
    }

    FUNC_5(VAR_15.hProcess, VAR_6);
    FUNC_0(VAR_15.hThread);
    FUNC_0(VAR_15.hProcess);
    FUNC_0(VAR_16);
    FUNC_0(VAR_17);
    FUNC_3("test.cmd");
    return VAR_9;
}

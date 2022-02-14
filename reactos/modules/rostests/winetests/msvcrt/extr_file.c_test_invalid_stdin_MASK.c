
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int startup ;
typedef int sa ;
struct TYPE_9__ {int hProcess; } ;
struct TYPE_8__ {int nLength; int bInheritHandle; int * lpSecurityDescriptor; } ;
struct TYPE_7__ {int cb; void* hStdError; void* hStdOutput; int hStdInput; int dwFlags; } ;
typedef TYPE_1__ STARTUPINFOA ;
typedef TYPE_2__ SECURITY_ATTRIBUTES ;
typedef TYPE_3__ PROCESS_INFORMATION ;
typedef scalar_t__ LONG ;
typedef int HKEY ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int *,int *,int ,int,int *,int *,TYPE_1__*,TYPE_3__*) ;
 void* FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (int,char*,scalar_t__) ;
 int VAR_8 ;
 int FUNC_6 (char*,char*,char const*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9( const char* VAR_9 )
{
    char VAR_10[VAR_2];
    PROCESS_INFORMATION VAR_11;
    SECURITY_ATTRIBUTES VAR_12;
    STARTUPINFOA VAR_13;
    HKEY VAR_14;
    LONG VAR_15;

    if(!VAR_8) {

        FUNC_7("skipping invalid stdin tests\n");
        return;
    }

    VAR_15 = FUNC_3(VAR_1, &VAR_14);
    FUNC_5(!VAR_15, "RegOpenCurrentUser failed: %x\n", VAR_15);

    VAR_12.nLength = sizeof(VAR_12);
    VAR_12.lpSecurityDescriptor = ((void*)0);
    VAR_12.bInheritHandle = VAR_7;

    FUNC_4(&VAR_13, 0, sizeof(VAR_13));
    VAR_13.cb = sizeof(VAR_13);
    VAR_13.dwFlags = VAR_4;
    VAR_13.hStdInput = VAR_14;
    VAR_13.hStdOutput = FUNC_1(VAR_6);
    VAR_13.hStdError = FUNC_1(VAR_5);

    FUNC_6(VAR_10, "%s file stdin", VAR_9);
    FUNC_0(((void*)0), VAR_10, ((void*)0), ((void*)0), VAR_7,
            VAR_0|VAR_3, ((void*)0), ((void*)0), &VAR_13, &VAR_11);
    FUNC_8(VAR_11.hProcess);

    VAR_15 = FUNC_2(VAR_14);
    FUNC_5(!VAR_15, "RegCloseKey failed: %x\n", VAR_15);
}

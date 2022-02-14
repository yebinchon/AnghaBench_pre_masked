
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int si ;
struct TYPE_6__ {int hProcess; int hThread; } ;
struct TYPE_5__ {int cb; int member_0; } ;
typedef TYPE_1__ STARTUPINFOA ;
typedef TYPE_2__ PROCESS_INFORMATION ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,int *,int *,int ,int ,int *,int *,TYPE_1__*,TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int FUNC_3 (int *,char*,int) ;
 int VAR_1 ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (char*,char*,char*,char*) ;
 int FUNC_6 (char***) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(void)
{
    char VAR_2[VAR_1];
    char VAR_3[VAR_1];
    char **VAR_4;
    PROCESS_INFORMATION VAR_5;
    STARTUPINFOA VAR_6 = { 0 };
    BOOL VAR_7;

    FUNC_3(((void*)0), VAR_3, VAR_1);

    VAR_6.cb = sizeof(VAR_6);
    FUNC_6(&VAR_4);
    FUNC_5(VAR_2, "\"%s\" %s domain_tests", VAR_4[0], VAR_4[1]);
    VAR_7 = FUNC_1(VAR_4[0], VAR_2, ((void*)0), ((void*)0), VAR_0, 0, ((void*)0), ((void*)0), &VAR_6, &VAR_5);
    FUNC_4(VAR_7, "Failed to spawn child process: %u\n", FUNC_2());
    FUNC_7(VAR_5.hProcess);
    FUNC_0(VAR_5.hThread);
    FUNC_0(VAR_5.hProcess);
}


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
typedef int HANDLE ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int *,int *,int ,int ,int *,int *,TYPE_1__*,TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_2 () ;
 int VAR_1 ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (char*,char*,char*,char*,char const*) ;
 int FUNC_5 (char***) ;

__attribute__((used)) static HANDLE FUNC_6(const char *VAR_2)
{
    char **VAR_3;
    char VAR_4[VAR_1];
    PROCESS_INFORMATION VAR_5;
    BOOL VAR_6;
    STARTUPINFOA VAR_7 = { 0 };
    VAR_7.cb = sizeof(VAR_7);

    FUNC_5( &VAR_3 );
    FUNC_4(VAR_4, "%s %s %s", VAR_3[0], VAR_3[1], VAR_2);
    VAR_6 = FUNC_1(((void*)0), VAR_4, ((void*)0), ((void*)0), VAR_0, 0, ((void*)0), ((void*)0), &VAR_7, &VAR_5);
    FUNC_3(VAR_6, "error: %u\n", FUNC_2());
    VAR_6 = FUNC_0(VAR_5.hThread);
    FUNC_3(VAR_6, "error %u\n", FUNC_2());
    return VAR_5.hProcess;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef char WCHAR ;
struct TYPE_7__ {int hThread; int hProcess; } ;
struct TYPE_6__ {int cb; } ;
typedef TYPE_1__ STARTUPINFOW ;
typedef TYPE_2__ PROCESS_INFORMATION ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int *,int *,int ,long,int *,int *,TYPE_1__*,TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 (int ,char*) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,char const*,int ,char*) ;

__attribute__((used)) static void FUNC_6(WCHAR *VAR_3)
{
    static const WCHAR VAR_4[] = {'%','s',' ','q','m','g','r',' ','%','s', 0};
    WCHAR VAR_5[VAR_1];
    PROCESS_INFORMATION VAR_6;
    STARTUPINFOW VAR_7;

    FUNC_2(&VAR_7, 0, sizeof VAR_7);
    VAR_7.cb = sizeof VAR_7;

    FUNC_5(VAR_5, VAR_4, VAR_2, VAR_3);
    FUNC_3(FUNC_1(((void*)0), VAR_5, ((void*)0), ((void*)0), VAR_0, 0L, ((void*)0), ((void*)0), &VAR_7, &VAR_6), "CreateProcess\n");
    FUNC_4(VAR_6.hProcess);
    FUNC_3(FUNC_0(VAR_6.hProcess), "CloseHandle\n");
    FUNC_3(FUNC_0(VAR_6.hThread), "CloseHandle\n");
}

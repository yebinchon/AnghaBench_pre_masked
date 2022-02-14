
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * hProcess; int hThread; } ;
struct TYPE_6__ {int cb; } ;
typedef int TCHAR ;
typedef TYPE_1__ STARTUPINFO ;
typedef TYPE_2__ PROCESS_INFORMATION ;
typedef int PARSED_COMMAND ;
typedef int * HANDLE ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int *,int *,int ,int ,int *,int *,TYPE_1__*,TYPE_2__*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_6 (int *,int *,int *) ;
 int FUNC_7 (char*) ;
 int * FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 () ;
 int FUNC_11 (TYPE_1__*,int ,int) ;

__attribute__((used)) static HANDLE
FUNC_12(PARSED_COMMAND *VAR_3)
{
    TCHAR VAR_4[VAR_1];
    TCHAR VAR_5[VAR_0], *VAR_6;
    STARTUPINFO VAR_7;
    PROCESS_INFORMATION VAR_8;


    FUNC_5(((void*)0), VAR_4, FUNC_0(VAR_4));


    VAR_6 = FUNC_8(VAR_5, FUNC_7("/S/D/C\""));
    VAR_6 = FUNC_6(VAR_3, VAR_6, &VAR_5[VAR_0 - 2]);
    if (!VAR_6)
    {
        FUNC_10();
        return ((void*)0);
    }
    FUNC_9(VAR_6, FUNC_7("\""));

    FUNC_11(&VAR_7, 0, sizeof VAR_7);
    VAR_7.cb = sizeof(STARTUPINFO);
    if (!FUNC_2(VAR_4, VAR_5, ((void*)0), ((void*)0), VAR_2, 0,
                       ((void*)0), ((void*)0), &VAR_7, &VAR_8))
    {
        FUNC_3(FUNC_4(), ((void*)0));
        return ((void*)0);
    }

    FUNC_1(VAR_8.hThread);
    return VAR_8.hProcess;
}

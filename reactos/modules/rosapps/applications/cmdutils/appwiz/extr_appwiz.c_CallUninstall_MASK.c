
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int si ;
struct TYPE_7__ {int hProcess; int hThread; } ;
struct TYPE_6__ {int cb; int wShowWindow; } ;
typedef TYPE_1__ STARTUPINFO ;
typedef TYPE_2__ PROCESS_INFORMATION ;
typedef int MSG ;
typedef int LPTSTR ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int ,int *,int *,int ,int ,int *,int *,TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int,int *,int ,int ,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int *,int *,int ,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_6 (TYPE_1__*,int) ;

void FUNC_7(LPTSTR VAR_7)
{
    STARTUPINFO VAR_8;
    PROCESS_INFORMATION VAR_9;
    DWORD VAR_10;
    MSG VAR_11;

    FUNC_6(&VAR_8, sizeof(VAR_8));
    VAR_8.cb = sizeof(VAR_8);
    VAR_8.wShowWindow = VAR_4;

    if (FUNC_1(((void*)0), VAR_7, ((void*)0), ((void*)0), VAR_0, 0, ((void*)0), ((void*)0), &VAR_8, &VAR_9))
    {
        FUNC_0(VAR_9.hThread);

        for (;;)
        {
            VAR_10 = FUNC_3(1, &VAR_9.hProcess, VAR_0, VAR_1, VAR_3);
            if (VAR_10 == VAR_6 + 1)
            {
                 while (FUNC_4(&VAR_11, ((void*)0), 0, 0, VAR_2))
                 {
                     FUNC_5(&VAR_11);
                     FUNC_2(&VAR_11);
                 }
            }
            else if (VAR_10 == VAR_6 || VAR_10 == VAR_5)
                break;
        }
        FUNC_0(VAR_9.hProcess);
    }
}

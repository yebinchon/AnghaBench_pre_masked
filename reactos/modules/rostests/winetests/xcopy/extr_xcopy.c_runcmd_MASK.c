
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int hProcess; int hThread; } ;
struct TYPE_5__ {int member_0; } ;
typedef TYPE_1__ STARTUPINFOA ;
typedef TYPE_2__ PROCESS_INFORMATION ;
typedef int DWORD ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int *,int *,int ,int ,int *,int *,TYPE_1__*,TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_2 (int ,int*) ;
 int FUNC_3 () ;
 char* FUNC_4 (int ,int ,scalar_t__) ;
 int FUNC_5 (int ,int ,char*) ;
 int FUNC_6 (int ,int) ;
 int VAR_2 ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (char*,char const*) ;
 scalar_t__ FUNC_9 (char const*) ;

__attribute__((used)) static DWORD FUNC_10(const char* VAR_3)
{
    STARTUPINFOA VAR_4 = {sizeof(STARTUPINFOA)};
    PROCESS_INFORMATION VAR_5;
    char* VAR_6;
    DWORD VAR_7;


    VAR_6 = FUNC_4(FUNC_3(), 0, FUNC_9(VAR_3) + 1);
    FUNC_8(VAR_6, VAR_3);




    VAR_7 = FUNC_1(((void*)0), VAR_6, ((void*)0), ((void*)0), VAR_1, VAR_0, ((void*)0), ((void*)0), &VAR_4, &VAR_5);
    FUNC_5(FUNC_3(), 0, VAR_6);
    if (!VAR_7)
        return 260;

    VAR_7 = FUNC_7(VAR_5.hProcess, 5000);
    if (VAR_7 == VAR_2)
        FUNC_2(VAR_5.hProcess, &VAR_7);
    else
        FUNC_6(VAR_5.hProcess, 1);
    FUNC_0(VAR_5.hThread);
    FUNC_0(VAR_5.hProcess);

    return VAR_7;
}

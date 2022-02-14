
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int szReg ;
typedef int WCHAR ;
typedef int DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ,int,int *,int ) ;
 scalar_t__ FUNC_2 (int ,int ,int **,int*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (int *,char*) ;

void
FUNC_5(void)
{
    BOOL VAR_6, VAR_7 = 0;
    WCHAR VAR_8[10];
    DWORD VAR_9;


    VAR_6 = FUNC_0(VAR_2);


    FUNC_1(VAR_4, 0, ((void*)0), VAR_3);
    VAR_7 = FUNC_0(VAR_2);
    FUNC_3(VAR_7 == 0);
    VAR_9 = sizeof(VAR_8);
    FUNC_3(FUNC_2(VAR_1, VAR_5, &VAR_8, &VAR_9, ((void*)0)) == VAR_0);
    FUNC_3(FUNC_4(VAR_8, L"0") == 0);


    FUNC_1(VAR_4, 1, ((void*)0), VAR_3);
    VAR_7 = FUNC_0(VAR_2);
    FUNC_3(VAR_7 == 1);
    VAR_9 = sizeof(VAR_8);
    FUNC_3(FUNC_2(VAR_1, VAR_5, &VAR_8, &VAR_9, ((void*)0)) == VAR_0);
    FUNC_3(FUNC_4(VAR_8, L"1") == 0);


    FUNC_1(VAR_4, 2, ((void*)0), VAR_3);
    VAR_7 = FUNC_0(VAR_2);
    FUNC_3(VAR_7 == 1);
    VAR_9 = sizeof(VAR_8);
    FUNC_3(FUNC_2(VAR_1, VAR_5, &VAR_8, &VAR_9, ((void*)0)) == VAR_0);
    FUNC_3(FUNC_4(VAR_8, L"2") == 0);


    FUNC_1(VAR_4, -1, ((void*)0), VAR_3);
    VAR_7 = FUNC_0(VAR_2);
    FUNC_3(VAR_7 == 1);
    VAR_9 = sizeof(VAR_8);
    FUNC_3(FUNC_2(VAR_1, VAR_5, &VAR_8, &VAR_9, ((void*)0)) == VAR_0);
    FUNC_3(FUNC_4(VAR_8, L"-1") == 0);


    FUNC_1(VAR_4, VAR_6, 0, VAR_3);


}

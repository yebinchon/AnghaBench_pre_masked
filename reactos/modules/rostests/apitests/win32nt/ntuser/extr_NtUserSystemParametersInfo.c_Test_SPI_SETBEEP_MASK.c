
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int szReg ;
typedef int WCHAR ;
typedef int DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,int*,int ) ;
 scalar_t__ FUNC_1 (int ,int ,int **,int*,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int *,char*) ;

void
FUNC_4(void)
{
    BOOL VAR_6, VAR_7 = 0;
    WCHAR VAR_8[10];
    DWORD VAR_9;


    FUNC_0(VAR_3, 0, &VAR_6, 0);


    FUNC_0(VAR_4, 0, ((void*)0), VAR_2);
    FUNC_0(VAR_3, 0, &VAR_7, 0);
    FUNC_2(VAR_7 == 0);
    VAR_9 = sizeof(VAR_8);
    FUNC_2(FUNC_1(VAR_1, VAR_5, &VAR_8, &VAR_9, ((void*)0)) == VAR_0);
    FUNC_2(FUNC_3(VAR_8, L"No") == 0);


    FUNC_0(VAR_4, 1, ((void*)0), VAR_2);
    FUNC_0(VAR_3, 0, &VAR_7, 0);
    FUNC_2(VAR_7 == 1);
    VAR_9 = sizeof(VAR_8);
    FUNC_2(FUNC_1(VAR_1, VAR_5, &VAR_8, &VAR_9, ((void*)0)) == VAR_0);
    FUNC_2(FUNC_3(VAR_8, L"Yes") == 0);


    FUNC_0(VAR_4, 2, ((void*)0), VAR_2);
    FUNC_0(VAR_3, 0, &VAR_7, 0);
    FUNC_2(VAR_7 == 1);
    VAR_9 = sizeof(VAR_8);
    FUNC_2(FUNC_1(VAR_1, VAR_5, &VAR_8, &VAR_9, ((void*)0)) == VAR_0);
    FUNC_2(FUNC_3(VAR_8, L"Yes") == 0);


    FUNC_0(VAR_4, 0, &VAR_6, VAR_2);
}

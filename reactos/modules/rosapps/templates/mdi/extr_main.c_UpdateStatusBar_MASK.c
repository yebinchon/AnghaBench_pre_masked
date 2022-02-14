
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int text ;
typedef int TCHAR ;
typedef int LPARAM ;
typedef int DWORD ;


 int FUNC_0 (int *,int*) ;
 int FUNC_1 (int *,int*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,int,int ) ;
 int VAR_1 ;

void FUNC_3(void)
{
    TCHAR VAR_2[260];
    DWORD VAR_3;

    VAR_3 = sizeof(VAR_2)/sizeof(TCHAR);
    FUNC_1(VAR_2, &VAR_3);
    FUNC_2(VAR_1, VAR_0, 1, (LPARAM)VAR_2);
    VAR_3 = sizeof(VAR_2)/sizeof(TCHAR);
    FUNC_0(VAR_2, &VAR_3);
    FUNC_2(VAR_1, VAR_0, 0, (LPARAM)VAR_2);
}

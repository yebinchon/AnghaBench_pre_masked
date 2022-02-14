
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int TCHAR ;
typedef int DWORD ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int * FUNC_2 (int ,int ,int *,int) ;

void FUNC_3(TCHAR **VAR_0, DWORD *VAR_1, DWORD VAR_2)
{
    VAR_2++;
    if (VAR_2 > *VAR_1) {
        *VAR_1 = VAR_2;
        *VAR_0 = FUNC_2(FUNC_1(), 0, *VAR_0, *VAR_1 * sizeof(**VAR_0));
        FUNC_0(*VAR_0);
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int * PWCHAR ;
typedef int DWORD ;


 int FUNC_0 () ;
 int * FUNC_1 (int ,int ,int) ;
 int VAR_0 ;
 int FUNC_2 (int *,int *,int) ;

PWCHAR FUNC_3(PWCHAR VAR_1, DWORD VAR_2)
{
    PWCHAR VAR_3;

    VAR_3 = FUNC_1(FUNC_0(), 0, VAR_2 + sizeof(WCHAR));
    if (VAR_3 == ((void*)0))
        return ((void*)0);

    FUNC_2(VAR_3, VAR_1, VAR_2);

    VAR_3[VAR_2 / sizeof(WCHAR)] = VAR_0;

    return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VOID ;
typedef int* PWCHAR ;
typedef int DWORD ;


 int* FUNC_0 (int*) ;

__attribute__((used)) static VOID
FUNC_1(PWCHAR VAR_0)
{
    PWCHAR VAR_1;
    DWORD VAR_2;

    VAR_2 = 0;
    VAR_1 = FUNC_0(VAR_0 + VAR_2);

    if (VAR_1 != VAR_0 + VAR_2 && VAR_1[-1] == L'\\')
        VAR_1--;

    if (VAR_1 == VAR_0 + VAR_2 && VAR_1[0] == L'\\')
        VAR_1++;

    VAR_1[0] = 0;
}

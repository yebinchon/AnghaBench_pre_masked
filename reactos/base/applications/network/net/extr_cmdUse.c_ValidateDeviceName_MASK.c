
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* PWSTR ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int*) ;

__attribute__((used)) static
BOOL
FUNC_2(PWSTR VAR_2)
{
    DWORD VAR_3;

    VAR_3 = FUNC_1(VAR_2);
    if (VAR_3 != 2)
    {
        return VAR_0;
    }

    if (!FUNC_0(VAR_2[0]) || VAR_2[1] != L':')
    {
        return VAR_0;
    }

    return VAR_1;
}

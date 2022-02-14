
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* PWSTR ;
typedef int* PWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static
BOOL
FUNC_1(
    PWSTR *VAR_2,
    PWORD VAR_3)
{
    if (!FUNC_0(**VAR_2))
        return VAR_0;

    while (FUNC_0(**VAR_2))
    {
        *VAR_3 = *VAR_3 * 10 + **VAR_2 - L'0';
        (*VAR_2)++;
    }

    return VAR_1;
}

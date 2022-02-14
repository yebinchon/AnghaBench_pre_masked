
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* PWSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static
BOOL
FUNC_0(
    PWSTR *VAR_2)
{
    if (**VAR_2 == L'/' || **VAR_2 == L'.')
    {
        (*VAR_2)++;
        return VAR_1;
    }

    return VAR_0;
}

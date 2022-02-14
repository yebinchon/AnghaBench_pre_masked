
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* LPWSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static BOOL FUNC_0(LPWSTR VAR_2)
{
    int VAR_3 = 0;

    while (*VAR_2)
    {
        if (*VAR_2 == '[' && *(VAR_2 - 1) != '\\')
            VAR_3++;
        else if (*VAR_2 == ']')
            VAR_3--;

        VAR_2++;
    }

    if (VAR_3 > 0)
        return VAR_0;

    return VAR_1;
}

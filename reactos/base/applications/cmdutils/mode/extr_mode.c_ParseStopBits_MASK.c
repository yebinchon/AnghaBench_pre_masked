
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int* PCWSTR ;
typedef int * PBYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int*,char*,int) ;

__attribute__((used)) static PCWSTR
FUNC_1(PCWSTR VAR_3, PBYTE VAR_4)
{
    if (FUNC_0(VAR_3, L"1.5", 3) == 0)
    {
        VAR_3 += 3;
        *VAR_4 = VAR_0;
    }
    else
    {
        if (*VAR_3 == L'1')
            *VAR_4 = VAR_1;
        else if (*VAR_3 == L'2')
            *VAR_4 = VAR_2;
        else
            return ((void*)0);

        VAR_3++;
    }

    return VAR_3;
}

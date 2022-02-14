
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ ULONG ;
typedef int* PINT ;
typedef int* LPWSTR ;


 scalar_t__ FUNC_0 (int*) ;

__attribute__((used)) static ULONG
FUNC_1(LPWSTR VAR_0, LPWSTR VAR_1, PINT VAR_2)
{
    ULONG VAR_3;


    VAR_3 = FUNC_0(VAR_0);
    if (VAR_3 == (ULONG)-1)
    {

        if (VAR_1[0] != L'-')
        {

            VAR_3 = FUNC_0(VAR_1);
            *VAR_2 += 1;
        }
    }

    return VAR_3;
}

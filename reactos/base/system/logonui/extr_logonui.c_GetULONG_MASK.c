
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ULONG ;
typedef size_t UINT ;
typedef int* LPWSTR ;


 scalar_t__ FUNC_0 (int*) ;
 int FUNC_1 (int*,int**,int) ;

__attribute__((used)) static ULONG
FUNC_2(LPWSTR VAR_0)
{
    UINT VAR_1, VAR_2;
    ULONG VAR_3;
    LPWSTR VAR_4;

    VAR_1 = 0;

    VAR_2 = (UINT)FUNC_0(VAR_0);


    while ((VAR_1 < VAR_2) && ((VAR_0[VAR_1] < L'0') || (VAR_0[VAR_1] > L'9'))) VAR_1++;
    if ((VAR_1 >= VAR_2) || ((VAR_0[VAR_1] < L'0') || (VAR_0[VAR_1] > L'9')))
    {
        return (ULONG)-1;
    }


    VAR_3 = FUNC_1(&VAR_0[VAR_1], &VAR_4, 10);

    return VAR_3;
}

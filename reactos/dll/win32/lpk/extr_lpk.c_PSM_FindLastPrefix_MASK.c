
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* LPCWSTR ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_0(LPCWSTR VAR_1, int VAR_2)
{
    int VAR_3, VAR_4 = 0, VAR_5 = -1;

    for (VAR_3 = 0; VAR_3 < VAR_2 - 1; VAR_3++)
    {
        if (VAR_1[VAR_3] == VAR_0 && VAR_1[VAR_3 + 1] != VAR_0)
        {
            VAR_5 = VAR_3 - VAR_4;
            VAR_4++;
        }
        else if (VAR_1[VAR_3] == VAR_0 && VAR_1[VAR_3 + 1] == VAR_0)
        {
            VAR_3++;
        }
    }
    return VAR_5;
}

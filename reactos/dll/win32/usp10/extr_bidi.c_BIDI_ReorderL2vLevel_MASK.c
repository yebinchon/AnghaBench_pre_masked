
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BYTE ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int*,int) ;

int FUNC_2(int VAR_0, int *VAR_1, const BYTE* VAR_2, int VAR_3, BOOL VAR_4)
{
    int VAR_5 = 0;
    int VAR_6 = -1;


    VAR_4 = VAR_4 || FUNC_0(VAR_0);

    for (; VAR_5 < VAR_3; VAR_5++)
    {
        if (VAR_2[VAR_5] < VAR_0)
            break;
        else if (VAR_2[VAR_5] > VAR_0)
            VAR_6 = VAR_5;
    }
    if (VAR_4)
    {
        FUNC_1(VAR_1, VAR_5);
    }

    if (VAR_6 >= 0)
    {
        VAR_5 = 0;
        for (; VAR_5 < VAR_3; VAR_5++)
            if (VAR_2[VAR_5] < VAR_0)
                break;
            else if (VAR_2[VAR_5] > VAR_0)
                VAR_5 += FUNC_2(VAR_0 + 1, VAR_1 + VAR_5, VAR_2 + VAR_5,
                VAR_3 - VAR_5, VAR_4) - 1;
    }

    return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WCHAR ;


 scalar_t__ const VAR_0 ;
 scalar_t__ const VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1 (int *VAR_2, const WCHAR **VAR_3,
                            int VAR_4, const WCHAR *VAR_5,
                            int VAR_6, int VAR_7, int VAR_8)
{





    if (VAR_8)
    {
        const WCHAR *VAR_9 = VAR_5;
        FUNC_0 (VAR_6 >= VAR_7);
        VAR_6 -= VAR_7;
        while (VAR_7--)
        {
            if ((*VAR_5 == VAR_1 || *VAR_5 == VAR_0) && VAR_6--)
                VAR_5++;
            VAR_5++;
        }
        VAR_4 -= (VAR_5 - VAR_9);
    }
    else
    {
        VAR_5 += VAR_7;
        VAR_4 -= VAR_7;
    }
    *VAR_3 = VAR_5;
    *VAR_2 = VAR_4;
}

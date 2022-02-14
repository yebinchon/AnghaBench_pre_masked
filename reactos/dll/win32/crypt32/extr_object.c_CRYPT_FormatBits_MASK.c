
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct BitToString {int bit; int str; } ;
typedef int WCHAR ;
typedef int LPWSTR ;
typedef unsigned int DWORD ;
typedef int BYTE ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static BOOL FUNC_3(BYTE VAR_4, const struct BitToString *VAR_5,
 DWORD VAR_6, void *VAR_7, DWORD *VAR_8, BOOL *VAR_9)
{
    DWORD VAR_10 = sizeof(WCHAR);
    unsigned int VAR_11;
    BOOL VAR_12 = VAR_2, VAR_13 = *VAR_9;

    for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++)
        if (VAR_4 & VAR_5[VAR_11].bit)
        {
            if (!VAR_13)
                VAR_10 += FUNC_2(VAR_3) * sizeof(WCHAR);
            VAR_13 = VAR_1;
            VAR_10 += FUNC_2(VAR_5[VAR_11].str) * sizeof(WCHAR);
        }
    if (!VAR_7)
    {
        *VAR_9 = VAR_13;
        *VAR_8 = VAR_10;
    }
    else if (*VAR_8 < VAR_10)
    {
        *VAR_9 = VAR_13;
        *VAR_8 = VAR_10;
        FUNC_0(VAR_0);
        VAR_12 = VAR_1;
    }
    else
    {
        LPWSTR VAR_14 = VAR_7;

        VAR_13 = *VAR_9;
        *VAR_8 = VAR_10;
        for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++)
            if (VAR_4 & VAR_5[VAR_11].bit)
            {
                if (!VAR_13)
                {
                    FUNC_1(VAR_14, VAR_3);
                    VAR_14 += FUNC_2(VAR_3);
                }
                VAR_13 = VAR_1;
                FUNC_1(VAR_14, VAR_5[VAR_11].str);
                VAR_14 += FUNC_2(VAR_5[VAR_11].str);
            }
        *VAR_9 = VAR_13;
    }
    return VAR_12;
}

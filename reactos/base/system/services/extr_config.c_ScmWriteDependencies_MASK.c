
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int SIZE_T ;
typedef scalar_t__* LPWSTR ;
typedef scalar_t__* LPCWSTR ;
typedef int LPBYTE ;
typedef int HKEY ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 scalar_t__* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,scalar_t__*) ;
 int VAR_3 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,char*,int ,int ,int ,int) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (scalar_t__*,scalar_t__*) ;
 int FUNC_6 (scalar_t__*) ;

DWORD
FUNC_7(HKEY VAR_5,
                     LPCWSTR VAR_6,
                     DWORD VAR_7)
{
    DWORD VAR_8 = VAR_1;
    SIZE_T VAR_9 = 0;
    SIZE_T VAR_10 = 0;
    SIZE_T VAR_11;
    LPWSTR VAR_12;
    LPWSTR VAR_13;
    LPCWSTR VAR_14;
    LPWSTR VAR_15;

    if (*VAR_6 == 0)
    {
        FUNC_3(VAR_5,
                       L"DependOnService");
        FUNC_3(VAR_5,
                       L"DependOnGroup");
    }
    else
    {
        VAR_12 = FUNC_1(FUNC_0(),
                                VAR_2,
                                (VAR_7 + 2) * sizeof(WCHAR));
        if (VAR_12 == ((void*)0))
            return VAR_0;

        VAR_14 = VAR_6;
        VAR_15 = VAR_12;
        while (*VAR_14 != 0)
        {
            VAR_11 = FUNC_6(VAR_14) + 1;
            if (*VAR_14 == VAR_4)
            {
                VAR_14++;
                VAR_11--;
                VAR_9 += VAR_11;
                FUNC_5(VAR_15, VAR_14);
                VAR_15 = VAR_15 + VAR_11;
            }

            VAR_14 = VAR_14 + VAR_11;
        }
        *VAR_15 = 0;
        VAR_15++;
        VAR_9++;

        VAR_14 = VAR_6;
        VAR_13 = VAR_15;
        while (*VAR_14 != 0)
        {
            VAR_11 = FUNC_6(VAR_14) + 1;
            if (*VAR_14 != VAR_4)
            {
                VAR_10 += VAR_11;
                FUNC_5(VAR_15, VAR_14);
                VAR_15 = VAR_15 + VAR_11;
            }

            VAR_14 = VAR_14 + VAR_11;
        }
        *VAR_15 = 0;
        VAR_10++;

        if (VAR_9 > 1)
        {
            VAR_8 = FUNC_4(VAR_5,
                                     L"DependOnGroup",
                                     0,
                                     VAR_3,
                                     (LPBYTE)VAR_12,
                                     (DWORD)(VAR_9 * sizeof(WCHAR)));
        }
        else
        {
            FUNC_3(VAR_5,
                            L"DependOnGroup");
        }

        if (VAR_8 == VAR_1)
        {
            if (VAR_10 > 1)
            {
                VAR_8 = FUNC_4(VAR_5,
                                         L"DependOnService",
                                         0,
                                         VAR_3,
                                         (LPBYTE)VAR_13,
                                         (DWORD)(VAR_10 * sizeof(WCHAR)));
            }
            else
            {
                FUNC_3(VAR_5,
                                L"DependOnService");
            }
        }

        FUNC_2(FUNC_0(), 0, VAR_12);
    }

    return VAR_8;
}

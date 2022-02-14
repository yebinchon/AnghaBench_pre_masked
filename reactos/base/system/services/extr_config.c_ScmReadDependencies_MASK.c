
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef int SIZE_T ;
typedef scalar_t__* LPWSTR ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 () ;
 int VAR_2 ;
 scalar_t__* FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,scalar_t__*) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (int ,char*,scalar_t__**) ;
 int FUNC_5 (scalar_t__*,scalar_t__*,int) ;
 int FUNC_6 (scalar_t__*,scalar_t__*) ;
 int FUNC_7 (scalar_t__*) ;

DWORD
FUNC_8(HKEY VAR_4,
                    LPWSTR *VAR_5,
                    DWORD *VAR_6)
{
    LPWSTR VAR_7 = ((void*)0);
    LPWSTR VAR_8 = ((void*)0);
    SIZE_T VAR_9 = 0;
    SIZE_T VAR_10 = 0;
    LPWSTR VAR_11;
    LPWSTR VAR_12;
    SIZE_T VAR_13;
    SIZE_T VAR_14;

    *VAR_5 = ((void*)0);
    *VAR_6 = 0;


    FUNC_4(VAR_4,
                  L"DependOnGroup",
                  &VAR_7);

    FUNC_4(VAR_4,
                  L"DependOnService",
                  &VAR_8);


    if (VAR_7 == ((void*)0) && VAR_8 == ((void*)0))
        return VAR_1;


    if (VAR_7)
    {
        FUNC_0("Groups:\n");
        VAR_11 = VAR_7;
        while (*VAR_11 != 0)
        {
            FUNC_0("  %S\n", VAR_11);

            VAR_13 = FUNC_7(VAR_11) + 1;
            VAR_9 += VAR_13 + 1;

            VAR_11 = VAR_11 + VAR_13;
        }
    }

    if (VAR_8)
    {
        FUNC_0("Services:\n");
        VAR_11 = VAR_8;
        while (*VAR_11 != 0)
        {
            FUNC_0("  %S\n", VAR_11);

            VAR_13 = FUNC_7(VAR_11) + 1;
            VAR_10 += VAR_13;

            VAR_11 = VAR_11 + VAR_13;
        }
    }

    VAR_14 = VAR_9 + VAR_10 + 1;
    FUNC_0("cchTotalLength: %lu\n", VAR_14);


    *VAR_5 = FUNC_2(FUNC_1(), VAR_2, VAR_14 * sizeof(WCHAR));
    if (*VAR_5 == ((void*)0))
    {
        if (VAR_7)
            FUNC_3(FUNC_1(), 0, VAR_7);

        if (VAR_8)
            FUNC_3(FUNC_1(), 0, VAR_8);

        return VAR_0;
    }


    *VAR_6 = (DWORD)VAR_14;


    VAR_12 = *VAR_5;
    if (VAR_8)
    {
        FUNC_5(VAR_12,
               VAR_8,
               VAR_10 * sizeof(WCHAR));

        VAR_12 = VAR_12 + VAR_10;
    }


    if (VAR_7)
    {
        VAR_11 = VAR_7;
        while (*VAR_11 != 0)
        {
            VAR_13 = FUNC_7(VAR_11) + 1;

            *VAR_12 = VAR_3;
            VAR_12++;

            FUNC_6(VAR_12, VAR_11);

            VAR_12 = VAR_12 + VAR_13;
            VAR_11 = VAR_11 + VAR_13;
        }
    }


    if (VAR_7)
        FUNC_3(FUNC_1(), 0, VAR_7);

    if (VAR_8)
        FUNC_3(FUNC_1(), 0, VAR_8);

    return VAR_1;
}

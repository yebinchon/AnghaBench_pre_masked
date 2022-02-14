
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int szBuffer ;
typedef int WCHAR ;
struct TYPE_3__ {int Bias; } ;
typedef TYPE_1__ TIME_ZONE_INFORMATION ;
typedef int* PWSTR ;
typedef int* PDWORD ;
typedef int* PBYTE ;
typedef int * LPWSTR ;
typedef scalar_t__ LONG ;
typedef int HourBitmap ;
typedef int DayBitmap ;
typedef int DWORD ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int*,int,int) ;
 int FUNC_1 (int,int ,int,int ,int *,int ,int *) ;
 scalar_t__ FUNC_2 (int*,int) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int* FUNC_5 (int ,int ,int) ;
 int FUNC_6 (int ,int ,int*) ;
 int VAR_8 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (scalar_t__,scalar_t__) ;
 int FUNC_9 (int*,int **,int **,int*) ;
 int FUNC_10 (int*,int **,scalar_t__*) ;
 int FUNC_11 (int*,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_12 (int*,int) ;
 int VAR_11 ;
 scalar_t__ FUNC_13 (int) ;
 scalar_t__ FUNC_14 (int*,char*) ;

__attribute__((used)) static
DWORD
FUNC_15(
    PWSTR VAR_12,
    PBYTE *VAR_13,
    PDWORD VAR_14)
{
    TIME_ZONE_INFORMATION VAR_15;
    PBYTE VAR_16 = ((void*)0);
    DWORD VAR_17 = VAR_2;
    WCHAR VAR_18[32];
    PWSTR VAR_19, VAR_20;
    WCHAR VAR_21, VAR_22;
    DWORD VAR_23, VAR_24, VAR_25, VAR_26;
    LONG VAR_27, VAR_28, VAR_29;
    BYTE VAR_30;
    BYTE VAR_31[6];
    LPWSTR VAR_32[7] = {((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0)};
    LPWSTR VAR_33[7] = {((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0)};
    LPWSTR VAR_34[4] = {((void*)0), ((void*)0), ((void*)0), ((void*)0)};

    FUNC_4(&VAR_15);
    VAR_29 = VAR_15.Bias / 60;

    VAR_16 = FUNC_5(FUNC_3(),
                             VAR_6,
                             VAR_10 / 8);
    if (VAR_16 == ((void*)0))
        return VAR_1;

    if (*VAR_12 == VAR_9)
    {
        goto done;
    }

    if (FUNC_14(VAR_12, L"all") == 0)
    {
        FUNC_0(VAR_16, VAR_10 / 8, 0xFF);
        goto done;
    }

    for (VAR_25 = 0; VAR_25 < 7; VAR_25++)
    {
        FUNC_1(VAR_3 |
                       VAR_4 |
                       VAR_5,
                       VAR_11,
                       4314 + VAR_25,
                       VAR_8,
                       (LPWSTR)&VAR_32[VAR_25],
                       0,
                       ((void*)0));

        FUNC_1(VAR_3 |
                       VAR_4 |
                       VAR_5,
                       VAR_11,
                       4307 + VAR_25,
                       VAR_8,
                       (LPWSTR)&VAR_33[VAR_25],
                       0,
                       ((void*)0));
    }

    for (VAR_25 = 0; VAR_25 < 4; VAR_25++)
    {
        FUNC_1(VAR_3 |
                       VAR_4 |
                       VAR_5,
                       VAR_11,
                       4322 + VAR_25,
                       VAR_8,
                       (LPWSTR)&VAR_34[VAR_25],
                       0,
                       ((void*)0));
    }

    FUNC_12(&VAR_30, sizeof(VAR_30));
    FUNC_12(VAR_31, sizeof(VAR_31));

    FUNC_12(VAR_18, sizeof(VAR_18));
    VAR_19 = VAR_12;
    VAR_20 = VAR_18;
    VAR_21 = VAR_9;
    VAR_22 = VAR_9;
    for (;;)
    {
        if (*VAR_19 != L'-' && *VAR_19 != L',' && *VAR_19 != L';' && *VAR_19 != VAR_9)
        {
            *VAR_20 = *VAR_19;
            VAR_20++;
        }
        else
        {
            VAR_21 = VAR_22;
            VAR_22 = *VAR_19;

            if (VAR_21 != L'-')
            {

                if (FUNC_13(VAR_18[0]))
                {

                    if (!FUNC_10(VAR_18, VAR_34, &VAR_27))
                    {
                        VAR_17 = 3769;
                        break;
                    }

                    FUNC_11(VAR_31, FUNC_8(VAR_27, VAR_29));
                }
                else
                {

                    if (!FUNC_9(VAR_18, VAR_32, VAR_33, &VAR_23))
                    {
                        VAR_17 = 3768;
                        break;
                    }

                    FUNC_11(&VAR_30, VAR_23);
                }
            }
            else
            {

                if (FUNC_13(VAR_18[0]))
                {

                    if (!FUNC_10(VAR_18, VAR_34, &VAR_28))
                    {
                        VAR_17 = 3769;
                        break;
                    }

                    if (VAR_28 <= VAR_27)
                        VAR_28 += VAR_7;

                    for (VAR_25 = FUNC_8(VAR_27, VAR_29); VAR_25 < FUNC_8(VAR_28, VAR_29); VAR_25++)
                        FUNC_11(VAR_31, VAR_25);
                }
                else
                {

                    if (!FUNC_9(VAR_18, VAR_32, VAR_33, &VAR_24))
                    {
                        VAR_17 = 3768;
                        break;
                    }

                    if (VAR_24 <= VAR_23)
                        VAR_24 += VAR_0;

                    for (VAR_25 = VAR_23; VAR_25 <= VAR_24; VAR_25++)
                        FUNC_11(&VAR_30, VAR_25 % VAR_0);
                }
            }

            if (*VAR_19 == L';' || *VAR_19 == VAR_9)
            {

                for (VAR_25 = 0; VAR_25 < VAR_0; VAR_25++)
                {
                    if (FUNC_2(&VAR_30, VAR_25))
                    {
                        for (VAR_26 = 0; VAR_26 < 48; VAR_26++)
                        {
                            if (FUNC_2(VAR_31, VAR_26))
                                FUNC_11(VAR_16, ((VAR_25 * VAR_7) + VAR_26) % VAR_10);
                        }
                    }
                }


                FUNC_12(&VAR_30, sizeof(VAR_30));
                FUNC_12(VAR_31, sizeof(VAR_31));
            }

            if (*VAR_19 == VAR_9)
                break;

            FUNC_12(VAR_18, sizeof(VAR_18));
            VAR_20 = VAR_18;
        }

        VAR_19++;
    }

done:
    for (VAR_25 = 0; VAR_25 < 7; VAR_25++)
    {
        FUNC_7(VAR_32[VAR_25]);
        FUNC_7(VAR_33[VAR_25]);
    }

    for (VAR_25 = 0; VAR_25 < 4; VAR_25++)
    {
        FUNC_7(VAR_34[VAR_25]);
    }

    if (VAR_17 == VAR_2)
    {
        *VAR_13 = VAR_16;
        *VAR_14 = VAR_10;
    }
    else
    {
        if (VAR_16 != ((void*)0))
            FUNC_6(FUNC_3(), 0, VAR_16);
        *VAR_13 = ((void*)0);
        *VAR_14 = 0;
    }

    return VAR_17;
}

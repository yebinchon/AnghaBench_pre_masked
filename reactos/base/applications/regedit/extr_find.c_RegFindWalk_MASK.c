
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ WCHAR ;
typedef int ***************** LPWSTR ;
typedef scalar_t__* LPCWSTR ;
typedef scalar_t__ LONG ;
typedef scalar_t__ HKEY ;
typedef int DWORD ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int *****************,int ) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,int,int ,int*,int *,int *,int *,int *) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__*,scalar_t__*,int ******************,int ******************) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__*,int ,int ,scalar_t__*) ;
 scalar_t__ FUNC_6 (scalar_t__,int *,int *,int *,int*,int *,int *,int *,int *,int *,int *,int *) ;
 scalar_t__ VAR_11 ;
 int FUNC_7 (int ******************,int) ;
 int ************************* FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int *****************,scalar_t__*) ;
 int VAR_12 ;
 int FUNC_10 (int ******************) ;
 int FUNC_11 (scalar_t__*,int *****************,int) ;
 int ************************* FUNC_12 (int) ;
 int FUNC_13 (int ******************,int,int,int ) ;
 int ***************** VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int ***************** VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_14 (int *****************,int *****************) ;
 int FUNC_15 (scalar_t__*,scalar_t__*) ;
 int FUNC_16 (scalar_t__*) ;
 int ************************* FUNC_17 (scalar_t__*,int) ;

BOOL FUNC_18(
    HKEY * VAR_19,
    LPCWSTR VAR_20,
    LPCWSTR VAR_21,
    LPWSTR *VAR_22,
    LPWSTR *VAR_23)
{
    LONG VAR_24;
    DWORD VAR_25, VAR_26;
    HKEY VAR_27, VAR_28;
    WCHAR VAR_29[VAR_9];
    WCHAR VAR_30[VAR_9];
    LPWSTR VAR_31;
    BOOL VAR_32;
    LPWSTR *VAR_33 = ((void*)0);

    VAR_27 = *VAR_19;
    if (FUNC_4(VAR_27, VAR_20, VAR_21, VAR_22,
                       VAR_23))
        return VAR_11;

    if (FUNC_16(VAR_20) >= VAR_9)
        return VAR_2;

    FUNC_15(VAR_30, VAR_20);
    while(VAR_30[0] != 0)
    {
        if (FUNC_1())
            return VAR_2;

        VAR_31 = FUNC_17(VAR_30, L'\\');
        if (VAR_31 == ((void*)0))
        {
            FUNC_15(VAR_29, VAR_30);
            VAR_30[0] = 0;
            VAR_28 = VAR_27;
        }
        else
        {
            FUNC_11(VAR_29, VAR_31 + 1, VAR_9);
            *VAR_31 = 0;
            VAR_24 = FUNC_5(VAR_27, VAR_30, 0, VAR_8,
                                   &VAR_28);
            if (VAR_24 != VAR_1)
                return VAR_2;
        }

        VAR_24 = FUNC_6(VAR_28, ((void*)0), ((void*)0), ((void*)0), &VAR_26, ((void*)0), ((void*)0),
                                  ((void*)0), ((void*)0), ((void*)0), ((void*)0), ((void*)0));
        if (VAR_24 != VAR_1)
            goto err;

        VAR_33 = (LPWSTR *) FUNC_12(VAR_26 * sizeof(LPWSTR));
        if (VAR_33 == ((void*)0))
            goto err;
        FUNC_7(VAR_33, VAR_26 * sizeof(LPWSTR));

        for(VAR_25 = 0; VAR_25 < VAR_26; VAR_25++)
        {
            if (FUNC_1())
                goto err;

            VAR_14 = VAR_9 * sizeof(WCHAR);
            VAR_24 = FUNC_3(VAR_28, VAR_25, VAR_18, &VAR_14,
                                    ((void*)0), ((void*)0), ((void*)0), ((void*)0));
            if (VAR_24 == VAR_0)
            {
                VAR_26 = VAR_25;
                break;
            }
            if (VAR_24 != VAR_1)
                break;
            VAR_33[VAR_25] = FUNC_8(VAR_18);
        }

        FUNC_13(VAR_33, VAR_26, sizeof(LPWSTR), VAR_12);

        VAR_32 = VAR_2;
        for(VAR_25 = 0; VAR_25 < VAR_26; VAR_25++)
        {
            if (FUNC_1())
                goto err;

            if (!VAR_32 && FUNC_9(VAR_33[VAR_25], VAR_29) == 0)
            {
                VAR_32 = VAR_11;
                continue;
            }
            if (!VAR_32)
                continue;

            if ((VAR_15 & VAR_10) &&
                    FUNC_0(VAR_33[VAR_25], VAR_17))
            {
                *VAR_22 = FUNC_12(
                                       (FUNC_16(VAR_30) + FUNC_16(VAR_33[VAR_25]) + 2) *
                                       sizeof(WCHAR));
                if (*VAR_22 == ((void*)0))
                    goto err;
                if (VAR_30[0])
                {
                    FUNC_15(*VAR_22, VAR_30);
                    FUNC_14(*VAR_22, VAR_13);
                }
                else
                    **VAR_22 = 0;
                FUNC_14(*VAR_22, VAR_33[VAR_25]);
                *VAR_23 = ((void*)0);
                goto success;
            }

            if (FUNC_4(VAR_28, VAR_33[VAR_25], ((void*)0),
                               VAR_22, VAR_23))
            {
                LPWSTR VAR_34 = *VAR_22;
                *VAR_22 = FUNC_12(
                                       (FUNC_16(VAR_30) + FUNC_16(VAR_34) + 2) *
                                       sizeof(WCHAR));
                if (*VAR_22 == ((void*)0))
                    goto err;
                if (VAR_30[0])
                {
                    FUNC_15(*VAR_22, VAR_30);
                    FUNC_14(*VAR_22, VAR_13);
                }
                else
                    **VAR_22 = 0;
                FUNC_14(*VAR_22, VAR_34);
                FUNC_10(&VAR_34);
                goto success;
            }
        }
        if (VAR_33 != ((void*)0))
        {
            for(VAR_25 = 0; VAR_25 < VAR_26; VAR_25++)
                FUNC_10(&VAR_33[VAR_25]);
            FUNC_10(VAR_33);
        }
        VAR_33 = ((void*)0);

        if (VAR_27 != VAR_28)
            FUNC_2(VAR_28);
    }

    if (*VAR_19 == VAR_3)
    {
        *VAR_19 = VAR_5;
        if (FUNC_4(*VAR_19, VAR_16, ((void*)0), VAR_22,
                           VAR_23))
            return VAR_11;
    }

    if (*VAR_19 == VAR_5)
    {
        *VAR_19 = VAR_6;
        if (FUNC_4(*VAR_19, VAR_16, ((void*)0), VAR_22,
                           VAR_23))
            goto success;
    }

    if (*VAR_19 == VAR_6)
    {
        *VAR_19 = VAR_7;
        if (FUNC_4(*VAR_19, VAR_16, ((void*)0), VAR_22,
                           VAR_23))
            goto success;
    }

    if (*VAR_19 == VAR_7)
    {
        *VAR_19 = VAR_4;
        if (FUNC_4(*VAR_19, VAR_16, ((void*)0), VAR_22,
                           VAR_23))
            goto success;
    }

err:
    if (VAR_33 != ((void*)0))
    {
        for(VAR_25 = 0; VAR_25 < VAR_26; VAR_25++)
            FUNC_10(&VAR_33[VAR_25]);
        FUNC_10(VAR_33);
    }
    if (VAR_27 != VAR_28)
        FUNC_2(VAR_28);
    return VAR_2;

success:
    if (VAR_33 != ((void*)0))
    {
        for(VAR_25 = 0; VAR_25 < VAR_26; VAR_25++)
            FUNC_10(&VAR_33[VAR_25]);
        FUNC_10(VAR_33);
    }
    if (VAR_27 != VAR_28)
        FUNC_2(VAR_28);
    return VAR_11;
}

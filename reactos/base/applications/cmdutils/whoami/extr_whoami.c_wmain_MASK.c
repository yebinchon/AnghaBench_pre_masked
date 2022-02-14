
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef char* LPWSTR ;
typedef int INT ;
typedef int BYTE ;


 int FUNC_0 (int,int **) ;
 int FUNC_1 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (char*,int,int **) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (int ) ;
 int FUNC_5 () ;
 char* FUNC_6 (int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ FUNC_10 (int *,char*) ;
 int FUNC_11 (char*,...) ;

int FUNC_12(int VAR_24, WCHAR* VAR_25[])
{




    INT VAR_26;
    BYTE VAR_27 = 0;


    FUNC_1();





    if (VAR_24 == 1)
    {

        LPWSTR VAR_28 = FUNC_4(VAR_11);

        if (VAR_28)
        {
            FUNC_11(L"%s\n", VAR_28);
            FUNC_3(VAR_28);
            return 0;
        }
        else
        {
            return 1;
        }
    }


    for (VAR_26 = 1; VAR_26 < VAR_24; VAR_26++)
    {
        if (FUNC_10(VAR_25[VAR_26], L"/nh") == 0)
        {
            VAR_14++;

            if (VAR_13 == VAR_0)
            {
                VAR_13 = VAR_17;

                FUNC_0(VAR_26, VAR_25);
            }
        }
    }

    for (VAR_26 = 1; VAR_26 < VAR_24; VAR_26++)
    {
        if (FUNC_10(VAR_25[VAR_26], L"/fo") == 0)
        {
            if ((VAR_26 + 1) < VAR_24)
            {


                VAR_16++;

                if (FUNC_10(VAR_25[VAR_26 + 1], L"table") == 0 && VAR_15 != VAR_23)
                {
                    VAR_15 = VAR_23;

                    FUNC_0(VAR_26, VAR_25);
                    FUNC_0(VAR_26 + 1, VAR_25);
                }
                else if (FUNC_10(VAR_25[VAR_26 + 1], L"list") == 0 && VAR_15 != VAR_22)
                {
                    VAR_15 = VAR_22;

                    FUNC_0(VAR_26, VAR_25);
                    FUNC_0(VAR_26 + 1, VAR_25);



                    if (VAR_15 == VAR_22 && VAR_13 != VAR_0)
                    {
                        FUNC_11(FUNC_6(VAR_5));
                        return 1;
                    }
                }
                else if (FUNC_10(VAR_25[VAR_26 + 1], L"csv") == 0 && VAR_15 != VAR_21)
                {
                    VAR_15 = VAR_21;

                    FUNC_0(VAR_26, VAR_25);
                    FUNC_0(VAR_26 + 1, VAR_25);
                }

                else if (FUNC_10(VAR_25[VAR_26 + 1], L"/nh") == 0 || FUNC_10(VAR_25[VAR_26 + 1], L"/fo") == 0


                         || FUNC_10(VAR_25[VAR_26 + 1], L"/priv") == 0
                         || FUNC_10(VAR_25[VAR_26 + 1], L"/groups") == 0
                         || FUNC_10(VAR_25[VAR_26 + 1], L"/user") == 0
                         || FUNC_10(VAR_25[VAR_26 + 1], L"/all") == 0
                         || FUNC_10(VAR_25[VAR_26 + 1], L"") == 0)
                {
                    goto FoValueExpected;
                }
                else
                {
                    FUNC_11(FUNC_6(VAR_7), VAR_25[VAR_26 + 1]);
                    return 1;
                }
            }
            else
            {
                FoValueExpected:

                FUNC_11(FUNC_6(VAR_8));
                return 1;
            }
        }
    }

    if (VAR_14 >= 2)
    {
        FUNC_11(FUNC_6(VAR_1), L"/nh");
        return 1;
    }

    else if (VAR_14 == 1 && VAR_24 == 2)
    {
        return 0;
    }

    if (VAR_16 >= 2)
    {
        FUNC_11(FUNC_6(VAR_1), L"/fo");
        return 1;
    }

    else if (VAR_16 == 1 && VAR_24 == 3)
    {
        goto InvalidSyntax;
    }




    if (VAR_24 == 2)
    {

        if (FUNC_10(VAR_25[1], L"/?") == 0)
        {
            FUNC_11(FUNC_6(VAR_9));
            return 0;
        }

        else if (FUNC_10(VAR_25[1], L"/upn") == 0)
        {
            LPWSTR VAR_29 = FUNC_4(VAR_12);

            if (VAR_29)
            {
                FUNC_11(L"%s\n", VAR_29);
                FUNC_3(VAR_29);
                return 0;
            }
            else
            {
                FUNC_11(FUNC_6(VAR_6));
                return 1;
            }
        }

        else if (FUNC_10(VAR_25[1], L"/fqdn") == 0)
        {
            LPWSTR VAR_30 = FUNC_4(VAR_10);

            if (VAR_30)
            {
                FUNC_11(L"%s\n", VAR_30);
                FUNC_3(VAR_30);
                return 0;
            }
            else
            {
                FUNC_11(FUNC_6(VAR_2));
                return 1;
            }
        }

        else if (FUNC_10(VAR_25[1], L"/logonid") == 0)
        {
            return FUNC_7();
        }
    }





    for (VAR_26=1; VAR_26<VAR_24; VAR_26++)
    {
        if ((FUNC_10(VAR_25[VAR_26], L"/user") != 0) &&
            (FUNC_10(VAR_25[VAR_26], L"/groups") != 0) &&
            (FUNC_10(VAR_25[VAR_26], L"/priv") != 0) &&
            (FUNC_10(VAR_25[VAR_26], L"/all") != 0) &&
            (FUNC_10(VAR_25[VAR_26], L"") != 0))
        {
            FUNC_11(FUNC_6(VAR_3), VAR_25[VAR_26]);
            return 1;
        }
    }

    if (FUNC_2(L"/user", VAR_24, VAR_25))
    {
        VAR_27 |= 1<<0;
    }

    if (FUNC_2(L"/groups", VAR_24, VAR_25))
    {
        VAR_27 |= 1<<1;
    }

    if (FUNC_2(L"/priv", VAR_24, VAR_25))
    {
        VAR_27 |= 1<<2;
    }

    if (FUNC_2(L"/all", VAR_24, VAR_25))
    {

        if ((VAR_27 & (1<<0 | 1<<1 | 1<<2)) == 0)
        {
            VAR_27 |= (1<<0 | 1<<1 | 1<<2);
        }
        else
        {
            goto InvalidSyntax;
        }
    }

    if (VAR_27 & 1<<0)
    {
        FUNC_9();
    }
    if (VAR_27 & 1<<1)
    {
        FUNC_5();
    }
    if (VAR_27 & 1<<2)
    {
        FUNC_8();
    }

    return 0;

InvalidSyntax:
    FUNC_11(FUNC_6(VAR_4));
    return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int HKEY ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
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
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_0 (char*,int*) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (char*,char const*) ;
 int FUNC_3 (int,...) ;
 int FUNC_4 (char*,int *,char**,char**) ;
 int FUNC_5 (int ,char*,char*,scalar_t__,char*,char,char*,scalar_t__) ;
 int FUNC_6 (int ,char*,char*,char*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_7 (int,char**) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,char*,char*,char*,scalar_t__,scalar_t__) ;
 int FUNC_10 (int,char**) ;
 int FUNC_11 (int,char**) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*) ;
 int FUNC_14 (char) ;

int FUNC_15(int VAR_16, WCHAR *VAR_17[])
{
    int VAR_18, VAR_19, VAR_20, VAR_21;
    BOOL VAR_22 = VAR_0;
    static const WCHAR VAR_23[] = {'v','a',0};
    static const WCHAR VAR_24[] = {'v','e',0};
    WCHAR *VAR_25, *VAR_26, *VAR_27 = ((void*)0), *VAR_28 = ((void*)0), *VAR_29 = ((void*)0), VAR_30 = '\0';
    BOOL VAR_31 = VAR_0, VAR_32 = VAR_0, VAR_33 = VAR_0, VAR_34 = VAR_0;
    HKEY VAR_35;

    if (VAR_16 == 1)
    {
        FUNC_3(VAR_12);
        FUNC_3(VAR_13);
        return 1;
    }

    if (FUNC_1(VAR_17[1]))
    {
        FUNC_3(VAR_14);
        return 0;
    }

    VAR_19 = FUNC_0(VAR_17[1], &VAR_20);

    if (VAR_19 == VAR_5)
    {
        FUNC_3(VAR_11, VAR_17[1]);
        FUNC_3(VAR_13);
        return 1;
    }

    if (VAR_16 > 2)
        VAR_22 = FUNC_1(VAR_17[2]);

    if (VAR_16 == 2 || ((VAR_22 || VAR_19 == VAR_4) && VAR_16 > 3))
    {
        FUNC_3(VAR_12);
        FUNC_3(VAR_9, FUNC_13(VAR_17[1]));
        return 1;
    }
    else if (VAR_22)
    {
        FUNC_3(VAR_20);
        return 0;
    }

    if (VAR_19 == VAR_4)
        return FUNC_8(VAR_17[2]);

    if (VAR_19 == VAR_3)
        return FUNC_7(VAR_16, VAR_17);

    if (VAR_19 == VAR_8)
        return FUNC_11(VAR_16, VAR_17);

    if (VAR_19 == VAR_7)
        return FUNC_10(VAR_16, VAR_17);

    if (!FUNC_4(VAR_17[2], &VAR_35, &VAR_26, &VAR_25))
        return 1;

    for (VAR_18 = 3; VAR_18 < VAR_16; VAR_18++)
    {
        if (VAR_17[VAR_18][0] == '/' || VAR_17[VAR_18][0] == '-')
        {
            WCHAR *VAR_36 = &VAR_17[VAR_18][1];

            if (!FUNC_2(VAR_36, VAR_24))
            {
                VAR_31 = VAR_15;
                continue;
            }
            else if (!FUNC_2(VAR_36, VAR_23))
            {
                VAR_32 = VAR_15;
                continue;
            }
            else if (!VAR_36[0] || VAR_36[1])
            {
                FUNC_3(VAR_10);
                return 1;
            }

            switch(FUNC_14(VAR_17[VAR_18][1]))
            {
            case 'v':
                if (VAR_27 || !(VAR_27 = VAR_17[++VAR_18]))
                {
                    FUNC_3(VAR_10);
                    return 1;
                }
                break;
            case 't':
                if (VAR_28 || !(VAR_28 = VAR_17[++VAR_18]))
                {
                    FUNC_3(VAR_10);
                    return 1;
                }
                break;
            case 'd':
                if (VAR_29 || !(VAR_29 = VAR_17[++VAR_18]))
                {
                    FUNC_3(VAR_10);
                    return 1;
                }
                break;
            case 's':
                if (VAR_19 == VAR_6)
                {
                    VAR_33 = VAR_15;
                    break;
                }

                VAR_36 = VAR_17[++VAR_18];
                if (!VAR_36 || FUNC_12(VAR_36) != 1)
                {
                    FUNC_3(VAR_10);
                    return 1;
                }
                VAR_30 = VAR_36[0];
                break;
            case 'f':
                VAR_34 = VAR_15;
                break;
            default:
                FUNC_3(VAR_10);
                return 1;
            }
        }
    }

    if ((VAR_27 && VAR_31) || (VAR_27 && VAR_32) || (VAR_31 && VAR_32))
    {
        FUNC_3(VAR_10);
        return 1;
    }

    if (VAR_19 == VAR_1)
        VAR_21 = FUNC_5(VAR_35, VAR_26, VAR_27, VAR_31, VAR_28, VAR_30, VAR_29, VAR_34);
    else if (VAR_19 == VAR_2)
        VAR_21 = FUNC_6(VAR_35, VAR_26, VAR_25, VAR_27, VAR_31, VAR_32, VAR_34);
    else
        VAR_21 = FUNC_9(VAR_35, VAR_26, VAR_25, VAR_27, VAR_31, VAR_33);
    return VAR_21;
}

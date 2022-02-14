
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef scalar_t__ REGEDIT_ACTION ;
typedef int* LPWSTR ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (scalar_t__,int*,int ) ;
 int VAR_7 ;
 int FUNC_2 (int,int*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int VAR_8 ;
 int FUNC_5 (int) ;
 int VAR_9 ;

BOOL FUNC_6(LPWSTR VAR_10)
{
    BOOL VAR_11 = VAR_4;
    REGEDIT_ACTION VAR_12 = VAR_3;
    LPWSTR VAR_13 = VAR_10;
    WCHAR VAR_14 = *VAR_13;

    while (VAR_14 && ((VAR_14 == L'-') || (VAR_14 == L'/')))
    {
        WCHAR VAR_15;
        WCHAR VAR_16;

        VAR_13++;
        VAR_14 = *VAR_13;
        VAR_16 = *(VAR_13 + 1);
        VAR_15 = FUNC_5(VAR_14);
        if (!VAR_16 || FUNC_4(VAR_16))
        {
            if (VAR_15 == L'S')
            {

                VAR_11 = VAR_7;
            }
            else if (VAR_15 == L'V')
            {

            }
            else
            {
                switch (VAR_15)
                {
                    case L'D':
                        VAR_12 = VAR_1;
                        break;
                    case L'E':
                        VAR_12 = VAR_2;
                        break;
                    case L'?':
                        FUNC_0(((void*)0), VAR_6 | VAR_5, VAR_8, VAR_9);
                        FUNC_3(3);
                        break;
                    default:
                        FUNC_2(VAR_15, VAR_13);
                        break;
                }
            }
            VAR_13++;
        }
        else
        {
            if (VAR_16 == L':')
            {
                switch (VAR_15)
                {
                    case L'L':

                    case L'R':
                        VAR_13 += 2;
                        while (*VAR_13 && !FUNC_4(*VAR_13))
                        {
                            VAR_13++;
                        }
                        break;
                    default:
                        FUNC_2(VAR_15, VAR_13);
                        break;
                }
            }
            else
            {

                VAR_13--;
                break;
            }
        }

        VAR_14 = *VAR_13;
        while (VAR_14 && FUNC_4(VAR_14))
        {
            VAR_13++;
            VAR_14 = *VAR_13;
        }
    }

    if (*VAR_13 && VAR_12 == VAR_3)
        VAR_12 = VAR_0;

    if (VAR_12 != VAR_3)
        return FUNC_1(VAR_12, VAR_13, VAR_11);
    else
        return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT8 ;
typedef int UINT32 ;
typedef scalar_t__ ACPI_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const) ;
 scalar_t__ FUNC_2 (int) ;
 char FUNC_3 (char const) ;
 scalar_t__ FUNC_4 (char const) ;

UINT32
FUNC_5 (
    const char *VAR_5,
    char **VAR_6,
    UINT32 VAR_7)
{
    UINT32 VAR_8 = 0;
    UINT32 VAR_9;
    UINT32 VAR_10;
    const char *VAR_11;
    UINT32 VAR_12 = 0;
    ACPI_STATUS VAR_13 = VAR_4;







    VAR_11 = VAR_5;
    while (FUNC_1 (*VAR_5) || *VAR_5 == '\t')
    {
        ++VAR_5;
    }





    if (*VAR_5 == '-')
    {
        VAR_10 = VAR_0;
        ++VAR_5;
    }
    else if (*VAR_5 == '+')
    {
        ++VAR_5;
        VAR_10 = VAR_1;
    }
    else
    {
        VAR_10 = VAR_1;
    }





    if (VAR_7 == 0)
    {
        if (*VAR_5 == '0')
        {
            if (FUNC_3 (*(++VAR_5)) == 'x')
            {
                VAR_7 = 16;
                ++VAR_5;
            }
            else
            {
                VAR_7 = 8;
            }
        }
        else
        {
            VAR_7 = 10;
        }
    }
    else if (VAR_7 < 2 || VAR_7 > 36)
    {




        goto done;
    }





    if (VAR_7 == 8 && *VAR_5 == '0')
    {
        VAR_5++;
    }

    if (VAR_7 == 16 &&
        *VAR_5 == '0' &&
        FUNC_3 (*(++VAR_5)) == 'x')
    {
        VAR_5++;
    }




    while (*VAR_5)
    {
        if (FUNC_0 (*VAR_5))
        {
            VAR_9 = (UINT32) ((UINT8) *VAR_5 - '0');
        }
        else
        {
            VAR_9 = (UINT32) FUNC_4 (*VAR_5);
            if (FUNC_2 (VAR_9))
            {
                VAR_9 = VAR_9 - 'A' + 10;
            }
            else
            {
                goto done;
            }
        }

        if (VAR_9 >= VAR_7)
        {
            goto done;
        }





        if (VAR_12 > ((VAR_2 - (UINT32) VAR_9) /
                            (UINT32) VAR_7))
        {
            VAR_13 = VAR_3;
            VAR_12 = 0;
        }
        else
        {
            VAR_12 *= VAR_7;
            VAR_12 += VAR_9;
            VAR_8 = 1;
        }

        ++VAR_5;
    }

done:




    if (VAR_6)
    {
        if (VAR_8 == 0 && VAR_12 == 0 && VAR_5 != ((void*)0))
        {
            *VAR_6 = (char *) VAR_11;
        }
        else
        {
            *VAR_6 = (char *) VAR_5;
        }
    }

    if (VAR_13 == VAR_3)
    {
        VAR_12 = VAR_2;
    }




    if (VAR_10 == VAR_0)
    {
        VAR_12 = (VAR_2 - VAR_12) + 1;
    }

    return (VAR_12);
}

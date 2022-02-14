
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT8 ;
typedef scalar_t__ UINT64 ;
typedef scalar_t__ INT64 ;
typedef scalar_t__ INT32 ;
typedef scalar_t__ BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 char* FUNC_1 (char*,char*,char) ;
 char* FUNC_2 (char*,scalar_t__,int,scalar_t__) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;

__attribute__((used)) static char *
FUNC_3 (
    char *VAR_9,
    char *VAR_10,
    UINT64 VAR_11,
    UINT8 VAR_12,
    INT32 VAR_13,
    INT32 VAR_14,
    UINT8 VAR_15)
{
    char *VAR_16;
    char VAR_17;
    char VAR_18;
    BOOLEAN VAR_19;
    BOOLEAN VAR_20;
    INT32 VAR_21;
    char VAR_22[66];




    if (VAR_12 < 2 || VAR_12 > 16)
    {
        return (((void*)0));
    }

    if (VAR_15 & VAR_0)
    {
        VAR_15 &= ~VAR_6;
    }

    VAR_19 = ((VAR_15 & VAR_1) && VAR_12 != 10) ? VAR_8 : VAR_7;
    VAR_20 = (VAR_15 & VAR_5) ? VAR_8 : VAR_7;
    VAR_18 = (VAR_15 & VAR_6) ? '0' : ' ';



    VAR_17 = '\0';
    if (VAR_15 & VAR_2)
    {
        if ((INT64) VAR_11 < 0)
        {
            VAR_17 = '-';
            VAR_11 = - (INT64) VAR_11;
            VAR_13--;
        }
        else if (VAR_15 & VAR_3)
        {
            VAR_17 = '+';
            VAR_13--;
        }
        else if (VAR_15 & VAR_4)
        {
            VAR_17 = ' ';
            VAR_13--;
        }
    }
    if (VAR_19)
    {
        VAR_13--;
        if (VAR_12 == 16)
        {
            VAR_13--;
        }
    }



    VAR_16 = FUNC_2 (VAR_22, VAR_11, VAR_12, VAR_20);
    VAR_21 = (INT32) FUNC_0 (VAR_16, VAR_22);



    if (VAR_21 > VAR_14)
    {
        VAR_14 = VAR_21;
    }

    VAR_13 -= VAR_14;



    if (!(VAR_15 & (VAR_6 | VAR_0)))
    {
        while (--VAR_13 >= 0)
        {
            VAR_9 = FUNC_1 (VAR_9, VAR_10, ' ');
        }
    }
    if (VAR_17)
    {
        VAR_9 = FUNC_1 (VAR_9, VAR_10, VAR_17);
    }
    if (VAR_19)
    {
        VAR_9 = FUNC_1 (VAR_9, VAR_10, '0');
        if (VAR_12 == 16)
        {
            VAR_9 = FUNC_1 (
                VAR_9, VAR_10, VAR_20 ? 'X' : 'x');
        }
    }
    if (!(VAR_15 & VAR_0))
    {
        while (--VAR_13 >= 0)
        {
            VAR_9 = FUNC_1 (VAR_9, VAR_10, VAR_18);
        }
    }

    while (VAR_21 <= --VAR_14)
    {
        VAR_9 = FUNC_1 (VAR_9, VAR_10, '0');
    }
    while (--VAR_21 >= 0)
    {
        VAR_9 = FUNC_1 (VAR_9, VAR_10,
                    VAR_22[VAR_21]);
    }
    while (--VAR_13 >= 0)
    {
        VAR_9 = FUNC_1 (VAR_9, VAR_10, ' ');
    }

    return (VAR_9);
}

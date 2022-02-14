
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int wHour; int wMinute; int wSecond; int wMilliseconds; } ;
typedef TYPE_1__ SYSTEMTIME ;
typedef scalar_t__* LPTSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (char) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static BOOL FUNC_5 (LPTSTR VAR_5)
{
    SYSTEMTIME VAR_6;
    LPTSTR VAR_7 = VAR_5;

    if (!*VAR_5)
        return VAR_1;

    FUNC_0 (&VAR_6);
    VAR_6.wHour = 0;
    VAR_6.wMinute = 0;
    VAR_6.wSecond = 0;
    VAR_6.wMilliseconds = 0;


    if (FUNC_3(*VAR_7))
    {
        while (FUNC_3(*VAR_7))
        {
            VAR_6.wHour = VAR_6.wHour * 10 + *VAR_7 - FUNC_2('0');
            VAR_7++;
        }
    }
    else
        return VAR_0;


    if (*VAR_7 != VAR_3)
        return VAR_0;
    VAR_7++;


    if (FUNC_3(*VAR_7))
    {
        while (FUNC_3(*VAR_7))
        {
            VAR_6.wMinute = VAR_6.wMinute * 10 + *VAR_7 - FUNC_2('0');
            VAR_7++;
        }
    }
    else
        return VAR_0;


    if (*VAR_7 != VAR_3)
        return VAR_0;
    VAR_7++;


    if (FUNC_3(*VAR_7))
    {
        while (FUNC_3(*VAR_7))
        {
            VAR_6.wSecond = VAR_6.wSecond * 10 + *VAR_7 - FUNC_2('0');
            VAR_7++;
        }
    }
    else
        return VAR_0;


    if (*VAR_7 == VAR_2)
    {
        VAR_7++;


        if (FUNC_3(*VAR_7))
        {
            while (FUNC_3(*VAR_7))
            {

                VAR_7++;
            }

        }
    }


    if (VAR_4 == 0)
    {
        if (FUNC_4(*VAR_5) == FUNC_2('P'))
        {
            VAR_6.wHour += 12;
        }

        if ((FUNC_4(*VAR_5) == FUNC_2('A')) && (VAR_6.wHour == 12))
        {
            VAR_6.wHour = 0;
        }
    }

    if (VAR_6.wHour > 23 || VAR_6.wMinute > 60 || VAR_6.wSecond > 60 || VAR_6.wMilliseconds > 999)
        return VAR_0;

    FUNC_1 (&VAR_6);

    return VAR_1;
}

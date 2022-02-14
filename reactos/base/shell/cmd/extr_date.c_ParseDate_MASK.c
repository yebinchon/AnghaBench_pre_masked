
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int wYear; int wDay; int wMonth; } ;
typedef TYPE_1__ SYSTEMTIME ;
typedef int * LPTSTR ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int **,int*) ;
 int FUNC_2 (int **) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_1 ;
 int** VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static BOOL
FUNC_4 (LPTSTR VAR_4)
{
    SYSTEMTIME VAR_5;
    unsigned char VAR_6;
    LPTSTR VAR_7 = VAR_4;

    if (!*VAR_4)
        return VAR_1;

    FUNC_0 (&VAR_5);

    VAR_5.wYear = 0;
    VAR_5.wDay = 0;
    VAR_5.wMonth = 0;

    switch (VAR_3)
    {
        case 0:
        default:
            if (!FUNC_1 (&VAR_7, &VAR_5.wMonth))
                return VAR_0;
            if (!FUNC_2 (&VAR_7))
                return VAR_0;
            if (!FUNC_1 (&VAR_7, &VAR_5.wDay))
                return VAR_0;
            if (!FUNC_2 (&VAR_7))
                return VAR_0;
            if (!FUNC_1 (&VAR_7, &VAR_5.wYear))
                return VAR_0;
            break;

        case 1:
            if (!FUNC_1 (&VAR_7, &VAR_5.wDay))
                return VAR_0;
            if (!FUNC_2 (&VAR_7))
                return VAR_0;
            if (!FUNC_1 (&VAR_7, &VAR_5.wMonth))
                return VAR_0;
            if (!FUNC_2 (&VAR_7))
                return VAR_0;
            if (!FUNC_1 (&VAR_7, &VAR_5.wYear))
                return VAR_0;
            break;

        case 2:
            if (!FUNC_1 (&VAR_7, &VAR_5.wYear))
                return VAR_0;
            if (!FUNC_2 (&VAR_7))
                return VAR_0;
            if (!FUNC_1 (&VAR_7, &VAR_5.wMonth))
                return VAR_0;
            if (!FUNC_2 (&VAR_7))
                return VAR_0;
            if (!FUNC_1 (&VAR_7, &VAR_5.wDay))
                return VAR_0;
            break;
    }




    if (VAR_5.wYear <= 99)
    {
        if (VAR_5.wYear >= 80)
            VAR_5.wYear = 1900 + VAR_5.wYear;
        else
            VAR_5.wYear = 2000 + VAR_5.wYear;
    }

    VAR_6 = (!(VAR_5.wYear % 4) && (VAR_5.wYear % 100)) || !(VAR_5.wYear % 400);

    if ((VAR_5.wMonth >= 1 && VAR_5.wMonth <= 12) &&
        (VAR_5.wDay >= 1 && VAR_5.wDay <= VAR_2[VAR_6][VAR_5.wMonth]) &&
        (VAR_5.wYear >= 1980 && VAR_5.wYear <= 2099))
    {
        FUNC_3 (&VAR_5);
        return VAR_1;
    }

    return VAR_0;
}

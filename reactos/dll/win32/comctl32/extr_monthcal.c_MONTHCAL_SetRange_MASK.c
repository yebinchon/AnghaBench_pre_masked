
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rangeValid; void* minDate; void* maxDate; int todaysDate; } ;
typedef void* SYSTEMTIME ;
typedef int SHORT ;
typedef TYPE_1__ MONTHCAL_INFO ;
typedef int LRESULT ;
typedef int FILETIME ;


 scalar_t__ FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,void**) ;
 int FUNC_2 (void**) ;
 int FUNC_3 (void**) ;
 int FUNC_4 (void**,int *) ;
 int FUNC_5 (char*,int,void**) ;
 int VAR_3 ;
 void* VAR_4 ;

__attribute__((used)) static LRESULT
FUNC_6(MONTHCAL_INFO *VAR_5, SHORT VAR_6, SYSTEMTIME *VAR_7)
{
    FILETIME VAR_8, VAR_9;

    FUNC_5("%x %p\n", VAR_6, VAR_7);

    if ((VAR_6 & VAR_2 && !FUNC_2(&VAR_7[0])) ||
        (VAR_6 & VAR_1 && !FUNC_2(&VAR_7[1])))
        return VAR_0;

    VAR_5->rangeValid = 0;
    VAR_5->minDate = VAR_5->maxDate = VAR_4;

    if (VAR_6 & VAR_2)
    {
        if (!FUNC_3(&VAR_7[0]))
            FUNC_1(&VAR_5->todaysDate, &VAR_7[0]);

        VAR_5->minDate = VAR_7[0];
        VAR_5->rangeValid |= VAR_2;
    }
    if (VAR_6 & VAR_1)
    {
        if (!FUNC_3(&VAR_7[1]))
            FUNC_1(&VAR_5->todaysDate, &VAR_7[1]);

        VAR_5->maxDate = VAR_7[1];
        VAR_5->rangeValid |= VAR_1;
    }


    if ((VAR_5->rangeValid & (VAR_2 | VAR_1)) != (VAR_2 | VAR_1))
        return VAR_3;

    FUNC_4(&VAR_5->maxDate, &VAR_9);
    FUNC_4(&VAR_5->minDate, &VAR_8);

    if (FUNC_0(&VAR_8, &VAR_9) >= 0)
    {
        if ((VAR_6 & (VAR_2 | VAR_1)) == (VAR_2 | VAR_1))
        {

            SYSTEMTIME VAR_10 = VAR_5->minDate;
            VAR_5->minDate = VAR_5->maxDate;
            VAR_5->maxDate = VAR_10;
        }
        else
        {

            if (VAR_6 & VAR_2) VAR_5->maxDate = VAR_4;
            if (VAR_6 & VAR_1) VAR_5->minDate = VAR_4;
            VAR_5->rangeValid &= VAR_6 & VAR_2 ? ~VAR_1 : ~VAR_2;
        }
    }

    return VAR_3;
}

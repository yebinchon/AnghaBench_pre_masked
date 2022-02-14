
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int WORD ;
struct TYPE_4__ {int wMonth; scalar_t__ wYear; int wDay; int wDayOfWeek; int wHour; int wMinute; int wSecond; } ;
typedef TYPE_1__ SYSTEMTIME ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int** VAR_0 ;

__attribute__((used)) static int
FUNC_1(const SYSTEMTIME *VAR_1, const SYSTEMTIME *VAR_2)
{
    int VAR_3, VAR_4;

    if (VAR_1->wMonth < VAR_2->wMonth)
        return -1;

    if (VAR_1->wMonth > VAR_2->wMonth)
        return 1;




    if (VAR_2->wYear == 0)
    {
        WORD VAR_5;


        int VAR_6 = VAR_2->wDay;

        VAR_5 = ( 6 + VAR_2->wDayOfWeek - VAR_1->wDayOfWeek + VAR_1->wDay
               ) % 7 + 1;
        VAR_3 = VAR_5 + 7 * (VAR_6 - 1);

        if(VAR_3 > VAR_0[VAR_1->wMonth==2 && FUNC_0(VAR_1->wYear)]
                [VAR_1->wMonth - 1])
            VAR_3 -= 7;
    }
    else
    {
       VAR_3 = VAR_2->wDay;
    }


    VAR_3 = ((VAR_3 * 24 + VAR_2->wHour) * 60 +
            VAR_2->wMinute ) * 60;
    VAR_4 = ((VAR_1->wDay * 24 + VAR_1->wHour) * 60 +
            VAR_1->wMinute ) * 60 + VAR_1->wSecond;

    return VAR_4 < VAR_3 ? -1 :
           VAR_4 > VAR_3 ? 1 :
           0;
}

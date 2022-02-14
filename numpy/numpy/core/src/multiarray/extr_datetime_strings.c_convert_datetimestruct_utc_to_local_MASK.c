
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct tm {int tm_min; int tm_hour; int tm_year; scalar_t__ tm_mon; int tm_mday; } ;
typedef int npy_int64 ;
struct TYPE_5__ {int year; int hour; int min; scalar_t__ month; int day; } ;
typedef TYPE_1__ npy_datetimestruct ;
typedef int NPY_TIME_T ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int*,struct tm*) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(npy_datetimestruct *VAR_0,
                const npy_datetimestruct *VAR_1, int *VAR_2)
{
    NPY_TIME_T VAR_3 = 0, VAR_4;
    struct tm VAR_5;
    npy_int64 VAR_6 = 0;


    *VAR_0 = *VAR_1;
    if (sizeof(NPY_TIME_T) == 4 && VAR_0->year >= 2038) {
        if (FUNC_2(VAR_0->year)) {

            VAR_6 = VAR_0->year - 2036;
            VAR_0->year -= VAR_6;
        }
        else {

            VAR_6 = VAR_0->year - 2037;
            VAR_0->year -= VAR_6;
        }
    }







    VAR_3 = (NPY_TIME_T)FUNC_0(VAR_0) * 24 * 60 * 60;
    VAR_3 += VAR_1->hour * 60 * 60;
    VAR_3 += VAR_1->min * 60;


    if (FUNC_1(&VAR_3, &VAR_5) < 0) {

        return -1;
    }


    VAR_0->min = VAR_5.tm_min;
    VAR_0->hour = VAR_5.tm_hour;
    VAR_0->day = VAR_5.tm_mday;
    VAR_0->month = VAR_5.tm_mon + 1;
    VAR_0->year = VAR_5.tm_year + 1900;


    VAR_3 /= 60;
    VAR_4 = (NPY_TIME_T)FUNC_0(VAR_0) * 24 * 60;
    VAR_4 += VAR_0->hour * 60;
    VAR_4 += VAR_0->min;

    *VAR_2 = VAR_4 - VAR_3;


    VAR_0->year += VAR_6;

    return 0;
}

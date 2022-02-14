
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_hour; int tm_min; int tm_year; int tm_mon; int tm_mday; scalar_t__ tm_sec; } ;


 long VAR_0 ;
 long FUNC_0 (int,int,int) ;

__attribute__((used)) static int FUNC_1(const struct tm *VAR_1, int VAR_2, long VAR_3,
                      long *VAR_4, int *VAR_5)
{
    int VAR_6, VAR_7;
    long VAR_8;
    int VAR_9, VAR_10, VAR_11;

    VAR_7 = VAR_3 / VAR_0;

    VAR_6 = VAR_3 - (VAR_7 * VAR_0);
    VAR_7 += VAR_2;

    VAR_6 += VAR_1->tm_hour * 3600 + VAR_1->tm_min * 60 + VAR_1->tm_sec;

    if (VAR_6 >= VAR_0) {
        VAR_7++;
        VAR_6 -= VAR_0;
    } else if (VAR_6 < 0) {
        VAR_7--;
        VAR_6 += VAR_0;
    }





    VAR_9 = VAR_1->tm_year + 1900;
    VAR_10 = VAR_1->tm_mon + 1;
    VAR_11 = VAR_1->tm_mday;

    VAR_8 = FUNC_0(VAR_9, VAR_10, VAR_11);


    VAR_8 += VAR_7;

    if (VAR_8 < 0)
        return 0;

    *VAR_4 = VAR_8;
    *VAR_5 = VAR_6;
    return 1;
}

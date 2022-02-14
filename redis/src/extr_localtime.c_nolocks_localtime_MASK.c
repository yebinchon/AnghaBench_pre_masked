
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_isdst; int tm_hour; int tm_min; int tm_sec; int tm_wday; int tm_year; int tm_yday; size_t tm_mon; int tm_mday; } ;


 int FUNC_0 (int) ;

void FUNC_1(struct tm *VAR_0, time_t VAR_1, time_t VAR_2, int VAR_3) {
    const time_t VAR_4 = 60;
    const time_t VAR_5 = 3600;
    const time_t VAR_6 = 3600*24;

    VAR_1 -= VAR_2;
    VAR_1 += 3600*VAR_3;
    time_t VAR_7 = VAR_1 / VAR_6;
    time_t VAR_8 = VAR_1 % VAR_6;

    VAR_0->tm_isdst = VAR_3;
    VAR_0->tm_hour = VAR_8 / VAR_5;
    VAR_0->tm_min = (VAR_8 % VAR_5) / VAR_4;
    VAR_0->tm_sec = (VAR_8 % VAR_5) % VAR_4;




    VAR_0->tm_wday = (VAR_7+4)%7;


    VAR_0->tm_year = 1970;
    while(1) {

        time_t VAR_9 = 365 + FUNC_0(VAR_0->tm_year);
        if (VAR_9 > VAR_7) break;
        VAR_7 -= VAR_9;
        VAR_0->tm_year++;
    }
    VAR_0->tm_yday = VAR_7;




    int VAR_10[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    VAR_10[1] += FUNC_0(VAR_0->tm_year);

    VAR_0->tm_mon = 0;
    while(VAR_7 >= VAR_10[VAR_0->tm_mon]) {
        VAR_7 -= VAR_10[VAR_0->tm_mon];
        VAR_0->tm_mon++;
    }

    VAR_0->tm_mday = VAR_7+1;
    VAR_0->tm_year -= 1900;
}

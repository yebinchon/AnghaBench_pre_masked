
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct tm {int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; scalar_t__ tm_yday; scalar_t__ tm_wday; scalar_t__ tm_isdst; int member_0; } ;


 int FUNC_0 (struct tm*) ;

time_t FUNC_1(int VAR_0, int VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
    struct tm VAR_6 = { 0 };

    VAR_6.tm_year = VAR_0;
    VAR_6.tm_mon = VAR_1;
    VAR_6.tm_mday = VAR_2;
    VAR_6.tm_hour = VAR_3;
    VAR_6.tm_min = VAR_4;
    VAR_6.tm_sec = VAR_5;
    VAR_6.tm_isdst = 0;
    VAR_6.tm_wday = 0;
    VAR_6.tm_yday = 0;


    return FUNC_0(&VAR_6);
}

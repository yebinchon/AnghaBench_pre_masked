
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int time_t ;
typedef int time64_t ;
struct tm {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_year; int tm_isdst; } ;


 struct tm* FUNC_0 (int*) ;
 int FUNC_1 (struct tm*) ;

time64_t FUNC_2(uint32_t VAR_0)
{
    struct tm VAR_1;
    time_t VAR_2, VAR_3;

    VAR_1.tm_sec = (VAR_0 & 0x1F) * 2;
    VAR_1.tm_min = (VAR_0 >> 5) & 0x3F;
    VAR_1.tm_hour = (VAR_0 >> 11) & 0x1F;
    VAR_1.tm_mday = (VAR_0 >> 16) & 0x1F;
    VAR_1.tm_mon = ((VAR_0 >> 21) & 0x0F) - 1;
    VAR_1.tm_year = ((VAR_0 >> 25) & 0x7F) + 80;
    VAR_1.tm_isdst = -1;

    VAR_2 = FUNC_1(&VAR_1);
    VAR_3 = FUNC_1(FUNC_0(&VAR_2));

    return (time64_t)(2 * VAR_2 - VAR_3 + 11644473600) * 10000000;
}

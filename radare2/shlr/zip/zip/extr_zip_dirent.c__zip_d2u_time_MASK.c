
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zip_uint16_t ;
typedef int tm ;
typedef int time_t ;
struct tm {int tm_isdst; int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;


 int FUNC_0 (struct tm*,int ,int) ;
 int FUNC_1 (struct tm*) ;

__attribute__((used)) static time_t
FUNC_2(zip_uint16_t VAR_0, zip_uint16_t VAR_1)
{
    struct tm VAR_2;

    FUNC_0(&VAR_2, 0, sizeof(VAR_2));


    VAR_2.tm_isdst = -1;

    VAR_2.tm_year = ((VAR_1>>9)&127) + 1980 - 1900;
    VAR_2.tm_mon = ((VAR_1>>5)&15) - 1;
    VAR_2.tm_mday = VAR_1&31;

    VAR_2.tm_hour = (VAR_0>>11)&31;
    VAR_2.tm_min = (VAR_0>>5)&63;
    VAR_2.tm_sec = (VAR_0<<1)&62;

    return FUNC_1(&VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ zip_uint16_t ;
typedef int time_t ;
struct tm {int tm_year; int tm_mon; int tm_hour; int tm_min; int tm_sec; scalar_t__ tm_mday; } ;


 struct tm* FUNC_0 (int *) ;

void
FUNC_1(time_t VAR_0, zip_uint16_t *VAR_1, zip_uint16_t *VAR_2)
{
    struct tm *VAR_3;

    VAR_3 = FUNC_0(&VAR_0);
    *VAR_2 = (zip_uint16_t)(((VAR_3->tm_year+1900-1980)<<9) + ((VAR_3->tm_mon+1)<<5) + VAR_3->tm_mday);
    *VAR_1 = (zip_uint16_t)(((VAR_3->tm_hour)<<11) + ((VAR_3->tm_min)<<5) + ((VAR_3->tm_sec)>>1));

    return;
}

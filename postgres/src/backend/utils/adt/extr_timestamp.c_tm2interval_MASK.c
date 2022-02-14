
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pg_tm {double tm_mon; int tm_hour; int tm_min; int tm_sec; int tm_mday; scalar_t__ tm_year; } ;
typedef scalar_t__ fsec_t ;
struct TYPE_3__ {double month; scalar_t__ time; int day; } ;
typedef TYPE_1__ Interval ;


 int FUNC_0 (int) ;
 double VAR_0 ;
 double VAR_1 ;
 double VAR_2 ;
 int VAR_3 ;

int
FUNC_1(struct pg_tm *VAR_4, fsec_t VAR_5, Interval *VAR_6)
{
 double VAR_7 = (double) VAR_4->tm_year * VAR_2 + VAR_4->tm_mon;

 if (VAR_7 > VAR_0 || VAR_7 < VAR_1)
  return -1;
 VAR_6->month = VAR_7;
 VAR_6->day = VAR_4->tm_mday;
 VAR_6->time = (((((VAR_4->tm_hour * FUNC_0(60)) +
      VAR_4->tm_min) * FUNC_0(60)) +
       VAR_4->tm_sec) * VAR_3) + VAR_5;

 return 0;
}

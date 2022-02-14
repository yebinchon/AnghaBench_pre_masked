
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tm {double tm_year; scalar_t__ tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;
struct TYPE_3__ {scalar_t__ month; scalar_t__ time; } ;
typedef TYPE_1__ interval ;
typedef scalar_t__ fsec_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 double VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_1(struct tm *VAR_4, fsec_t VAR_5, interval * VAR_6)
{
 if ((double) VAR_4->tm_year * VAR_2 + VAR_4->tm_mon > VAR_0 ||
  (double) VAR_4->tm_year * VAR_2 + VAR_4->tm_mon < VAR_1)
  return -1;
 VAR_6->month = VAR_4->tm_year * VAR_2 + VAR_4->tm_mon;
 VAR_6->time = (((((((VAR_4->tm_mday * FUNC_0(24)) +
        VAR_4->tm_hour) * FUNC_0(60)) +
      VAR_4->tm_min) * FUNC_0(60)) +
       VAR_4->tm_sec) * VAR_3) + VAR_5;

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {scalar_t__ tm_sec; scalar_t__ tm_min; scalar_t__ tm_hour; scalar_t__ tm_mday; scalar_t__ tm_mon; scalar_t__ tm_year; scalar_t__ tm_wday; scalar_t__ tm_yday; scalar_t__ tm_isdst; } ;
struct pg_tm {scalar_t__ tm_sec; scalar_t__ tm_min; scalar_t__ tm_hour; scalar_t__ tm_mday; scalar_t__ tm_mon; scalar_t__ tm_year; scalar_t__ tm_wday; scalar_t__ tm_yday; scalar_t__ tm_isdst; } ;



__attribute__((used)) static bool
FUNC_0(struct tm *VAR_0, struct pg_tm *VAR_1)
{
 if (VAR_0->tm_sec != VAR_1->tm_sec ||
  VAR_0->tm_min != VAR_1->tm_min ||
  VAR_0->tm_hour != VAR_1->tm_hour ||
  VAR_0->tm_mday != VAR_1->tm_mday ||
  VAR_0->tm_mon != VAR_1->tm_mon ||
  VAR_0->tm_year != VAR_1->tm_year ||
  VAR_0->tm_wday != VAR_1->tm_wday ||
  VAR_0->tm_yday != VAR_1->tm_yday ||
  VAR_0->tm_isdst != VAR_1->tm_isdst)
  return 0;
 return 1;
}

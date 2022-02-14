
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct tm {int tm_sec; int tm_min; int tm_hour; int tm_mday; scalar_t__ tm_mon; int tm_year; } ;
struct TYPE_4__ {int dt_gmtoff; int dt_second; int dt_minute; int dt_hour; int dt_day; scalar_t__ dt_month; int dt_year; } ;
typedef TYPE_1__ iso9660_dtime_t ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

void
FUNC_2 (const struct tm *VAR_0,
                                 int VAR_1,
                                         iso9660_dtime_t *VAR_2)
{
  FUNC_1 (VAR_2, 0, 7);

  if (!VAR_0) return;

  VAR_2->dt_year = VAR_0->tm_year;
  VAR_2->dt_month = VAR_0->tm_mon + 1;
  VAR_2->dt_day = VAR_0->tm_mday;
  VAR_2->dt_hour = VAR_0->tm_hour;
  VAR_2->dt_minute = VAR_0->tm_min;
  VAR_2->dt_second = VAR_0->tm_sec;



  VAR_2->dt_gmtoff = VAR_1 / 15;

  if (VAR_2->dt_gmtoff < -48 ) {

    FUNC_0 ("Converted ISO 9660 timezone %d is less than -48. Adjusted",
               VAR_2->dt_gmtoff);
    VAR_2->dt_gmtoff = -48;
  } else if (VAR_2->dt_gmtoff > 52) {
    FUNC_0 ("Converted ISO 9660 timezone %d is over 52. Adjusted",
               VAR_2->dt_gmtoff);
    VAR_2->dt_gmtoff = 52;
  }
}

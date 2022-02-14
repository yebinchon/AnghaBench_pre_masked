
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int time_t ;
struct tm {scalar_t__ tm_year; scalar_t__ tm_mon; scalar_t__ tm_mday; scalar_t__ tm_hour; scalar_t__ tm_min; scalar_t__ tm_sec; int tm_isdst; scalar_t__ tm_zone; } ;
struct TYPE_3__ {scalar_t__ dt_year; scalar_t__ dt_month; scalar_t__ dt_day; scalar_t__ dt_hour; scalar_t__ dt_minute; scalar_t__ dt_second; int dt_gmtoff; } ;
typedef TYPE_1__ iso9660_dtime_t ;


 int FUNC_0 (int *,struct tm*) ;
 int FUNC_1 (int *,struct tm*) ;
 int FUNC_2 (struct tm*,struct tm*,int) ;
 int FUNC_3 (struct tm*,int ,int) ;
 int FUNC_4 (struct tm*) ;

bool
FUNC_5 (const iso9660_dtime_t *VAR_0, bool VAR_1,
                           struct tm *VAR_2)
{
  if (!VAR_0) return 0;
  if ( 0 == VAR_0->dt_year && 0 == VAR_0->dt_month &&
       0 == VAR_0->dt_day && 0 == VAR_0->dt_hour &&
       0 == VAR_0->dt_minute && 0 == VAR_0->dt_second ) {
    time_t VAR_3 = 0;
    struct tm VAR_4;
    FUNC_1(&VAR_3, &VAR_4);

    FUNC_2(VAR_2, &VAR_4, sizeof(struct tm));
    return 1;
  }

  FUNC_3(VAR_2, 0, sizeof(struct tm));

  VAR_2->tm_year = VAR_0->dt_year;
  VAR_2->tm_mon = VAR_0->dt_month - 1;
  VAR_2->tm_mday = VAR_0->dt_day;
  VAR_2->tm_hour = VAR_0->dt_hour;
  VAR_2->tm_min = VAR_0->dt_minute;
  VAR_2->tm_sec = VAR_0->dt_second - VAR_0->dt_gmtoff * (15 * 60);
  VAR_2->tm_isdst = -1;
  {
    time_t VAR_5 = 0;
    struct tm VAR_6;

    VAR_5 = FUNC_4(VAR_2);

    if (VAR_1)
      FUNC_1(&VAR_5, &VAR_6);
    else
      FUNC_0(&VAR_5, &VAR_6);

    FUNC_2(VAR_2, &VAR_6, sizeof(struct tm));
  }


  return 1;
}

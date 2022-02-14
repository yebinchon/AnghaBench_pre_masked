
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tm {int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;
struct TYPE_3__ {int lt_gmtoff; } ;
typedef TYPE_1__ iso9660_ltime_t ;
typedef int iso712_t ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (char*,int,char*,int,int,int,int,int,int ,int ) ;

void
FUNC_3(const struct tm *VAR_0,
                                int VAR_1,
                                        iso9660_ltime_t *VAR_2)
{
  char *VAR_3 = (char *) VAR_2;

  FUNC_1 (VAR_3, (int) '0', 16);
  VAR_2->lt_gmtoff = (iso712_t) 0;

  if (!VAR_0) return;

  FUNC_2(VAR_3, 17,
           "%4.4d%2.2d%2.2d" "%2.2d%2.2d%2.2d" "%2.2d",
           VAR_0->tm_year + 1900, VAR_0->tm_mon + 1, VAR_0->tm_mday,
           VAR_0->tm_hour, VAR_0->tm_min, VAR_0->tm_sec,
           0 );


  VAR_2->lt_gmtoff -= (VAR_1 / 15);
  if (VAR_2->lt_gmtoff < -48 ) {

    FUNC_0 ("Converted ISO 9660 timezone %d is less than -48. Adjusted",
               (int) VAR_2->lt_gmtoff);
    VAR_2->lt_gmtoff = -48;
  } else if (VAR_2->lt_gmtoff > 52) {
    FUNC_0 ("Converted ISO 9660 timezone %d is over 52. Adjusted",
               (int) VAR_2->lt_gmtoff);
    VAR_2->lt_gmtoff = 52;
  }
}

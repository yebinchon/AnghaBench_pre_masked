
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tm {int tm_gmtoff; scalar_t__ tm_isdst; } ;
typedef int iso9660_ltime_t ;


 int FUNC_0 (struct tm const*,int,int *) ;

void
FUNC_1(const struct tm *VAR_0, iso9660_ltime_t *VAR_1)
{
  int VAR_2 = 0;
  if (VAR_0) {




    VAR_2 = (VAR_0->tm_isdst > 0) ? -60 : 0;

  }
  FUNC_0 (VAR_0, VAR_2, VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int first_last_day_of; scalar_t__ invert; int days; int s; int i; int h; int d; int m; int y; } ;
typedef TYPE_1__ timelib_rel_time ;


 int FUNC_0 (char*,...) ;

void FUNC_1(timelib_rel_time *VAR_0)
{
 FUNC_0("%3lldY %3lldM %3lldD / %3lldH %3lldM %3lldS (days: %lld)%s",
  VAR_0->y, VAR_0->m, VAR_0->d, VAR_0->h, VAR_0->i, VAR_0->s, VAR_0->days, VAR_0->invert ? " inverted" : "");
 if (VAR_0->first_last_day_of != 0) {
  switch (VAR_0->first_last_day_of) {
   case 1:
    FUNC_0(" / first day of");
    break;
   case 2:
    FUNC_0(" / last day of");
    break;
  }
 }
 FUNC_0("\n");
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int type; int amount; } ;
struct TYPE_8__ {int first_last_day_of; int weekday; int weekday_behavior; TYPE_2__ special; scalar_t__ have_special_relative; scalar_t__ have_weekday_relative; scalar_t__ us; int s; int i; int h; int d; int m; int y; } ;
struct TYPE_9__ {int zone_type; scalar_t__ y; scalar_t__ us; int z; int dst; char* tz_abbr; TYPE_3__ relative; scalar_t__ have_relative; TYPE_1__* tz_info; scalar_t__ is_localtime; int s; int i; int h; int d; int m; int sse; } ;
typedef TYPE_4__ timelib_time ;
struct TYPE_6__ {char* name; } ;


 int FUNC_0 (scalar_t__) ;






 int FUNC_1 (char*,...) ;

void FUNC_2(timelib_time *VAR_0, int VAR_1)
{
 if ((VAR_1 & 2) == 2) {
  FUNC_1("TYPE: %d ", VAR_0->zone_type);
 }
 FUNC_1("TS: %lld | %s%04lld-%02lld-%02lld %02lld:%02lld:%02lld",
  VAR_0->sse, VAR_0->y < 0 ? "-" : "", FUNC_0(VAR_0->y), VAR_0->m, VAR_0->d, VAR_0->h, VAR_0->i, VAR_0->s);
 if (VAR_0->us > 0) {
  FUNC_1(" 0.%06lld", VAR_0->us);
 }

 if (VAR_0->is_localtime) {
  switch (VAR_0->zone_type) {
   case 128:
    FUNC_1(" GMT %05d%s", VAR_0->z, VAR_0->dst == 1 ? " (DST)" : "");
    break;
   case 129:

    if (VAR_0->tz_abbr) {
     FUNC_1(" %s", VAR_0->tz_abbr);
    }

    if (VAR_0->tz_info) {
     FUNC_1(" %s", VAR_0->tz_info->name);
    }
    break;
   case 130:
    FUNC_1(" %s", VAR_0->tz_abbr);
    FUNC_1(" %05d%s", VAR_0->z, VAR_0->dst == 1 ? " (DST)" : "");
    break;
  }
 }

 if ((VAR_1 & 1) == 1) {
  if (VAR_0->have_relative) {
   FUNC_1("%3lldY %3lldM %3lldD / %3lldH %3lldM %3lldS",
    VAR_0->relative.y, VAR_0->relative.m, VAR_0->relative.d, VAR_0->relative.h, VAR_0->relative.i, VAR_0->relative.s);
   if (VAR_0->relative.us) {
    FUNC_1(" 0.%06lld", VAR_0->relative.us);
   }
   if (VAR_0->relative.first_last_day_of != 0) {
    switch (VAR_0->relative.first_last_day_of) {
     case 1:
      FUNC_1(" / first day of");
      break;
     case 2:
      FUNC_1(" / last day of");
      break;
    }
   }
   if (VAR_0->relative.have_weekday_relative) {
    FUNC_1(" / %d.%d", VAR_0->relative.weekday, VAR_0->relative.weekday_behavior);
   }
   if (VAR_0->relative.have_special_relative) {
    switch (VAR_0->relative.special.type) {
     case 131:
      FUNC_1(" / %lld weekday", VAR_0->relative.special.amount);
      break;
     case 133:
      FUNC_1(" / x y of z month");
      break;
     case 132:
      FUNC_1(" / last y of z month");
      break;
    }
   }
  }
 }
 FUNC_1("\n");
}

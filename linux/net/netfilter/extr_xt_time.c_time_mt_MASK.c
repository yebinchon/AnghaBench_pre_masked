
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xtm {int weekday; int monthday; } ;
struct xt_time_info {int flags; scalar_t__ date_start; scalar_t__ date_stop; unsigned int daytime_start; unsigned int daytime_stop; int weekdays_match; int monthdays_match; } ;
struct xt_action_param {struct xt_time_info* matchinfo; } ;
struct sk_buff {int dummy; } ;
typedef scalar_t__ s64 ;
struct TYPE_2__ {int tz_minuteswest; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 () ;
 unsigned int FUNC_1 (struct xtm*,scalar_t__) ;
 int FUNC_2 (struct xtm*,scalar_t__) ;
 int FUNC_3 (struct xtm*,scalar_t__) ;
 TYPE_1__ VAR_4 ;

__attribute__((used)) static bool
FUNC_4(const struct sk_buff *VAR_5, struct xt_action_param *VAR_6)
{
 const struct xt_time_info *VAR_7 = VAR_6->matchinfo;
 unsigned int VAR_8;
 struct xtm VAR_9;
 s64 VAR_10;
 VAR_10 = FUNC_0();

 if (VAR_7->flags & VAR_3)

  VAR_10 -= 60 * VAR_4.tz_minuteswest;
 if (VAR_10 < VAR_7->date_start || VAR_10 > VAR_7->date_stop)
  return 0;

 VAR_8 = FUNC_1(&VAR_9, VAR_10);

 if (VAR_7->daytime_start < VAR_7->daytime_stop) {
  if (VAR_8 < VAR_7->daytime_start ||
      VAR_8 > VAR_7->daytime_stop)
   return 0;
 } else {
  if (VAR_8 < VAR_7->daytime_start &&
      VAR_8 > VAR_7->daytime_stop)
   return 0;
  if ((VAR_7->flags & VAR_2) &&
       VAR_8 <= VAR_7->daytime_stop)
   VAR_10 -= VAR_0;
 }

 FUNC_2(&VAR_9, VAR_10);

 if (!(VAR_7->weekdays_match & (1 << VAR_9.weekday)))
  return 0;


 if (VAR_7->monthdays_match != VAR_1) {
  FUNC_3(&VAR_9, VAR_10);
  if (!(VAR_7->monthdays_match & (1 << VAR_9.monthday)))
   return 0;
 }

 return 1;
}

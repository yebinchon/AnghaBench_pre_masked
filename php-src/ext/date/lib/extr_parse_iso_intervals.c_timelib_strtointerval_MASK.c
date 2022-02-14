
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {void* zone_type; scalar_t__ is_localtime; scalar_t__ dst; scalar_t__ z; scalar_t__ us; void* s; void* i; void* h; void* m; void* d; void* y; } ;
typedef TYPE_1__ timelib_time ;
struct TYPE_19__ {void* days; scalar_t__ first_last_day_of; scalar_t__ weekday_behavior; scalar_t__ weekday; scalar_t__ s; scalar_t__ i; scalar_t__ h; scalar_t__ m; scalar_t__ d; scalar_t__ y; } ;
typedef TYPE_2__ timelib_rel_time ;
struct TYPE_20__ {int * error_messages; scalar_t__ error_count; int * warning_messages; scalar_t__ warning_count; } ;
typedef TYPE_3__ timelib_error_container ;
typedef int in ;
struct TYPE_21__ {int recurrences; scalar_t__ have_recurrences; TYPE_2__* period; scalar_t__ have_period; TYPE_1__* end; scalar_t__ have_end_date; TYPE_1__* begin; scalar_t__ have_begin_date; TYPE_3__* errors; struct TYPE_21__* str; struct TYPE_21__* cur; struct TYPE_21__* lim; } ;
typedef TYPE_4__ Scanner ;


 int VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_4__*,char*) ;
 scalar_t__ FUNC_1 (char) ;
 int FUNC_2 (TYPE_4__*,char*,int) ;
 int FUNC_3 (TYPE_4__*,int ,int) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (TYPE_4__*) ;
 void* FUNC_8 (int) ;
 TYPE_2__* FUNC_9 () ;
 int FUNC_10 (TYPE_2__*) ;
 void* FUNC_11 () ;
 int FUNC_12 (TYPE_1__*) ;

void FUNC_13(char *VAR_4, size_t VAR_5,
                           timelib_time **VAR_6, timelib_time **VAR_7,
         timelib_rel_time **VAR_8, int *VAR_9,
         timelib_error_container **VAR_10)
{
 Scanner VAR_11;
 int VAR_12;
 char *VAR_13 = VAR_4 + VAR_5 - 1;

 FUNC_3(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.errors = FUNC_8(sizeof(timelib_error_container));
 VAR_11.errors->warning_count = 0;
 VAR_11.errors->warning_messages = ((void*)0);
 VAR_11.errors->error_count = 0;
 VAR_11.errors->error_messages = ((void*)0);

 if (VAR_5 > 0) {
  while (FUNC_1(*VAR_4) && VAR_4 < VAR_13) {
   VAR_4++;
  }
  while (FUNC_1(*VAR_13) && VAR_13 > VAR_4) {
   VAR_13--;
  }
 }
 if (VAR_13 - VAR_4 < 0) {
  FUNC_0(&VAR_11, "Empty string");
  if (VAR_10) {
   *VAR_10 = VAR_11.errors;
  } else {
   FUNC_6(VAR_11.errors);
  }
  return;
 }
 VAR_13++;


 VAR_11.str = FUNC_8((VAR_13 - VAR_4) + VAR_3);
 FUNC_3(VAR_11.str, 0, (VAR_13 - VAR_4) + VAR_3);
 FUNC_2(VAR_11.str, VAR_4, (VAR_13 - VAR_4));
 VAR_11.lim = VAR_11.str + (VAR_13 - VAR_4) + VAR_3;
 VAR_11.cur = VAR_11.str;


 VAR_11.begin = FUNC_11();
 VAR_11.begin->y = VAR_1;
 VAR_11.begin->d = VAR_1;
 VAR_11.begin->m = VAR_1;
 VAR_11.begin->h = VAR_1;
 VAR_11.begin->i = VAR_1;
 VAR_11.begin->s = VAR_1;
 VAR_11.begin->us = 0;
 VAR_11.begin->z = 0;
 VAR_11.begin->dst = 0;
 VAR_11.begin->is_localtime = 0;
 VAR_11.begin->zone_type = VAR_2;

 VAR_11.end = FUNC_11();
 VAR_11.end->y = VAR_1;
 VAR_11.end->d = VAR_1;
 VAR_11.end->m = VAR_1;
 VAR_11.end->h = VAR_1;
 VAR_11.end->i = VAR_1;
 VAR_11.end->s = VAR_1;
 VAR_11.end->us = 0;
 VAR_11.end->z = 0;
 VAR_11.end->dst = 0;
 VAR_11.end->is_localtime = 0;
 VAR_11.end->zone_type = VAR_2;

 VAR_11.period = FUNC_9();
 VAR_11.period->y = 0;
 VAR_11.period->d = 0;
 VAR_11.period->m = 0;
 VAR_11.period->h = 0;
 VAR_11.period->i = 0;
 VAR_11.period->s = 0;
 VAR_11.period->weekday = 0;
 VAR_11.period->weekday_behavior = 0;
 VAR_11.period->first_last_day_of = 0;
 VAR_11.period->days = VAR_1;

 VAR_11.recurrences = 1;

 do {
  VAR_12 = FUNC_5(&VAR_11);



 } while(VAR_12 != VAR_0);

 FUNC_7(VAR_11.str);
 if (VAR_10) {
  *VAR_10 = VAR_11.errors;
 } else {
  FUNC_6(VAR_11.errors);
 }
 if (VAR_11.have_begin_date) {
  *VAR_6 = VAR_11.begin;
 } else {
  FUNC_12(VAR_11.begin);
 }
 if (VAR_11.have_end_date) {
  *VAR_7 = VAR_11.end;
 } else {
  FUNC_12(VAR_11.end);
 }
 if (VAR_11.have_period) {
  *VAR_8 = VAR_11.period;
 } else {
  FUNC_10(VAR_11.period);
 }
 if (VAR_11.have_recurrences) {
  *VAR_9 = VAR_11.recurrences;
 }
}

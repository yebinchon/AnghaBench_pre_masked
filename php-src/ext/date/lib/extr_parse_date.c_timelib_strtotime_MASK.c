
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int timelib_tzdb ;
typedef int timelib_tz_get_wrapper ;
struct TYPE_14__ {void* days; } ;
struct TYPE_15__ {void* d; void* m; void* y; scalar_t__ have_date; void* s; void* i; void* h; scalar_t__ have_time; TYPE_1__ relative; scalar_t__ zone_type; scalar_t__ is_localtime; void* dst; void* z; void* us; } ;
typedef TYPE_2__ timelib_time ;
struct TYPE_16__ {int * error_messages; scalar_t__ error_count; int * warning_messages; scalar_t__ warning_count; } ;
typedef TYPE_3__ timelib_error_container ;
typedef int in ;
struct TYPE_17__ {TYPE_2__* time; TYPE_3__* errors; struct TYPE_17__* str; int const* tzdb; struct TYPE_17__* cur; struct TYPE_17__* lim; } ;
typedef TYPE_4__ Scanner ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_4__*,int ,char*) ;
 int FUNC_1 (TYPE_4__*,int ,char*) ;
 scalar_t__ FUNC_2 (char) ;
 int FUNC_3 (TYPE_4__*,char*,int) ;
 int FUNC_4 (TYPE_4__*,int ,int) ;
 int FUNC_5 (char*,int) ;
 int FUNC_6 (TYPE_4__*,int ) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_4__*) ;
 void* FUNC_9 (int) ;
 void* FUNC_10 () ;
 int FUNC_11 (void*,void*,void*) ;
 int FUNC_12 (void*,void*,void*) ;

timelib_time* FUNC_13(char *VAR_6, size_t VAR_7, timelib_error_container **VAR_8, const timelib_tzdb *VAR_9, timelib_tz_get_wrapper VAR_10)
{
 Scanner VAR_11;
 int VAR_12;
 char *VAR_13 = VAR_6 + VAR_7 - 1;

 FUNC_4(&VAR_11, 0, sizeof(VAR_11));
 VAR_11.errors = FUNC_9(sizeof(timelib_error_container));
 VAR_11.errors->warning_count = 0;
 VAR_11.errors->warning_messages = ((void*)0);
 VAR_11.errors->error_count = 0;
 VAR_11.errors->error_messages = ((void*)0);

 if (VAR_7 > 0) {
  while (FUNC_2(*VAR_6) && VAR_6 < VAR_13) {
   VAR_6++;
  }
  while (FUNC_2(*VAR_13) && VAR_13 > VAR_6) {
   VAR_13--;
  }
 }
 if (VAR_13 - VAR_6 < 0) {
  VAR_11.time = FUNC_10();
  FUNC_0(&VAR_11, VAR_1, "Empty string");
  if (VAR_8) {
   *VAR_8 = VAR_11.errors;
  } else {
   FUNC_7(VAR_11.errors);
  }
  VAR_11.time->y = VAR_11.time->d = VAR_11.time->m = VAR_11.time->h = VAR_11.time->i = VAR_11.time->s = VAR_11.time->us = VAR_11.time->dst = VAR_11.time->z = VAR_2;
  VAR_11.time->is_localtime = VAR_11.time->zone_type = 0;
  return VAR_11.time;
 }
 VAR_13++;

 VAR_11.str = FUNC_9((VAR_13 - VAR_6) + VAR_5);
 FUNC_4(VAR_11.str, 0, (VAR_13 - VAR_6) + VAR_5);
 FUNC_3(VAR_11.str, VAR_6, (VAR_13 - VAR_6));
 VAR_11.lim = VAR_11.str + (VAR_13 - VAR_6) + VAR_5;
 VAR_11.cur = VAR_11.str;
 VAR_11.time = FUNC_10();
 VAR_11.time->y = VAR_2;
 VAR_11.time->d = VAR_2;
 VAR_11.time->m = VAR_2;
 VAR_11.time->h = VAR_2;
 VAR_11.time->i = VAR_2;
 VAR_11.time->s = VAR_2;
 VAR_11.time->us = VAR_2;
 VAR_11.time->z = VAR_2;
 VAR_11.time->dst = VAR_2;
 VAR_11.tzdb = VAR_9;
 VAR_11.time->is_localtime = 0;
 VAR_11.time->zone_type = 0;
 VAR_11.time->relative.days = VAR_2;

 do {
  VAR_12 = FUNC_6(&VAR_11, VAR_10);



 } while(VAR_12 != VAR_0);


 if (VAR_11.time->have_time && !FUNC_12( VAR_11.time->h, VAR_11.time->i, VAR_11.time->s)) {
  FUNC_1(&VAR_11, VAR_4, "The parsed time was invalid");
 }

 if (VAR_11.time->have_date && !FUNC_11( VAR_11.time->y, VAR_11.time->m, VAR_11.time->d)) {
  FUNC_1(&VAR_11, VAR_3, "The parsed date was invalid");
 }

 FUNC_8(VAR_11.str);
 if (VAR_8) {
  *VAR_8 = VAR_11.errors;
 } else {
  FUNC_7(VAR_11.errors);
 }
 return VAR_11.time;
}

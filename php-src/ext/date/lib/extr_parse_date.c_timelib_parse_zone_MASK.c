
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int timelib_tzinfo ;
typedef int timelib_tzdb ;
typedef int * (* timelib_tz_get_wrapper ) (char*,int const*,int*) ;
struct TYPE_4__ {int is_localtime; void* zone_type; int * tz_info; scalar_t__ dst; } ;
typedef TYPE_1__ timelib_time ;
typedef int timelib_long ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char**,int*,char**,int*) ;
 int FUNC_3 (char**) ;
 int FUNC_4 (TYPE_1__*,char*) ;

timelib_long FUNC_5(char **VAR_3, int *VAR_4, timelib_time *VAR_5, int *VAR_6, const timelib_tzdb *VAR_7, timelib_tz_get_wrapper VAR_8)
{
 timelib_tzinfo *VAR_9;
 timelib_long VAR_10 = 0;

 *VAR_6 = 0;

 while (**VAR_3 == ' ' || **VAR_3 == '\t' || **VAR_3 == '(') {
  ++*VAR_3;
 }
 if ((*VAR_3)[0] == 'G' && (*VAR_3)[1] == 'M' && (*VAR_3)[2] == 'T' && ((*VAR_3)[3] == '+' || (*VAR_3)[3] == '-')) {
  *VAR_3 += 3;
 }
 if (**VAR_3 == '+') {
  ++*VAR_3;
  VAR_5->is_localtime = 1;
  VAR_5->zone_type = VAR_2;
  *VAR_6 = 0;
  VAR_5->dst = 0;

  VAR_10 = FUNC_3(VAR_3);
 } else if (**VAR_3 == '-') {
  ++*VAR_3;
  VAR_5->is_localtime = 1;
  VAR_5->zone_type = VAR_2;
  *VAR_6 = 0;
  VAR_5->dst = 0;

  VAR_10 = -1 * FUNC_3(VAR_3);
 } else {
  int VAR_11 = 0;
  timelib_long VAR_12 = 0;
  char *VAR_13;

  VAR_5->is_localtime = 1;


  VAR_12 = FUNC_2(VAR_3, VAR_4, &VAR_13, &VAR_11);
  if (VAR_11) {
   VAR_5->zone_type = VAR_0;
   FUNC_4(VAR_5, VAR_13);
  }


  if (!VAR_11 || FUNC_0("UTC", VAR_13) == 0) {
   int VAR_14;

   if ((VAR_9 = VAR_8(VAR_13, VAR_7, &VAR_14)) != ((void*)0)) {
    VAR_5->tz_info = VAR_9;
    VAR_5->zone_type = VAR_1;
    VAR_11++;
   }
  }
  FUNC_1(VAR_13);
  *VAR_6 = (VAR_11 == 0);
  VAR_10 = VAR_12;
 }
 while (**VAR_3 == ')') {
  ++*VAR_3;
 }
 return VAR_10;
}

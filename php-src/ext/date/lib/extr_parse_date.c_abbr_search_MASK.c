
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char const* name; int gmtoffset; int type; } ;
typedef TYPE_1__ timelib_tz_lookup_table ;
typedef int timelib_long ;


 scalar_t__ FUNC_0 (char const*,char const*) ;
 TYPE_1__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_1__ const* VAR_2 ;

__attribute__((used)) static const timelib_tz_lookup_table* FUNC_1(const char *VAR_3, timelib_long VAR_4, int VAR_5)
{
 int VAR_6 = 0;
 const timelib_tz_lookup_table *VAR_7, *VAR_8 = ((void*)0);
 const timelib_tz_lookup_table *VAR_9;

 if (FUNC_0("utc", VAR_3) == 0 || FUNC_0("gmt", VAR_3) == 0) {
  return VAR_2;
 }

 for (VAR_7 = VAR_1; VAR_7->name; VAR_7++) {
  if (FUNC_0(VAR_3, VAR_7->name) == 0) {
   if (!VAR_6) {
    VAR_6 = 1;
    VAR_8 = VAR_7;
    if (VAR_4 == -1) {
     return VAR_7;
    }
   }
   if (VAR_7->gmtoffset == VAR_4) {
    return VAR_7;
   }
  }
 }
 if (VAR_6) {
  return VAR_8;
 }



 for (VAR_9 = VAR_0; VAR_9->name; VAR_9++) {
  if (VAR_9->gmtoffset == VAR_4 && VAR_9->type == VAR_5) {
   return VAR_9;
  }
 }
 return ((void*)0);
}

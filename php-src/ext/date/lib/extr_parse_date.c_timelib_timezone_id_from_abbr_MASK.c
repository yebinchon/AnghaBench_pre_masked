
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* full_tz_name; } ;
typedef TYPE_1__ timelib_tz_lookup_table ;
typedef int timelib_long ;


 TYPE_1__* FUNC_0 (char const*,int ,int) ;

char *FUNC_1(const char *VAR_0, timelib_long VAR_1, int VAR_2)
{
 const timelib_tz_lookup_table *VAR_3;

 VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 if (VAR_3) {
  return (VAR_3->full_tz_name);
 } else {
  return ((void*)0);
 }
}

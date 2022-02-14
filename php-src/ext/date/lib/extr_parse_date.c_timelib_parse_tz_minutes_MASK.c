
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int is_localtime; scalar_t__ dst; void* zone_type; } ;
typedef TYPE_1__ timelib_time ;
typedef int timelib_long ;


 int VAR_0 ;
 void* VAR_1 ;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int *,int) ;

__attribute__((used)) static timelib_long FUNC_3(char **VAR_2, timelib_time *VAR_3)
{
 timelib_long VAR_4 = VAR_0;
 char *VAR_5 = *VAR_2;


 if (**VAR_2 != '+' && **VAR_2 != '-') {
  return VAR_4;
 }

 ++*VAR_2;
 while (FUNC_0(**VAR_2)) {
  ++*VAR_2;
 }

 if (*VAR_5 == '+') {
  VAR_3->is_localtime = 1;
  VAR_3->zone_type = VAR_1;
  VAR_3->dst = 0;

  VAR_4 = FUNC_1(FUNC_2(VAR_5 + 1, ((void*)0), 10));
 } else if (*VAR_5 == '-') {
  VAR_3->is_localtime = 1;
  VAR_3->zone_type = VAR_1;
  VAR_3->dst = 0;

  VAR_4 = -1 * FUNC_1(FUNC_2(VAR_5 + 1, ((void*)0), 10));
 }
 return VAR_4;
}

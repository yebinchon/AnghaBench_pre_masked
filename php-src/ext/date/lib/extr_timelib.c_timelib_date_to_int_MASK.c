
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ sse; } ;
typedef TYPE_1__ timelib_time ;
typedef scalar_t__ timelib_sll ;
typedef int timelib_long ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

timelib_long FUNC_0(timelib_time *VAR_2, int *VAR_3)
{
 timelib_sll VAR_4;

 VAR_4 = VAR_2->sse;

 if (VAR_4 < VAR_1 || VAR_4 > VAR_0) {
  if (VAR_3) {
   *VAR_3 = 1;
  }
  return 0;
 }
 if (VAR_3) {
  *VAR_3 = 0;
 }
 return (timelib_long) VAR_2->sse;
}

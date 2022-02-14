
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ trans; } ;
typedef TYPE_2__ tlinfo ;
struct TYPE_6__ {int leapcnt; } ;
struct TYPE_8__ {TYPE_2__* leap_times; TYPE_1__ bit64; } ;
typedef TYPE_3__ timelib_tzinfo ;
typedef scalar_t__ timelib_sll ;



__attribute__((used)) static tlinfo* FUNC_0(timelib_tzinfo *VAR_0, timelib_sll VAR_1)
{
 int VAR_2;

 if (!VAR_0->bit64.leapcnt || !VAR_0->leap_times) {
  return ((void*)0);
 }

 for (VAR_2 = VAR_0->bit64.leapcnt - 1; VAR_2 > 0; VAR_2--) {
  if (VAR_1 > VAR_0->leap_times[VAR_2].trans) {
   return &(VAR_0->leap_times[VAR_2]);
  }
 }
 return ((void*)0);
}

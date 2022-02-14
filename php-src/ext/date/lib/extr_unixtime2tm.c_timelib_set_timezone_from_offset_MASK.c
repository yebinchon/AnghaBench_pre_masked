
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int have_zone; int * tz_info; scalar_t__ dst; int zone_type; int z; int * tz_abbr; } ;
typedef TYPE_1__ timelib_time ;
typedef int timelib_sll ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

void FUNC_1(timelib_time *VAR_1, timelib_sll VAR_2)
{
 if (VAR_1->tz_abbr) {
  FUNC_0(VAR_1->tz_abbr);
 }
 VAR_1->tz_abbr = ((void*)0);

 VAR_1->z = VAR_2;
 VAR_1->have_zone = 1;
 VAR_1->zone_type = VAR_0;
 VAR_1->dst = 0;
 VAR_1->tz_info = ((void*)0);
}

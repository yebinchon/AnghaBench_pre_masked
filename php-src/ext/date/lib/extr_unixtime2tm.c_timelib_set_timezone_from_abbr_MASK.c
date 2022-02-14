
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int have_zone; int * tz_info; int dst; int zone_type; int z; scalar_t__ tz_abbr; } ;
typedef TYPE_1__ timelib_time ;
struct TYPE_6__ {int dst; int utc_offset; int abbr; } ;
typedef TYPE_2__ timelib_abbr_info ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;

void FUNC_2(timelib_time *VAR_1, timelib_abbr_info VAR_2)
{
 if (VAR_1->tz_abbr) {
  FUNC_0(VAR_1->tz_abbr);
 }
 VAR_1->tz_abbr = FUNC_1(VAR_2.abbr);

 VAR_1->z = VAR_2.utc_offset;
 VAR_1->have_zone = 1;
 VAR_1->zone_type = VAR_0;
 VAR_1->dst = VAR_2.dst;
 VAR_1->tz_info = ((void*)0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int timelib_tzinfo ;
struct TYPE_6__ {int abbr; int is_dst; int offset; } ;
typedef TYPE_1__ timelib_time_offset ;
struct TYPE_7__ {int have_zone; int zone_type; int tz_abbr; int * tz_info; int dst; int z; int sse; } ;
typedef TYPE_2__ timelib_time ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4(timelib_time *VAR_1, timelib_tzinfo *VAR_2)
{
 timelib_time_offset *VAR_3;

 VAR_3 = FUNC_1(VAR_1->sse, VAR_2);
 VAR_1->z = VAR_3->offset;






 VAR_1->dst = VAR_3->is_dst;
 VAR_1->tz_info = VAR_2;
 if (VAR_1->tz_abbr) {
  FUNC_0(VAR_1->tz_abbr);
 }
 VAR_1->tz_abbr = FUNC_2(VAR_3->abbr);
 FUNC_3(VAR_3);

 VAR_1->have_zone = 1;
 VAR_1->zone_type = VAR_0;
}

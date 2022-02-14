
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int offset; } ;
typedef TYPE_1__ timelib_time_offset ;
struct TYPE_7__ {int zone_type; int dst; int tz_info; int sse; int z; } ;
typedef TYPE_2__ timelib_time ;
typedef int timelib_sll ;





 TYPE_1__* FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;

timelib_sll FUNC_2(timelib_time *VAR_0)
{
 timelib_time_offset *VAR_1;
 timelib_sll VAR_2;

 switch (VAR_0->zone_type) {
  case 130:
  case 128:
   return VAR_0->z + (VAR_0->dst * 3600);

  case 129:
   VAR_1 = FUNC_0(VAR_0->sse, VAR_0->tz_info);
   VAR_2 = VAR_1->offset;
   FUNC_1(VAR_1);
   return VAR_2;

  default:
   return 0;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ offset; } ;
typedef TYPE_1__ timelib_time_offset ;
struct TYPE_8__ {int z; int dst; int zone_type; int is_localtime; int have_zone; scalar_t__ sse; int tz_info; } ;
typedef TYPE_2__ timelib_time ;
typedef scalar_t__ timelib_sll ;





 TYPE_1__* FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_2__*,scalar_t__) ;

void FUNC_3(timelib_time *VAR_0)
{
 timelib_sll VAR_1;
 int VAR_2 = VAR_0->z;
 signed int VAR_3 = VAR_0->dst;

 VAR_1 = VAR_0->sse;

 switch (VAR_0->zone_type) {
  case 130:
  case 128: {
   FUNC_2(VAR_0, VAR_0->sse + VAR_0->z + (VAR_0->dst * 3600));

   goto cleanup;
  }

  case 129: {
   timelib_time_offset *VAR_4;

   VAR_4 = FUNC_0(VAR_0->sse, VAR_0->tz_info);
   FUNC_2(VAR_0, VAR_0->sse + VAR_4->offset);
   FUNC_1(VAR_4);

   goto cleanup;
  }

  default:
   FUNC_2(VAR_0, VAR_0->sse);
   goto cleanup;
 }
cleanup:
 VAR_0->sse = VAR_1;
 VAR_0->is_localtime = 1;
 VAR_0->have_zone = 1;
 VAR_0->z = VAR_2;
 VAR_0->dst = VAR_3;
}

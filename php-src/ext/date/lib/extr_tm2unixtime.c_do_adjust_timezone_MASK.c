
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int timelib_tzinfo ;
struct TYPE_7__ {int offset; int transition_time; int is_dst; int abbr; } ;
typedef TYPE_1__ timelib_time_offset ;
struct TYPE_8__ {int zone_type; int is_localtime; int z; int dst; int sse; int tz_abbr; int * tz_info; } ;
typedef TYPE_2__ timelib_time ;
typedef int timelib_sll ;





 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int,int *) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static timelib_sll FUNC_5(timelib_time *VAR_0, timelib_tzinfo *VAR_1)
{
 switch (VAR_0->zone_type) {
  case 128:

   VAR_0->is_localtime = 1;
   return -VAR_0->z;
   break;

  case 130: {
   timelib_sll VAR_2;

   VAR_0->is_localtime = 1;
   VAR_2 = -VAR_0->z;
   VAR_2 -= VAR_0->dst * 3600;
   return VAR_2;
   }
   break;

  case 129:
   VAR_1 = VAR_0->tz_info;


  default:

   if (VAR_1) {
    timelib_time_offset *VAR_3, *VAR_4;
    timelib_sll VAR_5;
    int VAR_6;

    VAR_0->is_localtime = 1;
    VAR_3 = FUNC_1(VAR_0->sse, VAR_1);
    VAR_4 = FUNC_1(VAR_0->sse - VAR_3->offset, VAR_1);
    FUNC_2(VAR_0, VAR_1);

    VAR_6 = (
     ((VAR_0->sse - VAR_4->offset) >= (VAR_4->transition_time + (VAR_3->offset - VAR_4->offset))) &&
     ((VAR_0->sse - VAR_4->offset) < VAR_4->transition_time)
    );

    if ((VAR_3->offset != VAR_4->offset) && !VAR_6) {
     VAR_5 = -VAR_4->offset;
    } else {
     VAR_5 = -VAR_0->z;
    }
    FUNC_4(VAR_3);
    FUNC_4(VAR_4);

    {
     timelib_time_offset *VAR_7;

     VAR_7 = FUNC_1(VAR_0->sse + VAR_5, VAR_1);
     VAR_0->z = VAR_7->offset;

     VAR_0->dst = VAR_7->is_dst;
     if (VAR_0->tz_abbr) {
      FUNC_0(VAR_0->tz_abbr);
     }
     VAR_0->tz_abbr = FUNC_3(VAR_7->abbr);
     FUNC_4(VAR_7);
    }
    return VAR_5;
   }
 }
 return 0;
}

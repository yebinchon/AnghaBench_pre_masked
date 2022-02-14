
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t num; } ;
struct frame_rate_data {TYPE_1__ ranges; } ;
typedef int obs_property_t ;


 int VAR_0 ;
 struct frame_rate_data* FUNC_0 (int *,int ) ;

size_t FUNC_1(obs_property_t *VAR_1)
{
 struct frame_rate_data *VAR_2 =
  FUNC_0(VAR_1, VAR_0);
 return VAR_2 ? VAR_2->ranges.num : 0;
}

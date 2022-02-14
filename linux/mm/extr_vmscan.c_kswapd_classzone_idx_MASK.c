
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ kswapd_classzone_idx; } ;
typedef TYPE_1__ pg_data_t ;
typedef enum zone_type { ____Placeholder_zone_type } zone_type ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static enum zone_type FUNC_0(pg_data_t *VAR_1,
        enum zone_type VAR_2)
{
 if (VAR_1->kswapd_classzone_idx == VAR_0)
  return VAR_2;
 return VAR_1->kswapd_classzone_idx;
}

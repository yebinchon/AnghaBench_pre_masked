
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int num_mcast_sta; } ;
struct TYPE_5__ {int num_mcast_sta; } ;
struct TYPE_8__ {TYPE_3__ vlan; TYPE_1__ ap; } ;
struct TYPE_6__ {scalar_t__ type; } ;
struct ieee80211_sub_if_data {TYPE_4__ u; TYPE_2__ vif; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;

void FUNC_1(struct ieee80211_sub_if_data *VAR_2)
{
 if (VAR_2->vif.type == VAR_0)
  FUNC_0(&VAR_2->u.ap.num_mcast_sta);
 else if (VAR_2->vif.type == VAR_1)
  FUNC_0(&VAR_2->u.vlan.num_mcast_sta);
}

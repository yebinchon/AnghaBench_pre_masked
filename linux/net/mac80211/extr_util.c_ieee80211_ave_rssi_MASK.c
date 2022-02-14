
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee80211_vif {int dummy; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct ieee80211_if_managed {int ave_beacon_signal; } ;
struct TYPE_3__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {TYPE_2__ vif; TYPE_1__ u; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 struct ieee80211_sub_if_data* FUNC_2 (struct ieee80211_vif*) ;

int FUNC_3(struct ieee80211_vif *VAR_1)
{
 struct ieee80211_sub_if_data *VAR_2 = FUNC_2(VAR_1);
 struct ieee80211_if_managed *VAR_3 = &VAR_2->u.mgd;

 if (FUNC_0(VAR_2->vif.type != VAR_0)) {

  return 0;
 }
 return -FUNC_1(&VAR_3->ave_beacon_signal);
}

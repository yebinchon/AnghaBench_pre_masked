
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct ieee80211_vif {int dummy; } ;
struct TYPE_8__ {int beacon; } ;
struct TYPE_7__ {int presp; } ;
struct TYPE_6__ {int beacon; } ;
struct TYPE_9__ {TYPE_3__ mesh; TYPE_2__ ibss; TYPE_1__ ap; } ;
struct TYPE_10__ {scalar_t__ type; } ;
struct ieee80211_sub_if_data {TYPE_4__ u; TYPE_5__ vif; } ;
struct beacon_data {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct beacon_data*) ;
 scalar_t__ FUNC_1 (TYPE_5__*) ;
 struct beacon_data* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 struct ieee80211_sub_if_data* FUNC_5 (struct ieee80211_vif*) ;

u8 FUNC_6(struct ieee80211_vif *VAR_2)
{
 struct ieee80211_sub_if_data *VAR_3 = FUNC_5(VAR_2);
 struct beacon_data *VAR_4 = ((void*)0);
 u8 VAR_5 = 0;

 FUNC_3();

 if (VAR_3->vif.type == VAR_1)
  VAR_4 = FUNC_2(VAR_3->u.ap.beacon);
 else if (VAR_3->vif.type == VAR_0)
  VAR_4 = FUNC_2(VAR_3->u.ibss.presp);
 else if (FUNC_1(&VAR_3->vif))
  VAR_4 = FUNC_2(VAR_3->u.mesh.beacon);

 if (!VAR_4)
  goto unlock;

 VAR_5 = FUNC_0(VAR_4);

unlock:
 FUNC_4();
 return VAR_5;
}

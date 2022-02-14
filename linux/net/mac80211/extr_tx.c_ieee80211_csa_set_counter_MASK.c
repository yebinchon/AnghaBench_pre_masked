
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct ieee80211_vif {int dummy; } ;
struct TYPE_8__ {int beacon; } ;
struct TYPE_7__ {int presp; } ;
struct TYPE_6__ {int beacon; } ;
struct TYPE_9__ {TYPE_3__ mesh; TYPE_2__ ibss; TYPE_1__ ap; } ;
struct TYPE_10__ {scalar_t__ type; } ;
struct ieee80211_sub_if_data {TYPE_4__ u; TYPE_5__ vif; } ;
struct beacon_data {scalar_t__ csa_current_counter; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_5__*) ;
 struct beacon_data* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct ieee80211_sub_if_data* FUNC_4 (struct ieee80211_vif*) ;

void FUNC_5(struct ieee80211_vif *VAR_2, u8 VAR_3)
{
 struct ieee80211_sub_if_data *VAR_4 = FUNC_4(VAR_2);
 struct beacon_data *VAR_5 = ((void*)0);

 FUNC_2();

 if (VAR_4->vif.type == VAR_1)
  VAR_5 = FUNC_1(VAR_4->u.ap.beacon);
 else if (VAR_4->vif.type == VAR_0)
  VAR_5 = FUNC_1(VAR_4->u.ibss.presp);
 else if (FUNC_0(&VAR_4->vif))
  VAR_5 = FUNC_1(VAR_4->u.mesh.beacon);

 if (!VAR_5)
  goto unlock;

 if (VAR_3 < VAR_5->csa_current_counter)
  VAR_5->csa_current_counter = VAR_3;

unlock:
 FUNC_3();
}

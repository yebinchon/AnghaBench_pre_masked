
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int csa_active; } ;
struct ieee80211_if_managed {int csa_waiting_bcn; int csa_connection_drop_work; } ;
struct TYPE_3__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {int csa_block_tx; int reserved_chandef; int dev; TYPE_2__ vif; TYPE_1__ u; struct ieee80211_local* local; } ;
struct ieee80211_local {int hw; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct ieee80211_sub_if_data*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct ieee80211_local*,struct ieee80211_sub_if_data*,int ) ;
 int FUNC_5 (struct ieee80211_sub_if_data*) ;
 int FUNC_6 (struct ieee80211_sub_if_data*,char*) ;

__attribute__((used)) static void FUNC_7(struct ieee80211_sub_if_data *VAR_1)
{
 struct ieee80211_local *VAR_2 = VAR_1->local;
 struct ieee80211_if_managed *VAR_3 = &VAR_1->u.mgd;
 int VAR_4;

 FUNC_5(VAR_1);

 FUNC_0(!VAR_1->vif.csa_active);

 if (VAR_1->csa_block_tx) {
  FUNC_4(VAR_2, VAR_1,
       VAR_0);
  VAR_1->csa_block_tx = 0;
 }

 VAR_1->vif.csa_active = 0;
 VAR_3->csa_waiting_bcn = 0;

 VAR_4 = FUNC_2(VAR_1);
 if (VAR_4) {
  FUNC_6(VAR_1,
      "driver post channel switch failed, disconnecting\n");
  FUNC_3(&VAR_2->hw,
         &VAR_3->csa_connection_drop_work);
  return;
 }

 FUNC_1(VAR_1->dev, &VAR_1->reserved_chandef);
}

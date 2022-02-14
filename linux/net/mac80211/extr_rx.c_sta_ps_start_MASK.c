
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct txq_info {int schedule_order; } ;
struct TYPE_6__ {struct ieee80211_txq** txq; int aid; int addr; } ;
struct sta_info {int txq_buffered_tids; TYPE_3__ sta; struct ieee80211_sub_if_data* sdata; } ;
struct ps_data {int num_sta_ps; } ;
struct ieee80211_txq {size_t ac; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct ieee80211_sub_if_data {TYPE_2__* bss; TYPE_1__ vif; struct ieee80211_local* local; } ;
struct ieee80211_local {int * active_txq_lock; int hw; } ;
struct TYPE_5__ {struct ps_data ps; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;
 int FUNC_2 (struct ieee80211_local*,struct ieee80211_sub_if_data*,int ,TYPE_3__*) ;
 int FUNC_3 (struct sta_info*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct ieee80211_sub_if_data*,char*,int ,int ) ;
 int FUNC_8 (int,int *) ;
 int FUNC_9 (struct sta_info*,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 struct txq_info* FUNC_12 (struct ieee80211_txq*) ;
 scalar_t__ FUNC_13 (struct ieee80211_txq*) ;

__attribute__((used)) static void FUNC_14(struct sta_info *VAR_6)
{
 struct ieee80211_sub_if_data *VAR_7 = VAR_6->sdata;
 struct ieee80211_local *VAR_8 = VAR_7->local;
 struct ps_data *VAR_9;
 int VAR_10;

 if (VAR_6->sdata->vif.type == VAR_2 ||
     VAR_6->sdata->vif.type == VAR_3)
  VAR_9 = &VAR_7->bss->ps;
 else
  return;

 FUNC_0(&VAR_9->num_sta_ps);
 FUNC_9(VAR_6, VAR_5);
 if (!FUNC_4(&VAR_8->hw, VAR_0))
  FUNC_2(VAR_8, VAR_7, VAR_4, &VAR_6->sta);
 FUNC_7(VAR_7, "STA %pM aid %d enters power save mode\n",
        VAR_6->sta.addr, VAR_6->sta.aid);

 FUNC_3(VAR_6);

 if (!VAR_6->sta.txq[0])
  return;

 for (VAR_10 = 0; VAR_10 < VAR_1; VAR_10++) {
  struct ieee80211_txq *VAR_11 = VAR_6->sta.txq[VAR_10];
  struct txq_info *VAR_12 = FUNC_12(VAR_11);

  FUNC_10(&VAR_8->active_txq_lock[VAR_11->ac]);
  if (!FUNC_6(&VAR_12->schedule_order))
   FUNC_5(&VAR_12->schedule_order);
  FUNC_11(&VAR_8->active_txq_lock[VAR_11->ac]);

  if (FUNC_13(VAR_11))
   FUNC_8(VAR_10, &VAR_6->txq_buffered_tids);
  else
   FUNC_1(VAR_10, &VAR_6->txq_buffered_tids);
 }
}

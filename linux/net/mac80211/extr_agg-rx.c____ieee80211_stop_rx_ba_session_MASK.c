
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct tid_ampdu_rx {int removed; int rcu_head; int reorder_timer; int reorder_lock; int session_timer; } ;
struct TYPE_4__ {int addr; } ;
struct TYPE_3__ {int agg_session_valid; int * tid_rx; int mtx; } ;
struct sta_info {TYPE_2__ sta; int sdata; TYPE_1__ ampdu_mlme; struct ieee80211_local* local; } ;
struct ieee80211_local {int dummy; } ;
struct ieee80211_ampdu_params {size_t tid; int amsdu; int ssn; int timeout; int action; TYPE_2__* sta; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 size_t VAR_1 ;
 int FUNC_1 (size_t,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct ieee80211_local*,int ,struct ieee80211_ampdu_params*) ;
 int FUNC_5 (int ,char*,int ,size_t,char*,int) ;
 int VAR_2 ;
 int FUNC_6 (int ,int ,size_t,size_t,size_t) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct tid_ampdu_rx* FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,char*,int ,size_t) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (size_t,int ) ;

void FUNC_14(struct sta_info *VAR_3, u16 VAR_4,
         u16 VAR_5, u16 VAR_6, bool VAR_7)
{
 struct ieee80211_local *VAR_8 = VAR_3->local;
 struct tid_ampdu_rx *VAR_9;
 struct ieee80211_ampdu_params VAR_10 = {
  .sta = &VAR_3->sta,
  .action = VAR_0,
  .tid = VAR_4,
  .amsdu = 0,
  .timeout = 0,
  .ssn = 0,
 };

 FUNC_7(&VAR_3->ampdu_mlme.mtx);

 VAR_9 = FUNC_9(VAR_3->ampdu_mlme.tid_rx[VAR_4],
     FUNC_8(&VAR_3->ampdu_mlme.mtx));

 if (!FUNC_13(VAR_4, VAR_3->ampdu_mlme.agg_session_valid))
  return;

 FUNC_0(VAR_3->ampdu_mlme.tid_rx[VAR_4], ((void*)0));
 FUNC_1(VAR_4, VAR_3->ampdu_mlme.agg_session_valid);

 FUNC_5(VAR_3->sdata,
        "Rx BA session stop requested for %pM tid %u %s reason: %d\n",
        VAR_3->sta.addr, VAR_4,
        VAR_5 == VAR_1 ? "recipient" : "initiator",
        (int)VAR_6);

 if (FUNC_4(VAR_8, VAR_3->sdata, &VAR_10))
  FUNC_10(VAR_3->sdata,
      "HW problem - can not stop rx aggregation for %pM tid %d\n",
      VAR_3->sta.addr, VAR_4);


 if (VAR_5 == VAR_1 && VAR_7)
  FUNC_6(VAR_3->sdata, VAR_3->sta.addr,
         VAR_4, VAR_1, VAR_6);





 if (!VAR_9)
  return;

 FUNC_3(&VAR_9->session_timer);


 FUNC_11(&VAR_9->reorder_lock);
 VAR_9->removed = 1;
 FUNC_12(&VAR_9->reorder_lock);
 FUNC_3(&VAR_9->reorder_timer);

 FUNC_2(&VAR_9->rcu_head, VAR_2);
}

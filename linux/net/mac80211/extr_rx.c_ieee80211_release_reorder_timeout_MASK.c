
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tid_ampdu_rx {int reorder_lock; } ;
struct TYPE_4__ {int * tid_rx; } ;
struct sta_info {int sta; int sdata; TYPE_1__ ampdu_mlme; int local; } ;
struct sk_buff_head {int dummy; } ;
struct ieee80211_rx_data {int security_idx; int seqno_idx; int sdata; int local; int * napi; struct sta_info* sta; } ;
struct TYPE_5__ {int tid; int * sta; } ;
struct TYPE_6__ {TYPE_2__ ba; } ;
struct ieee80211_event {TYPE_3__ u; int type; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff_head*) ;
 int FUNC_1 (int ,int ,struct ieee80211_event*) ;
 int FUNC_2 (struct ieee80211_rx_data*,struct sk_buff_head*) ;
 int FUNC_3 (int ,struct tid_ampdu_rx*,struct sk_buff_head*) ;
 struct tid_ampdu_rx* FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff_head*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct sta_info *VAR_1, int VAR_2)
{
 struct sk_buff_head VAR_3;
 struct ieee80211_rx_data VAR_4 = {
  .sta = VAR_1,
  .sdata = VAR_1->sdata,
  .local = VAR_1->local,

  .security_idx = VAR_2,
  .seqno_idx = VAR_2,
  .napi = ((void*)0),
 };
 struct tid_ampdu_rx *VAR_5;

 VAR_5 = FUNC_4(VAR_1->ampdu_mlme.tid_rx[VAR_2]);
 if (!VAR_5)
  return;

 FUNC_0(&VAR_3);

 FUNC_6(&VAR_5->reorder_lock);
 FUNC_3(VAR_1->sdata, VAR_5, &VAR_3);
 FUNC_7(&VAR_5->reorder_lock);

 if (!FUNC_5(&VAR_3)) {
  struct ieee80211_event VAR_6 = {
   .type = VAR_0,
   .u.ba.tid = VAR_2,
   .u.ba.sta = &VAR_1->sta,
  };
  FUNC_1(VAR_4.local, VAR_4.sdata, &VAR_6);
 }

 FUNC_2(&VAR_4, &VAR_3);
}

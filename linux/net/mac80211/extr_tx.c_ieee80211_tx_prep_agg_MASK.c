
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct tid_ampdu_tx {int last_tx; int pending; int state; } ;
struct sk_buff {int dummy; } ;
struct TYPE_8__ {int * vif; } ;
struct ieee80211_tx_info {int flags; TYPE_2__ control; } ;
struct ieee80211_tx_data {TYPE_4__* local; TYPE_5__* sta; TYPE_3__* sdata; } ;
struct TYPE_7__ {int aid; int addr; int * txq; } ;
struct TYPE_11__ {int lock; TYPE_1__ sta; int sdata; } ;
struct TYPE_10__ {int hw; } ;
struct TYPE_9__ {int vif; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 struct sk_buff* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct sk_buff*) ;
 int FUNC_2 (TYPE_5__*,int ) ;
 int FUNC_3 (int *,struct sk_buff*) ;
 int VAR_8 ;
 int FUNC_4 (int ,char*,int ,int ) ;
 struct tid_ampdu_tx* FUNC_5 (TYPE_5__*,int) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int ,int *) ;

__attribute__((used)) static bool FUNC_10(struct ieee80211_tx_data *VAR_9,
      struct sk_buff *VAR_10,
      struct ieee80211_tx_info *VAR_11,
      struct tid_ampdu_tx *VAR_12,
      int VAR_13)
{
 bool VAR_14 = 0;
 bool VAR_15 = 0;
 struct sk_buff *VAR_16 = ((void*)0);

 if (FUNC_9(VAR_0, &VAR_12->state)) {
  VAR_11->flags |= VAR_2;
  VAR_15 = 1;
 } else if (FUNC_9(VAR_1, &VAR_12->state)) {




 } else if (!VAR_9->sta->sta.txq[VAR_13]) {
  FUNC_7(&VAR_9->sta->lock);
  VAR_12 = FUNC_5(VAR_9->sta, VAR_13);

  if (!VAR_12) {

  } else if (FUNC_9(VAR_0, &VAR_12->state)) {
   VAR_11->flags |= VAR_2;
   VAR_15 = 1;
  } else {
   VAR_14 = 1;
   if (VAR_11->flags & VAR_3) {
    FUNC_2(VAR_9->sta, VAR_7);
    FUNC_4(VAR_9->sta->sdata,
           "STA %pM aid %d: SP frame queued, close the SP w/o telling the peer\n",
           VAR_9->sta->sta.addr, VAR_9->sta->sta.aid);
   }
   VAR_11->control.vif = &VAR_9->sdata->vif;
   VAR_11->flags |= VAR_4;
   VAR_11->flags &= ~VAR_5;
   FUNC_1(&VAR_12->pending, VAR_10);
   if (FUNC_6(&VAR_12->pending) > VAR_6)
    VAR_16 = FUNC_0(&VAR_12->pending);
  }
  FUNC_8(&VAR_9->sta->lock);

  if (VAR_16)
   FUNC_3(&VAR_9->local->hw, VAR_16);
 }


 if (VAR_15)
  VAR_12->last_tx = VAR_8;

 return VAR_14;
}

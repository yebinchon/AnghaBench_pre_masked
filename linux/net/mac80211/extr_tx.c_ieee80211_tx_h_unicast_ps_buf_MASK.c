
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int addr; int aid; } ;
struct sta_info {TYPE_2__ sta; int ps_lock; int * ps_tx_buf; int sdata; } ;
struct sk_buff {int dummy; } ;
struct TYPE_7__ {int * vif; scalar_t__ jiffies; } ;
struct ieee80211_tx_info {int flags; TYPE_1__ control; } ;
struct ieee80211_tx_data {TYPE_5__* sdata; TYPE_3__* skb; struct ieee80211_local* local; struct sta_info* sta; } ;
struct ieee80211_local {scalar_t__ total_ps_buffered; int sta_cleanup; int hw; } ;
struct ieee80211_hdr {int frame_control; } ;
typedef int ieee80211_tx_result ;
struct TYPE_10__ {int vif; } ;
struct TYPE_9__ {scalar_t__ data; } ;


 struct ieee80211_tx_info* FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int *,struct sk_buff*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_11 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (TYPE_5__*,char*,int ,...) ;
 int FUNC_6 (struct ieee80211_local*) ;
 int FUNC_7 (scalar_t__) ;
 struct sk_buff* FUNC_8 (int *) ;
 int FUNC_9 (TYPE_3__*) ;
 scalar_t__ FUNC_10 (int *) ;
 int FUNC_11 (int *,TYPE_3__*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct sta_info*) ;
 int FUNC_15 (struct sta_info*,int ) ;
 int FUNC_16 (int *) ;
 scalar_t__ FUNC_17 (int) ;

__attribute__((used)) static ieee80211_tx_result
FUNC_18(struct ieee80211_tx_data *VAR_12)
{
 struct sta_info *VAR_13 = VAR_12->sta;
 struct ieee80211_tx_info *VAR_14 = FUNC_0(VAR_12->skb);
 struct ieee80211_hdr *VAR_15 = (struct ieee80211_hdr *)VAR_12->skb->data;
 struct ieee80211_local *VAR_16 = VAR_12->local;

 if (FUNC_17(!VAR_13))
  return VAR_6;

 if (FUNC_17((FUNC_15(VAR_13, VAR_10) ||
        FUNC_15(VAR_13, VAR_9) ||
        FUNC_15(VAR_13, VAR_8)) &&
       !(VAR_14->flags & VAR_0))) {
  int VAR_17 = FUNC_9(VAR_12->skb);

  if (FUNC_3(VAR_15->frame_control) &&
      !FUNC_2(VAR_15->frame_control)) {
   VAR_14->flags |= VAR_0;
   return VAR_6;
  }

  FUNC_5(VAR_13->sdata, "STA %pM aid %d: PS buffer for AC %d\n",
         VAR_13->sta.addr, VAR_13->sta.aid, VAR_17);
  if (VAR_12->local->total_ps_buffered >= VAR_5)
   FUNC_6(VAR_12->local);


  FUNC_12(&VAR_13->ps_lock);





  if (!FUNC_15(VAR_13, VAR_10) &&
      !FUNC_15(VAR_13, VAR_9) &&
      !FUNC_15(VAR_13, VAR_8)) {
   FUNC_13(&VAR_13->ps_lock);
   return VAR_6;
  }

  if (FUNC_10(&VAR_13->ps_tx_buf[VAR_17]) >= VAR_4) {
   struct sk_buff *VAR_18 = FUNC_8(&VAR_13->ps_tx_buf[VAR_17]);
   FUNC_5(VAR_12->sdata,
          "STA %pM TX buffer for AC %d full - dropping oldest frame\n",
          VAR_13->sta.addr, VAR_17);
   FUNC_1(&VAR_16->hw, VAR_18);
  } else
   VAR_12->local->total_ps_buffered++;

  VAR_14->control.jiffies = VAR_11;
  VAR_14->control.vif = &VAR_12->sdata->vif;
  VAR_14->flags |= VAR_1;
  VAR_14->flags &= ~VAR_2;
  FUNC_11(&VAR_13->ps_tx_buf[VAR_17], VAR_12->skb);
  FUNC_13(&VAR_13->ps_lock);

  if (!FUNC_16(&VAR_16->sta_cleanup))
   FUNC_4(&VAR_16->sta_cleanup,
      FUNC_7(VAR_11 +
      VAR_3));





  FUNC_14(VAR_13);

  return VAR_7;
 } else if (FUNC_17(FUNC_15(VAR_13, VAR_10))) {
  FUNC_5(VAR_12->sdata,
         "STA %pM in PS mode, but polling/in SP -> send frame\n",
         VAR_13->sta.addr);
 }

 return VAR_6;
}

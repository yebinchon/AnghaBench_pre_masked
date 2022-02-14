
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u16 ;
struct tid_ampdu_rx {int last_rx; scalar_t__ timeout; } ;
struct TYPE_6__ {int addr; } ;
struct TYPE_5__ {int unexpected_agg; int agg_session_valid; int * tid_rx; } ;
struct sta_info {TYPE_2__ sta; TYPE_1__ ampdu_mlme; } ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {scalar_t__ data; } ;
struct ieee80211_rx_data {TYPE_3__* sdata; struct sta_info* sta; struct ieee80211_local* local; struct sk_buff* skb; } ;
struct ieee80211_local {int hw; } ;
struct ieee80211_hdr {int frame_control; int seq_ctrl; int addr1; } ;
struct TYPE_7__ {int work; int skb_queue; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sk_buff_head*,struct sk_buff*) ;
 int FUNC_1 (int ) ;
 size_t* FUNC_2 (struct ieee80211_hdr*) ;
 size_t FUNC_3 (struct ieee80211_hdr*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (TYPE_3__*,int ,size_t,int ,int ) ;
 scalar_t__ FUNC_7 (TYPE_3__*,struct tid_ampdu_rx*,struct sk_buff*,struct sk_buff_head*) ;
 scalar_t__ FUNC_8 (int ) ;
 int VAR_7 ;
 int FUNC_9 (int ) ;
 struct tid_ampdu_rx* FUNC_10 (int ) ;
 int FUNC_11 (int *,struct sk_buff*) ;
 int FUNC_12 (size_t,int ) ;
 int FUNC_13 (size_t,int ) ;
 scalar_t__ FUNC_14 (int) ;

__attribute__((used)) static void FUNC_15(struct ieee80211_rx_data *VAR_8,
           struct sk_buff_head *VAR_9)
{
 struct sk_buff *VAR_10 = VAR_8->skb;
 struct ieee80211_local *VAR_11 = VAR_8->local;
 struct ieee80211_hdr *VAR_12 = (struct ieee80211_hdr *) VAR_10->data;
 struct sta_info *VAR_13 = VAR_8->sta;
 struct tid_ampdu_rx *VAR_14;
 u16 VAR_15;
 u8 VAR_16, VAR_17;

 if (!FUNC_4(VAR_12->frame_control) ||
     FUNC_8(VAR_12->addr1))
  goto dont_reorder;






 if (!VAR_13)
  goto dont_reorder;

 VAR_17 = *FUNC_2(VAR_12) &
       VAR_1;
 VAR_16 = FUNC_3(VAR_12);

 VAR_14 = FUNC_10(VAR_13->ampdu_mlme.tid_rx[VAR_16]);
 if (!VAR_14) {
  if (VAR_17 == VAR_0 &&
      !FUNC_13(VAR_16, VAR_8->sta->ampdu_mlme.agg_session_valid) &&
      !FUNC_12(VAR_16, VAR_8->sta->ampdu_mlme.unexpected_agg))
   FUNC_6(VAR_8->sdata, VAR_8->sta->sta.addr, VAR_16,
          VAR_5,
          VAR_6);
  goto dont_reorder;
 }


 if (FUNC_14(VAR_12->frame_control & FUNC_1(VAR_4)))
  goto dont_reorder;


 if (VAR_17 != VAR_0 &&
     VAR_17 != VAR_2)
  goto dont_reorder;




 if (VAR_14->timeout)
  VAR_14->last_rx = VAR_7;


 VAR_15 = FUNC_9(VAR_12->seq_ctrl);
 if (VAR_15 & VAR_3) {
  FUNC_11(&VAR_8->sdata->skb_queue, VAR_10);
  FUNC_5(&VAR_11->hw, &VAR_8->sdata->work);
  return;
 }
 if (FUNC_7(VAR_8->sdata, VAR_14, VAR_10,
          VAR_9))
  return;

 dont_reorder:
 FUNC_0(VAR_9, VAR_10);
}

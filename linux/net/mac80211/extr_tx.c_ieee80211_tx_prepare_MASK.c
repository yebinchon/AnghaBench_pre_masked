
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct tid_ampdu_tx {int dummy; } ;
struct TYPE_12__ {int * tid_tx; } ;
struct sta_info {TYPE_5__ ampdu_mlme; } ;
struct sk_buff {scalar_t__ protocol; scalar_t__ len; scalar_t__ data; } ;
struct ieee80211_tx_info {int flags; } ;
struct ieee80211_tx_data {int flags; struct sta_info* sta; struct sk_buff* skb; struct ieee80211_sub_if_data* sdata; int skbs; struct ieee80211_local* local; } ;
struct TYPE_11__ {scalar_t__ use_4addr; } ;
struct TYPE_9__ {int sta; } ;
struct TYPE_10__ {TYPE_2__ vlan; } ;
struct TYPE_8__ {scalar_t__ type; } ;
struct ieee80211_sub_if_data {scalar_t__ control_port_protocol; TYPE_4__ wdev; TYPE_3__ u; TYPE_1__ vif; struct ieee80211_local* local; } ;
struct TYPE_14__ {TYPE_6__* wiphy; } ;
struct ieee80211_local {TYPE_7__ hw; } ;
struct ieee80211_hdr {int addr1; int frame_control; } ;
typedef int ieee80211_tx_result ;
struct TYPE_13__ {scalar_t__ frag_threshold; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (struct sta_info*) ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sta_info*) ;
 int FUNC_4 (struct ieee80211_hdr*) ;
 scalar_t__ FUNC_5 (TYPE_7__*,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct ieee80211_tx_data*,struct sk_buff*,struct ieee80211_tx_info*,struct tid_ampdu_tx*,int) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (struct sta_info*) ;
 int FUNC_11 (struct ieee80211_tx_data*,int ,int) ;
 void* FUNC_12 (int ) ;
 struct sta_info* FUNC_13 (struct ieee80211_sub_if_data*,int ) ;
 struct sta_info* FUNC_14 (struct ieee80211_sub_if_data*,int ) ;
 scalar_t__ FUNC_15 (struct sta_info*,int ) ;
 scalar_t__ FUNC_16 (int) ;

__attribute__((used)) static ieee80211_tx_result
FUNC_17(struct ieee80211_sub_if_data *VAR_17,
       struct ieee80211_tx_data *VAR_18,
       struct sta_info *VAR_19, struct sk_buff *VAR_20)
{
 struct ieee80211_local *VAR_21 = VAR_17->local;
 struct ieee80211_hdr *VAR_22;
 struct ieee80211_tx_info *VAR_23 = FUNC_0(VAR_20);
 int VAR_24;

 FUNC_11(VAR_18, 0, sizeof(*VAR_18));
 VAR_18->skb = VAR_20;
 VAR_18->local = VAR_21;
 VAR_18->sdata = VAR_17;
 FUNC_2(&VAR_18->skbs);






 VAR_23->flags &= ~VAR_8;

 VAR_22 = (struct ieee80211_hdr *) VAR_20->data;

 if (FUNC_10(VAR_19)) {
  if (!FUNC_1(VAR_19))
   VAR_18->sta = VAR_19;
 } else {
  if (VAR_17->vif.type == VAR_11) {
   VAR_18->sta = FUNC_12(VAR_17->u.vlan.sta);
   if (!VAR_18->sta && VAR_17->wdev.use_4addr)
    return VAR_14;
  } else if (VAR_23->flags & (VAR_9 |
       VAR_6) ||
      VAR_18->sdata->control_port_protocol == VAR_18->skb->protocol) {
   VAR_18->sta = FUNC_14(VAR_17, VAR_22->addr1);
  }
  if (!VAR_18->sta && !FUNC_9(VAR_22->addr1))
   VAR_18->sta = FUNC_13(VAR_17, VAR_22->addr1);
 }

 if (VAR_18->sta && FUNC_6(VAR_22->frame_control) &&
     !FUNC_7(VAR_22->frame_control) &&
     FUNC_5(&VAR_21->hw, VAR_0) &&
     !FUNC_5(&VAR_21->hw, VAR_12)) {
  struct tid_ampdu_tx *VAR_25;

  VAR_24 = FUNC_4(VAR_22);

  VAR_25 = FUNC_12(VAR_18->sta->ampdu_mlme.tid_tx[VAR_24]);
  if (VAR_25) {
   bool VAR_26;

   VAR_26 = FUNC_8(VAR_18, VAR_20, VAR_23,
             VAR_25, VAR_24);

   if (FUNC_16(VAR_26))
    return VAR_15;
  }
 }

 if (FUNC_9(VAR_22->addr1)) {
  VAR_18->flags &= ~VAR_10;
  VAR_23->flags |= VAR_7;
 } else
  VAR_18->flags |= VAR_10;

 if (!(VAR_23->flags & VAR_4)) {
  if (!(VAR_18->flags & VAR_10) ||
      VAR_20->len + VAR_1 <= VAR_21->hw.wiphy->frag_threshold ||
      VAR_23->flags & VAR_2)
   VAR_23->flags |= VAR_4;
 }

 if (!VAR_18->sta)
  VAR_23->flags |= VAR_3;
 else if (FUNC_15(VAR_18->sta, VAR_16)) {
  VAR_23->flags |= VAR_3;
  FUNC_3(VAR_18->sta);
 }

 VAR_23->flags |= VAR_5;

 return VAR_13;
}

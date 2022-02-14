
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ u16 ;
typedef int txrc ;
struct sk_buff {int len; scalar_t__ data; } ;
struct ieee80211_vif {int dummy; } ;
struct TYPE_13__ {int idx; } ;
struct ieee80211_tx_rate_control {int bss; int rate_idx_mask; TYPE_4__ reported_rate; struct sk_buff* skb; int * bss_conf; int sband; struct ieee80211_hw* hw; scalar_t__* csa_counter_offs; scalar_t__ tim_length; scalar_t__ tim_offset; } ;
struct TYPE_14__ {struct ieee80211_vif* vif; } ;
struct ieee80211_tx_info {int flags; int band; TYPE_5__ control; } ;
struct TYPE_18__ {scalar_t__ type; int bss_conf; int chanctx_conf; } ;
struct ieee80211_if_mesh {int ps; TYPE_7__* sync_ops; int beacon; } ;
struct ieee80211_if_ibss {int presp; } ;
struct ieee80211_if_ap {int ps; int beacon; } ;
struct TYPE_15__ {struct ieee80211_if_mesh mesh; struct ieee80211_if_ibss ibss; struct ieee80211_if_ap ap; } ;
struct ieee80211_sub_if_data {int * rc_rateidx_mask; TYPE_9__ vif; TYPE_6__ u; } ;
struct ieee80211_mutable_offsets {int bss; int rate_idx_mask; TYPE_4__ reported_rate; struct sk_buff* skb; int * bss_conf; int sband; struct ieee80211_hw* hw; scalar_t__* csa_counter_offs; scalar_t__ tim_length; scalar_t__ tim_offset; } ;
struct TYPE_17__ {TYPE_3__* wiphy; scalar_t__ extra_beacon_tailroom; } ;
struct ieee80211_local {TYPE_8__ hw; scalar_t__ tx_headroom; } ;
struct ieee80211_hw {int dummy; } ;
struct ieee80211_hdr {int frame_control; } ;
struct TYPE_11__ {TYPE_1__* chan; } ;
struct ieee80211_chanctx_conf {TYPE_2__ def; } ;
struct beacon_data {scalar_t__* csa_counter_offsets; scalar_t__ tail_len; scalar_t__ tail; scalar_t__ head_len; scalar_t__ head; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_16__ {int (* adjust_tsf ) (struct ieee80211_sub_if_data*,struct beacon_data*) ;} ;
struct TYPE_12__ {int * bands; } ;
struct TYPE_10__ {int band; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct beacon_data*) ;
 int FUNC_3 (int) ;
 struct sk_buff* FUNC_4 (scalar_t__) ;
 struct ieee80211_local* FUNC_5 (struct ieee80211_hw*) ;
 int FUNC_6 (struct ieee80211_sub_if_data*,int *,struct sk_buff*,int) ;
 int FUNC_7 (struct ieee80211_sub_if_data*) ;
 int FUNC_8 (struct ieee80211_sub_if_data*,struct beacon_data*) ;
 scalar_t__ FUNC_9 (TYPE_9__*) ;
 int FUNC_10 (struct ieee80211_tx_rate_control*,int ,int) ;
 int FUNC_11 (struct ieee80211_sub_if_data*,int *,struct ieee80211_tx_rate_control*) ;
 void* FUNC_12 (int ) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (struct sk_buff*,scalar_t__,scalar_t__) ;
 int FUNC_16 (struct sk_buff*,scalar_t__) ;
 int FUNC_17 (struct ieee80211_sub_if_data*,struct beacon_data*) ;
 struct ieee80211_sub_if_data* FUNC_18 (struct ieee80211_vif*) ;

__attribute__((used)) static struct sk_buff *
FUNC_19(struct ieee80211_hw *VAR_10,
         struct ieee80211_vif *VAR_11,
         struct ieee80211_mutable_offsets *VAR_12,
         bool VAR_13)
{
 struct ieee80211_local *VAR_14 = FUNC_5(VAR_10);
 struct beacon_data *VAR_15 = ((void*)0);
 struct sk_buff *VAR_16 = ((void*)0);
 struct ieee80211_tx_info *VAR_17;
 struct ieee80211_sub_if_data *VAR_18 = ((void*)0);
 enum nl80211_band VAR_19;
 struct ieee80211_tx_rate_control VAR_20;
 struct ieee80211_chanctx_conf *VAR_21;
 int VAR_22 = 0;

 FUNC_13();

 VAR_18 = FUNC_18(VAR_11);
 VAR_21 = FUNC_12(VAR_18->vif.chanctx_conf);

 if (!FUNC_7(VAR_18) || !VAR_21)
  goto out;

 if (VAR_12)
  FUNC_10(VAR_12, 0, sizeof(*VAR_12));

 if (VAR_18->vif.type == VAR_9) {
  struct ieee80211_if_ap *VAR_23 = &VAR_18->u.ap;

  VAR_15 = FUNC_12(VAR_23->beacon);
  if (VAR_15) {
   if (VAR_15->csa_counter_offsets[0]) {
    if (!VAR_13)
     FUNC_2(VAR_15);

    FUNC_8(VAR_18, VAR_15);
   }





   VAR_16 = FUNC_4(VAR_14->tx_headroom +
         VAR_15->head_len +
         VAR_15->tail_len + 256 +
         VAR_14->hw.extra_beacon_tailroom);
   if (!VAR_16)
    goto out;

   FUNC_16(VAR_16, VAR_14->tx_headroom);
   FUNC_15(VAR_16, VAR_15->head, VAR_15->head_len);

   FUNC_6(VAR_18, &VAR_23->ps, VAR_16,
       VAR_13);

   if (VAR_12) {
    VAR_12->tim_offset = VAR_15->head_len;
    VAR_12->tim_length = VAR_16->len - VAR_15->head_len;


    VAR_22 = VAR_16->len;
   }

   if (VAR_15->tail)
    FUNC_15(VAR_16, VAR_15->tail,
          VAR_15->tail_len);
  } else
   goto out;
 } else if (VAR_18->vif.type == VAR_8) {
  struct ieee80211_if_ibss *VAR_24 = &VAR_18->u.ibss;
  struct ieee80211_hdr *VAR_25;

  VAR_15 = FUNC_12(VAR_24->presp);
  if (!VAR_15)
   goto out;

  if (VAR_15->csa_counter_offsets[0]) {
   if (!VAR_13)
    FUNC_2(VAR_15);

   FUNC_8(VAR_18, VAR_15);
  }

  VAR_16 = FUNC_4(VAR_14->tx_headroom + VAR_15->head_len +
        VAR_14->hw.extra_beacon_tailroom);
  if (!VAR_16)
   goto out;
  FUNC_16(VAR_16, VAR_14->tx_headroom);
  FUNC_15(VAR_16, VAR_15->head, VAR_15->head_len);

  VAR_25 = (struct ieee80211_hdr *) VAR_16->data;
  VAR_25->frame_control = FUNC_3(VAR_0 |
       VAR_2);
 } else if (FUNC_9(&VAR_18->vif)) {
  struct ieee80211_if_mesh *VAR_26 = &VAR_18->u.mesh;

  VAR_15 = FUNC_12(VAR_26->beacon);
  if (!VAR_15)
   goto out;

  if (VAR_15->csa_counter_offsets[0]) {
   if (!VAR_13)





    FUNC_2(VAR_15);

   FUNC_8(VAR_18, VAR_15);
  }

  if (VAR_26->sync_ops)
   VAR_26->sync_ops->adjust_tsf(VAR_18, VAR_15);

  VAR_16 = FUNC_4(VAR_14->tx_headroom +
        VAR_15->head_len +
        256 +
        VAR_15->tail_len +
        VAR_14->hw.extra_beacon_tailroom);
  if (!VAR_16)
   goto out;
  FUNC_16(VAR_16, VAR_14->tx_headroom);
  FUNC_15(VAR_16, VAR_15->head, VAR_15->head_len);
  FUNC_6(VAR_18, &VAR_26->ps, VAR_16, VAR_13);

  if (VAR_12) {
   VAR_12->tim_offset = VAR_15->head_len;
   VAR_12->tim_length = VAR_16->len - VAR_15->head_len;
  }

  FUNC_15(VAR_16, VAR_15->tail, VAR_15->tail_len);
 } else {
  FUNC_1(1);
  goto out;
 }


 if (VAR_12 && VAR_15) {
  int VAR_27;

  for (VAR_27 = 0; VAR_27 < VAR_1; VAR_27++) {
   u16 VAR_28 = VAR_15->csa_counter_offsets[VAR_27];

   if (!VAR_28)
    continue;

   VAR_12->csa_counter_offs[VAR_27] = VAR_22 + VAR_28;
  }
 }

 VAR_19 = VAR_21->def.chan->band;

 VAR_17 = FUNC_0(VAR_16);

 VAR_17->flags |= VAR_7;
 VAR_17->flags |= VAR_6;
 VAR_17->band = VAR_19;

 FUNC_10(&VAR_20, 0, sizeof(VAR_20));
 VAR_20.hw = VAR_10;
 VAR_20.sband = VAR_14->hw.wiphy->bands[VAR_19];
 VAR_20.bss_conf = &VAR_18->vif.bss_conf;
 VAR_20.skb = VAR_16;
 VAR_20.reported_rate.idx = -1;
 VAR_20.rate_idx_mask = VAR_18->rc_rateidx_mask[VAR_19];
 VAR_20.bss = 1;
 FUNC_11(VAR_18, ((void*)0), &VAR_20);

 VAR_17->control.vif = VAR_11;

 VAR_17->flags |= VAR_4 |
   VAR_3 |
   VAR_5;
 out:
 FUNC_14();
 return VAR_16;

}

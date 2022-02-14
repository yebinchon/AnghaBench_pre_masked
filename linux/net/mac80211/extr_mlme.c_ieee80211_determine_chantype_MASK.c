
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef struct ieee80211_vht_operation {int cap; int basic_mcs_set; int ht_supported; } const ieee80211_vht_operation ;
struct TYPE_8__ {int vht_supported; } ;
struct ieee80211_supported_band {TYPE_2__ vht_cap; int ht_cap; } ;
struct cfg80211_chan_def {scalar_t__ width; scalar_t__ center_freq1; struct ieee80211_channel* chan; } ;
struct TYPE_9__ {struct cfg80211_chan_def chandef; } ;
struct TYPE_10__ {TYPE_3__ bss_conf; } ;
struct ieee80211_if_managed {scalar_t__ flags; } ;
struct TYPE_7__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {TYPE_5__* local; TYPE_4__ vif; TYPE_1__ u; } ;
typedef struct ieee80211_sta_ht_cap {int cap; int basic_mcs_set; int ht_supported; } const ieee80211_sta_ht_cap ;
struct ieee80211_ht_operation {int primary_chan; } ;
struct ieee80211_he_operation {int * optional; int he_oper_params; } ;
struct ieee80211_channel {scalar_t__ center_freq; int band; } ;
typedef int sta_ht_cap ;
struct TYPE_12__ {int wiphy; } ;
struct TYPE_11__ {TYPE_6__ hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct cfg80211_chan_def*,struct cfg80211_chan_def*) ;
 scalar_t__ FUNC_3 (struct cfg80211_chan_def*,struct cfg80211_chan_def*) ;
 int FUNC_4 (int ,struct cfg80211_chan_def*,int ) ;
 int FUNC_5 (struct cfg80211_chan_def*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct ieee80211_sub_if_data*,struct ieee80211_vht_operation const*) ;
 scalar_t__ FUNC_8 (struct cfg80211_chan_def*) ;
 int FUNC_9 (struct ieee80211_ht_operation const*,struct cfg80211_chan_def*) ;
 int FUNC_10 (TYPE_6__*,struct ieee80211_vht_operation const*,struct ieee80211_ht_operation const*,struct cfg80211_chan_def*) ;
 scalar_t__ FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct ieee80211_vht_operation const*,int *,int) ;
 int FUNC_14 (struct cfg80211_chan_def*,int ,int) ;
 int FUNC_15 (struct ieee80211_sub_if_data*,char*,...) ;

__attribute__((used)) static u32
FUNC_16(struct ieee80211_sub_if_data *VAR_9,
        struct ieee80211_supported_band *VAR_10,
        struct ieee80211_channel *VAR_11,
        const struct ieee80211_ht_operation *VAR_12,
        const struct ieee80211_vht_operation *VAR_13,
        const struct ieee80211_he_operation *VAR_14,
        struct cfg80211_chan_def *VAR_15, bool VAR_16)
{
 struct ieee80211_if_managed *VAR_17 = &VAR_9->u.mgd;
 struct cfg80211_chan_def VAR_18;
 struct ieee80211_sta_ht_cap VAR_19;
 u32 VAR_20, VAR_21;

 FUNC_13(&VAR_19, &VAR_10->ht_cap, sizeof(VAR_19));
 FUNC_7(VAR_9, &VAR_19);

 FUNC_14(VAR_15, 0, sizeof(struct cfg80211_chan_def));
 VAR_15->chan = VAR_11;
 VAR_15->width = VAR_8;
 VAR_15->center_freq1 = VAR_11->center_freq;

 if (!VAR_12 || !VAR_19.ht_supported) {
  VAR_21 = VAR_5 | VAR_6;
  goto out;
 }

 VAR_15->width = VAR_7;

 VAR_20 = FUNC_11(VAR_12->primary_chan,
        VAR_11->band);

 if (!VAR_16 && VAR_11->center_freq != VAR_20) {







  FUNC_15(VAR_9,
      "Wrong control channel: center-freq: %d ht-cfreq: %d ht->primary_chan: %d band: %d - Disabling HT\n",
      VAR_11->center_freq, VAR_20,
      VAR_12->primary_chan, VAR_11->band);
  VAR_21 = VAR_5 | VAR_6;
  goto out;
 }


 if (VAR_19.cap & VAR_2) {
  FUNC_9(VAR_12, VAR_15);
 } else {

  VAR_21 = VAR_6;

  VAR_21 |= VAR_3;
  goto out;
 }

 if (!VAR_13 || !VAR_10->vht_cap.vht_supported) {
  VAR_21 = VAR_6;
  goto out;
 }

 VAR_18 = *VAR_15;
 if (!(VAR_17->flags & VAR_4) && VAR_14 &&
     (FUNC_12(VAR_14->he_oper_params) &
      VAR_1)) {
  struct ieee80211_vht_operation VAR_22;





  FUNC_13(&VAR_22, VAR_14->optional, 3);
  VAR_22.basic_mcs_set = FUNC_6(0);

  if (!FUNC_10(&VAR_9->local->hw,
      &VAR_22, VAR_12,
      &VAR_18)) {
   if (!(VAR_17->flags & VAR_4))
    FUNC_15(VAR_9,
        "HE AP VHT information is invalid, disable HE\n");
   VAR_21 = VAR_4;
   goto out;
  }
 } else if (!FUNC_10(&VAR_9->local->hw, VAR_13,
            VAR_12, &VAR_18)) {
  if (!(VAR_17->flags & VAR_6))
   FUNC_15(VAR_9,
       "AP VHT information is invalid, disable VHT\n");
  VAR_21 = VAR_6;
  goto out;
 }

 if (!FUNC_5(&VAR_18)) {
  if (!(VAR_17->flags & VAR_6))
   FUNC_15(VAR_9,
       "AP VHT information is invalid, disable VHT\n");
  VAR_21 = VAR_6;
  goto out;
 }

 if (FUNC_3(VAR_15, &VAR_18)) {
  VAR_21 = 0;
  goto out;
 }

 if (!FUNC_2(VAR_15, &VAR_18)) {
  if (!(VAR_17->flags & VAR_6))
   FUNC_15(VAR_9,
       "AP VHT information doesn't match HT, disable VHT\n");
  VAR_21 = VAR_6;
  goto out;
 }

 *VAR_15 = VAR_18;

 VAR_21 = 0;

out:
 if (VAR_16 &&
     FUNC_3(VAR_15, &VAR_9->vif.bss_conf.chandef))
  return VAR_21;


 if (VAR_21 & VAR_6)
  VAR_18 = *VAR_15;
 while (!FUNC_4(VAR_9->local->hw.wiphy, VAR_15,
     VAR_16 ? 0 :
         VAR_0)) {
  if (FUNC_0(VAR_15->width == VAR_8)) {
   VAR_21 = VAR_5 |
         VAR_6;
   break;
  }

  VAR_21 |= FUNC_8(VAR_15);
 }

 if (VAR_15->width != VAR_18.width && !VAR_16)
  FUNC_15(VAR_9,
      "capabilities/regulatory prevented using AP HT/VHT configuration, downgraded\n");

 FUNC_1(!FUNC_5(VAR_15));
 return VAR_21;
}

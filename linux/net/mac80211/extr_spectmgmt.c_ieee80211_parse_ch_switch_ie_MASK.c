
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ieee802_11_elems {int* max_channel_switch_time; TYPE_3__* mesh_chansw_params_ie; TYPE_2__* ch_switch_ie; TYPE_1__* ext_chansw_ie; struct ieee80211_wide_bw_chansw_ie* wide_bw_chansw_ie; struct ieee80211_sec_chan_offs_ie* sec_chan_offs; } ;
struct ieee80211_wide_bw_chansw_ie {int new_center_freq_seg1; int new_center_freq_seg0; int new_channel_width; } ;
struct ieee80211_vht_operation {int center_freq_seg1_idx; int center_freq_seg0_idx; int chan_width; } ;
struct TYPE_12__ {scalar_t__ width; } ;
struct TYPE_13__ {TYPE_4__ chandef; } ;
struct TYPE_14__ {TYPE_5__ bss_conf; } ;
struct ieee80211_sub_if_data {TYPE_7__* local; TYPE_6__ vif; } ;
struct ieee80211_sec_chan_offs_ie {int sec_chan_offs; } ;
struct ieee80211_ht_operation {int dummy; } ;
struct cfg80211_chan_def {scalar_t__ width; int * chan; } ;
struct ieee80211_csa_ie {int mode; int max_switch_time; struct cfg80211_chan_def chandef; void* reason_code; void* pre_value; int ttl; int count; } ;
struct ieee80211_channel {int flags; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
struct TYPE_16__ {int wiphy; } ;
struct TYPE_15__ {TYPE_8__ hw; } ;
struct TYPE_11__ {int mesh_flags; int mesh_reason; int mesh_pre_value; int mesh_ttl; } ;
struct TYPE_10__ {int mode; int count; int new_ch_num; } ;
struct TYPE_9__ {int mode; int count; int new_ch_num; int * new_operating_class; } ;


 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

 scalar_t__ VAR_11 ;

 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct cfg80211_chan_def*,struct cfg80211_chan_def*) ;
 int FUNC_1 (struct cfg80211_chan_def*,struct ieee80211_channel*,int ) ;
 int FUNC_2 (struct cfg80211_chan_def*) ;
 int FUNC_3 (TYPE_8__*,struct ieee80211_vht_operation*,struct ieee80211_ht_operation*,struct cfg80211_chan_def*) ;
 int FUNC_4 (int ,int) ;
 struct ieee80211_channel* FUNC_5 (int ,int) ;
 int FUNC_6 (int *,int*) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (struct ieee80211_csa_ie*,int ,int) ;
 int FUNC_9 (struct ieee80211_sub_if_data*,char*,int *,...) ;

int FUNC_10(struct ieee80211_sub_if_data *VAR_14,
     struct ieee802_11_elems *VAR_15,
     enum nl80211_band VAR_16,
     u32 VAR_17, u8 *VAR_18,
     struct ieee80211_csa_ie *VAR_19)
{
 enum nl80211_band VAR_20 = VAR_16;
 int VAR_21;
 u8 VAR_22;
 struct ieee80211_channel *VAR_23;
 struct cfg80211_chan_def VAR_24 = {};
 const struct ieee80211_sec_chan_offs_ie *VAR_25;
 const struct ieee80211_wide_bw_chansw_ie *VAR_26;
 int VAR_27 = -1;

 FUNC_8(VAR_19, 0, sizeof(*VAR_19));

 VAR_25 = VAR_15->sec_chan_offs;
 VAR_26 = VAR_15->wide_bw_chansw_ie;

 if (VAR_17 & (VAR_5 |
    VAR_3)) {
  VAR_25 = ((void*)0);
  VAR_26 = ((void*)0);
 }

 if (VAR_17 & VAR_6)
  VAR_26 = ((void*)0);

 if (VAR_15->ext_chansw_ie) {
  if (!FUNC_6(
    VAR_15->ext_chansw_ie->new_operating_class,
    &VAR_20)) {
   FUNC_9(VAR_14,
       "cannot understand ECSA IE operating class, %d, ignoring\n",
       VAR_15->ext_chansw_ie->new_operating_class);
  }
  VAR_22 = VAR_15->ext_chansw_ie->new_ch_num;
  VAR_19->count = VAR_15->ext_chansw_ie->count;
  VAR_19->mode = VAR_15->ext_chansw_ie->mode;
 } else if (VAR_15->ch_switch_ie) {
  VAR_22 = VAR_15->ch_switch_ie->new_ch_num;
  VAR_19->count = VAR_15->ch_switch_ie->count;
  VAR_19->mode = VAR_15->ch_switch_ie->mode;
 } else {

  return 1;
 }


 if (VAR_15->mesh_chansw_params_ie) {
  VAR_19->ttl = VAR_15->mesh_chansw_params_ie->mesh_ttl;
  VAR_19->mode = VAR_15->mesh_chansw_params_ie->mesh_flags;
  VAR_19->pre_value = FUNC_7(
    VAR_15->mesh_chansw_params_ie->mesh_pre_value);

  if (VAR_15->mesh_chansw_params_ie->mesh_flags &
    VAR_13)
   VAR_19->reason_code = FUNC_7(
    VAR_15->mesh_chansw_params_ie->mesh_reason);
 }

 VAR_21 = FUNC_4(VAR_22, VAR_20);
 VAR_23 = FUNC_5(VAR_14->local->hw.wiphy, VAR_21);
 if (!VAR_23 || VAR_23->flags & VAR_1) {
  FUNC_9(VAR_14,
      "BSS %pM switches to unsupported channel (%d MHz), disconnecting\n",
      VAR_18, VAR_21);
  return -VAR_0;
 }

 if (VAR_25) {
  VAR_27 = VAR_25->sec_chan_offs;
 } else if (!(VAR_17 & VAR_5)) {




  VAR_27 = 130;
 }

 switch (VAR_27) {
 default:

 case 130:
  FUNC_1(&VAR_19->chandef, VAR_23,
     VAR_7);
  break;
 case 132:
  FUNC_1(&VAR_19->chandef, VAR_23,
     VAR_9);
  break;
 case 131:
  FUNC_1(&VAR_19->chandef, VAR_23,
     VAR_8);
  break;
 case -1:
  FUNC_1(&VAR_19->chandef, VAR_23,
     VAR_10);

  switch (VAR_14->vif.bss_conf.chandef.width) {
  case 128:
  case 129:
   VAR_19->chandef.width =
    VAR_14->vif.bss_conf.chandef.width;
   break;
  default:
   break;
  }
  break;
 }

 if (VAR_26) {
  struct ieee80211_vht_operation VAR_28 = {
   .chan_width =
    VAR_26->new_channel_width,
   .center_freq_seg0_idx =
    VAR_26->new_center_freq_seg0,
   .center_freq_seg1_idx =
    VAR_26->new_center_freq_seg1,

  };
  struct ieee80211_ht_operation VAR_29 = {};




  VAR_24 = VAR_19->chandef;


  if (!FUNC_3(&VAR_14->local->hw,
      &VAR_28, &VAR_29,
      &VAR_24))
   VAR_24.chan = ((void*)0);

  if (VAR_17 & VAR_4 &&
      VAR_24.width == VAR_12)
   FUNC_2(&VAR_24);
  if (VAR_17 & VAR_2 &&
      VAR_24.width == VAR_11)
   FUNC_2(&VAR_24);
 }


 if (VAR_24.chan) {
  if (!FUNC_0(&VAR_24,
       &VAR_19->chandef)) {
   FUNC_9(VAR_14,
       "BSS %pM: CSA has inconsistent channel data, disconnecting\n",
       VAR_18);
   return -VAR_0;
  }
  VAR_19->chandef = VAR_24;
 }

 if (VAR_15->max_channel_switch_time)
  VAR_19->max_switch_time =
   (VAR_15->max_channel_switch_time[0] << 0) |
   (VAR_15->max_channel_switch_time[1] << 8) |
   (VAR_15->max_channel_switch_time[2] << 16);

 return 0;
}

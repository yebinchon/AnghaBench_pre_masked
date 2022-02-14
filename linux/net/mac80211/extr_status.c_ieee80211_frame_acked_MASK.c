
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


typedef int u8 ;
typedef int u16 ;
struct TYPE_8__ {int ack_signal_filled; int avg_ack_signal; scalar_t__ last_ack_signal; int last_ack; } ;
struct sta_info {int known_smps_mode; TYPE_1__ status_stats; struct ieee80211_sub_if_data* sdata; struct ieee80211_local* local; } ;
struct sk_buff {scalar_t__ data; } ;
struct TYPE_9__ {scalar_t__ ack_signal; scalar_t__ is_valid_ack_signal; } ;
struct ieee80211_tx_info {TYPE_2__ status; } ;
struct TYPE_14__ {scalar_t__ type; } ;
struct ieee80211_sub_if_data {int smps_mode; TYPE_7__ vif; int recalc_smps; } ;
struct TYPE_10__ {scalar_t__ action; int smps_control; } ;
struct TYPE_11__ {TYPE_3__ ht_smps; } ;
struct TYPE_12__ {scalar_t__ category; TYPE_4__ u; } ;
struct TYPE_13__ {TYPE_5__ action; } ;
struct ieee80211_mgmt {TYPE_6__ u; int frame_control; } ;
struct ieee80211_local {int hw; } ;
struct ieee80211_hdr {int addr1; } ;
typedef scalar_t__ s8 ;
typedef enum ieee80211_smps_mode { ____Placeholder_ieee80211_smps_mode } ieee80211_smps_mode ;


 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;



 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (struct sta_info*,int ,int) ;
 int* FUNC_3 (struct ieee80211_hdr*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *,int *) ;
 scalar_t__ FUNC_9 (struct ieee80211_sub_if_data*) ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_10(struct sta_info *VAR_10, struct sk_buff *VAR_11)
{
 struct ieee80211_mgmt *VAR_12 = (void *) VAR_11->data;
 struct ieee80211_local *VAR_13 = VAR_10->local;
 struct ieee80211_sub_if_data *VAR_14 = VAR_10->sdata;
 struct ieee80211_tx_info *VAR_15 = FUNC_0(VAR_11);

 if (FUNC_5(&VAR_13->hw, VAR_6)) {
  VAR_10->status_stats.last_ack = VAR_9;
  if (VAR_15->status.is_valid_ack_signal) {
   VAR_10->status_stats.last_ack_signal =
      (s8)VAR_15->status.ack_signal;
   VAR_10->status_stats.ack_signal_filled = 1;
   FUNC_1(&VAR_10->status_stats.avg_ack_signal,
         -VAR_15->status.ack_signal);
  }
 }

 if (FUNC_7(VAR_12->frame_control)) {
  struct ieee80211_hdr *VAR_16 = (void *) VAR_11->data;
  u8 *VAR_17 = FUNC_3(VAR_16);
  u16 VAR_18 = VAR_17[0] & 0xf;

  FUNC_2(VAR_10, VAR_16->addr1, VAR_18);
 }

 if (FUNC_6(VAR_12->frame_control) &&
     !FUNC_4(VAR_12->frame_control) &&
     VAR_12->u.action.category == VAR_7 &&
     VAR_12->u.action.u.ht_smps.action == VAR_8 &&
     FUNC_9(VAR_14)) {
  enum ieee80211_smps_mode VAR_19;

  switch (VAR_12->u.action.u.ht_smps.smps_control) {
  case 129:
   VAR_19 = VAR_0;
   break;
  case 128:
   VAR_19 = VAR_2;
   break;
  case 130:
  default:
   VAR_19 = VAR_1;
   break;
  }

  if (VAR_14->vif.type == VAR_5) {







   VAR_14->smps_mode = VAR_19;
   FUNC_8(&VAR_13->hw, &VAR_14->recalc_smps);
  } else if (VAR_14->vif.type == VAR_3 ||
      VAR_14->vif.type == VAR_4) {
   VAR_10->known_smps_mode = VAR_19;
  }
 }
}

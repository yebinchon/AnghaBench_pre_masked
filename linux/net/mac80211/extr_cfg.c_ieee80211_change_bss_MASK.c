
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct wiphy {int * bands; } ;
struct net_device {int dummy; } ;
struct ieee80211_supported_band {scalar_t__ band; } ;
struct TYPE_8__ {int oppps_ctwindow; } ;
struct TYPE_9__ {scalar_t__ use_cts_prot; scalar_t__ use_short_preamble; int use_short_slot; TYPE_3__ p2p_noa_attr; scalar_t__ ht_operation_mode; int basic_rates; int chandef; } ;
struct TYPE_10__ {TYPE_4__ bss_conf; } ;
struct TYPE_6__ {int beacon; } ;
struct TYPE_7__ {TYPE_1__ ap; } ;
struct ieee80211_sub_if_data {TYPE_5__ vif; int flags; TYPE_2__ u; } ;
struct bss_parameters {scalar_t__ use_cts_prot; scalar_t__ use_short_preamble; int use_short_slot_time; scalar_t__ ap_isolate; scalar_t__ ht_opmode; int p2p_ctwindow; scalar_t__ p2p_opp_ps; int basic_rates_len; scalar_t__ basic_rates; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct ieee80211_sub_if_data* FUNC_0 (struct net_device*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_1 (struct ieee80211_sub_if_data*,int ) ;
 int FUNC_2 (struct ieee80211_sub_if_data*) ;
 int FUNC_3 (struct ieee80211_sub_if_data*) ;
 struct ieee80211_supported_band* FUNC_4 (struct ieee80211_sub_if_data*) ;
 int FUNC_5 (int *,int ,scalar_t__,int ,int *) ;
 int FUNC_6 (int ,struct ieee80211_sub_if_data*) ;

__attribute__((used)) static int FUNC_7(struct wiphy *VAR_12,
    struct net_device *VAR_13,
    struct bss_parameters *VAR_14)
{
 struct ieee80211_sub_if_data *VAR_15 = FUNC_0(VAR_13);
 struct ieee80211_supported_band *VAR_16;
 u32 VAR_17 = 0;

 if (!FUNC_6(VAR_15->u.ap.beacon, VAR_15))
  return -VAR_7;

 VAR_16 = FUNC_4(VAR_15);
 if (!VAR_16)
  return -VAR_6;

 if (VAR_14->use_cts_prot >= 0) {
  VAR_15->vif.bss_conf.use_cts_prot = VAR_14->use_cts_prot;
  VAR_17 |= VAR_1;
 }
 if (VAR_14->use_short_preamble >= 0) {
  VAR_15->vif.bss_conf.use_short_preamble =
   VAR_14->use_short_preamble;
  VAR_17 |= VAR_2;
 }

 if (!VAR_15->vif.bss_conf.use_short_slot &&
     VAR_16->band == VAR_11) {
  VAR_15->vif.bss_conf.use_short_slot = 1;
  VAR_17 |= VAR_3;
 }

 if (VAR_14->use_short_slot_time >= 0) {
  VAR_15->vif.bss_conf.use_short_slot =
   VAR_14->use_short_slot_time;
  VAR_17 |= VAR_3;
 }

 if (VAR_14->basic_rates) {
  FUNC_5(&VAR_15->vif.bss_conf.chandef,
      VAR_12->bands[VAR_16->band],
      VAR_14->basic_rates,
      VAR_14->basic_rates_len,
      &VAR_15->vif.bss_conf.basic_rates);
  VAR_17 |= VAR_0;
  FUNC_3(VAR_15);
 }

 if (VAR_14->ap_isolate >= 0) {
  if (VAR_14->ap_isolate)
   VAR_15->flags |= VAR_10;
  else
   VAR_15->flags &= ~VAR_10;
  FUNC_2(VAR_15);
 }

 if (VAR_14->ht_opmode >= 0) {
  VAR_15->vif.bss_conf.ht_operation_mode =
   (u16) VAR_14->ht_opmode;
  VAR_17 |= VAR_4;
 }

 if (VAR_14->p2p_ctwindow >= 0) {
  VAR_15->vif.bss_conf.p2p_noa_attr.oppps_ctwindow &=
     ~VAR_8;
  VAR_15->vif.bss_conf.p2p_noa_attr.oppps_ctwindow |=
   VAR_14->p2p_ctwindow & VAR_8;
  VAR_17 |= VAR_5;
 }

 if (VAR_14->p2p_opp_ps > 0) {
  VAR_15->vif.bss_conf.p2p_noa_attr.oppps_ctwindow |=
     VAR_9;
  VAR_17 |= VAR_5;
 } else if (VAR_14->p2p_opp_ps == 0) {
  VAR_15->vif.bss_conf.p2p_noa_attr.oppps_ctwindow &=
     ~VAR_9;
  VAR_17 |= VAR_5;
 }

 FUNC_1(VAR_15, VAR_17);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct sta_info {int dummy; } ;
struct ieee802_11_elems {int ext_capab_len; int* ext_capab; int cisco_dtpc_elem; int pwr_constr_elem; int country_elem_len; int country_elem; int * opmode_notif; int he_operation; int vht_operation; int ht_operation; int ht_cap_elem; int * erp_info; scalar_t__ dtim_period; int mu_edca_param_set; int wmm_param_len; int wmm_param; int dtim_count; int tim_len; int tim; TYPE_1__* mbssid_config_ie; } ;
struct ieee80211_bss_conf {int ema_ap; int dtim_period; int sync_dtim_count; int sync_device_ts; void* sync_tsf; int p2p_noa_attr; int profile_periodicity; } ;
struct TYPE_18__ {int driver_flags; struct ieee80211_bss_conf bss_conf; scalar_t__ p2p; int chanctx_conf; } ;
struct ieee80211_if_managed {int have_beacon; int flags; scalar_t__ p2p_noa_index; int beacon_crc_valid; scalar_t__ beacon_crc; scalar_t__ csa_waiting_bcn; scalar_t__ powersave; int aid; TYPE_9__* associated; TYPE_2__* assoc_data; scalar_t__ dtim_period; } ;
struct TYPE_15__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {TYPE_7__ vif; TYPE_4__ u; struct ieee80211_local* local; } ;
struct ieee80211_rx_status {scalar_t__ freq; int flag; int band; int device_timestamp; int mactime; } ;
struct ieee80211_p2p_noa_attr {scalar_t__ index; } ;
struct TYPE_16__ {int capab_info; int timestamp; scalar_t__ variable; int beacon_int; } ;
struct TYPE_17__ {TYPE_5__ beacon; } ;
struct ieee80211_mgmt {TYPE_6__ u; int bssid; } ;
struct TYPE_14__ {scalar_t__ dynamic_ps_timeout; int flags; } ;
struct TYPE_11__ {TYPE_3__ conf; } ;
struct ieee80211_local {int pspolling; int sta_mtx; int iflist_mtx; TYPE_10__ hw; } ;
struct ieee80211_channel {scalar_t__ center_freq; } ;
struct TYPE_19__ {struct ieee80211_channel* chan; } ;
struct ieee80211_chanctx_conf {TYPE_8__ def; } ;
typedef int noa ;
typedef int deauth_buf ;
struct TYPE_20__ {int * bssid; } ;
struct TYPE_13__ {int need_beacon; int timeout_started; int timeout; TYPE_9__* bss; } ;
struct TYPE_12__ {int profile_periodicity; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (scalar_t__,size_t,int ,int *,int) ;
 scalar_t__ FUNC_1 (int ,void*,int) ;
 int FUNC_2 (struct ieee80211_sub_if_data*,scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct ieee80211_sub_if_data*) ;
 scalar_t__ FUNC_5 (struct ieee80211_sub_if_data*,struct sta_info*,int ,int ,int ,int ,int *,scalar_t__*) ;
 int FUNC_6 (struct ieee80211_sub_if_data*,struct ieee80211_if_managed*,struct ieee80211_bss_conf*,struct ieee80211_local*,struct ieee80211_rx_status*) ;
 scalar_t__ FUNC_7 (struct ieee80211_sub_if_data*,int ,int,int ) ;
 scalar_t__ FUNC_8 (struct ieee80211_sub_if_data*,struct ieee80211_channel*,struct ieee80211_mgmt*,int ,int ,int ,int ) ;
 scalar_t__ FUNC_9 (TYPE_10__*,int ) ;
 int FUNC_10 (struct ieee80211_local*,int ) ;
 int FUNC_11 (struct ieee80211_local*) ;
 int FUNC_12 (struct ieee80211_sub_if_data*) ;
 scalar_t__ FUNC_13 (struct ieee80211_sub_if_data*,struct sta_info*,struct ieee802_11_elems*) ;
 int FUNC_14 (struct ieee80211_sub_if_data*,int *,int,int,int ) ;
 int FUNC_15 (struct ieee80211_sub_if_data*) ;
 int FUNC_16 (struct ieee80211_sub_if_data*,struct ieee80211_mgmt*,size_t,struct ieee80211_rx_status*) ;
 scalar_t__ FUNC_17 (int ,TYPE_9__*) ;
 int FUNC_18 (struct ieee80211_local*,struct ieee80211_sub_if_data*,int) ;
 int FUNC_19 (struct ieee80211_local*,struct ieee80211_sub_if_data*) ;
 int FUNC_20 (struct ieee80211_sub_if_data*,int ,int ,int,int *) ;
 int FUNC_21 (struct ieee80211_sub_if_data*,int ,int ,struct ieee802_11_elems*,int) ;
 int FUNC_22 (struct ieee80211_sub_if_data*) ;
 scalar_t__ FUNC_23 (struct ieee80211_local*,struct ieee80211_sub_if_data*,int ,int ,int ) ;
 int FUNC_24 (struct ieee80211_sub_if_data*,struct sta_info*,int ,int ) ;
 int FUNC_25 (scalar_t__,size_t,int,struct ieee802_11_elems*,int ,int *) ;
 scalar_t__ FUNC_26 (scalar_t__,size_t,int,struct ieee802_11_elems*,int ,scalar_t__,int ,int *) ;
 int VAR_17 ;
 int FUNC_27 (int ) ;
 void* FUNC_28 (int ) ;
 int FUNC_29 (int *,struct ieee80211_p2p_noa_attr*,int) ;
 int FUNC_30 (int *,int ,int) ;
 int FUNC_31 (struct ieee80211_sub_if_data*,char*) ;
 int FUNC_32 (int *) ;
 int FUNC_33 (int *) ;
 struct ieee80211_chanctx_conf* FUNC_34 (int ) ;
 int FUNC_35 () ;
 int FUNC_36 () ;
 int FUNC_37 (struct ieee80211_sub_if_data*,int ) ;
 int FUNC_38 (struct ieee80211_sub_if_data*) ;
 int FUNC_39 (struct ieee80211_sub_if_data*,char*,int *) ;
 struct sta_info* FUNC_40 (struct ieee80211_sub_if_data*,int *) ;

__attribute__((used)) static void FUNC_41(struct ieee80211_sub_if_data *VAR_18,
         struct ieee80211_mgmt *VAR_19, size_t VAR_20,
         struct ieee80211_rx_status *VAR_21)
{
 struct ieee80211_if_managed *VAR_22 = &VAR_18->u.mgd;
 struct ieee80211_bss_conf *VAR_23 = &VAR_18->vif.bss_conf;
 size_t VAR_24;
 struct ieee802_11_elems VAR_25;
 struct ieee80211_local *VAR_26 = VAR_18->local;
 struct ieee80211_chanctx_conf *VAR_27;
 struct ieee80211_channel *VAR_28;
 struct sta_info *VAR_29;
 u32 VAR_30 = 0;
 bool VAR_31;
 u8 VAR_32 = 0;
 u32 VAR_33;
 u8 *VAR_34;
 u8 VAR_35[VAR_5];

 FUNC_38(VAR_18);


 VAR_24 = (u8 *) VAR_19->u.beacon.variable - (u8 *) VAR_19;
 if (VAR_24 > VAR_20)
  return;

 FUNC_35();
 VAR_27 = FUNC_34(VAR_18->vif.chanctx_conf);
 if (!VAR_27) {
  FUNC_36();
  return;
 }

 if (VAR_21->freq != VAR_27->def.chan->center_freq) {
  FUNC_36();
  return;
 }
 VAR_28 = VAR_27->def.chan;
 FUNC_36();

 if (VAR_22->assoc_data && VAR_22->assoc_data->need_beacon &&
     FUNC_17(VAR_19->bssid, VAR_22->assoc_data->bss)) {
  FUNC_25(VAR_19->u.beacon.variable,
           VAR_20 - VAR_24, 0, &VAR_25,
           VAR_19->bssid,
           VAR_22->assoc_data->bss->bssid);

  FUNC_16(VAR_18, VAR_19, VAR_20, VAR_21);

  if (VAR_25.dtim_period)
   VAR_22->dtim_period = VAR_25.dtim_period;
  VAR_22->have_beacon = 1;
  VAR_22->assoc_data->need_beacon = 0;
  if (FUNC_9(&VAR_26->hw, VAR_13)) {
   VAR_18->vif.bss_conf.sync_tsf =
    FUNC_28(VAR_19->u.beacon.timestamp);
   VAR_18->vif.bss_conf.sync_device_ts =
    VAR_21->device_timestamp;
   VAR_18->vif.bss_conf.sync_dtim_count = VAR_25.dtim_count;
  }

  if (VAR_25.mbssid_config_ie)
   VAR_23->profile_periodicity =
    VAR_25.mbssid_config_ie->profile_periodicity;

  if (VAR_25.ext_capab_len >= 11 &&
      (VAR_25.ext_capab[10] & VAR_14))
   VAR_23->ema_ap = 1;


  VAR_22->assoc_data->timeout = VAR_17;
  VAR_22->assoc_data->timeout_started = 1;
  FUNC_37(VAR_18, VAR_22->assoc_data->timeout);
  return;
 }

 if (!VAR_22->associated ||
     !FUNC_17(VAR_19->bssid, VAR_22->associated))
  return;
 VAR_34 = VAR_22->associated->bssid;

 if (!(VAR_21->flag & VAR_12))
  FUNC_6(VAR_18, VAR_22, VAR_23,
         VAR_26, VAR_21);

 if (VAR_22->flags & VAR_7) {
  FUNC_31(VAR_18,
         "cancelling AP probe due to a received beacon\n");
  FUNC_15(VAR_18);
 }





 FUNC_22(VAR_18);

 VAR_33 = FUNC_1(0, (void *)&VAR_19->u.beacon.beacon_int, 4);
 VAR_33 = FUNC_26(VAR_19->u.beacon.variable,
       VAR_20 - VAR_24, 0, &VAR_25,
       VAR_16, VAR_33,
       VAR_19->bssid, VAR_34);

 if (FUNC_9(&VAR_26->hw, VAR_11) &&
     FUNC_3(VAR_25.tim, VAR_25.tim_len, VAR_22->aid)) {
  if (VAR_26->hw.conf.dynamic_ps_timeout > 0) {
   if (VAR_26->hw.conf.flags & VAR_4) {
    VAR_26->hw.conf.flags &= ~VAR_4;
    FUNC_10(VAR_26,
          VAR_3);
   }
   FUNC_18(VAR_26, VAR_18, 0);
  } else if (!VAR_26->pspolling && VAR_18->u.mgd.powersave) {
   VAR_26->pspolling = 1;
   FUNC_19(VAR_26, VAR_18);
  }
 }

 if (VAR_18->vif.p2p ||
     VAR_18->vif.driver_flags & VAR_10) {
  struct ieee80211_p2p_noa_attr VAR_36 = {};
  int VAR_37;

  VAR_37 = FUNC_0(VAR_19->u.beacon.variable,
         VAR_20 - VAR_24,
         VAR_6,
         (u8 *) &VAR_36, sizeof(VAR_36));
  if (VAR_37 >= 2) {
   if (VAR_18->u.mgd.p2p_noa_index != VAR_36.index) {

    VAR_18->u.mgd.p2p_noa_index = VAR_36.index;
    FUNC_29(&VAR_23->p2p_noa_attr, &VAR_36, sizeof(VAR_36));
    VAR_30 |= VAR_1;




    VAR_22->beacon_crc_valid = 0;
   }
  } else if (VAR_18->u.mgd.p2p_noa_index != -1) {

   VAR_18->u.mgd.p2p_noa_index = -1;
   FUNC_30(&VAR_23->p2p_noa_attr, 0, sizeof(VAR_23->p2p_noa_attr));
   VAR_30 |= VAR_1;
   VAR_22->beacon_crc_valid = 0;
  }
 }

 if (VAR_22->csa_waiting_bcn)
  FUNC_4(VAR_18);
 if (FUNC_9(&VAR_26->hw, VAR_13)) {
  VAR_18->vif.bss_conf.sync_tsf =
   FUNC_28(VAR_19->u.beacon.timestamp);
  VAR_18->vif.bss_conf.sync_device_ts =
   VAR_21->device_timestamp;
  VAR_18->vif.bss_conf.sync_dtim_count = VAR_25.dtim_count;
 }

 if (VAR_33 == VAR_22->beacon_crc && VAR_22->beacon_crc_valid)
  return;
 VAR_22->beacon_crc = VAR_33;
 VAR_22->beacon_crc_valid = 1;

 FUNC_16(VAR_18, VAR_19, VAR_20, VAR_21);

 FUNC_21(VAR_18, VAR_21->mactime,
      VAR_21->device_timestamp,
      &VAR_25, 1);

 if (!(VAR_22->flags & VAR_8) &&
     FUNC_23(VAR_26, VAR_18, VAR_25.wmm_param,
         VAR_25.wmm_param_len,
         VAR_25.mu_edca_param_set))
  VAR_30 |= VAR_2;





 if (!VAR_22->have_beacon) {

  VAR_23->dtim_period = VAR_25.dtim_period ?: 1;

  VAR_30 |= VAR_0;
  VAR_22->have_beacon = 1;

  FUNC_32(&VAR_26->iflist_mtx);
  FUNC_11(VAR_26);
  FUNC_33(&VAR_26->iflist_mtx);

  FUNC_12(VAR_18);
 }

 if (VAR_25.erp_info) {
  VAR_31 = 1;
  VAR_32 = VAR_25.erp_info[0];
 } else {
  VAR_31 = 0;
 }
 VAR_30 |= FUNC_7(VAR_18,
   FUNC_27(VAR_19->u.beacon.capab_info),
   VAR_31, VAR_32);

 FUNC_32(&VAR_26->sta_mtx);
 VAR_29 = FUNC_40(VAR_18, VAR_34);

 VAR_30 |= FUNC_13(VAR_18, VAR_29, &VAR_25);

 if (FUNC_5(VAR_18, VAR_29,
    VAR_25.ht_cap_elem, VAR_25.ht_operation,
    VAR_25.vht_operation, VAR_25.he_operation,
    VAR_34, &VAR_30)) {
  FUNC_33(&VAR_26->sta_mtx);
  FUNC_39(VAR_18,
      "failed to follow AP %pM bandwidth change, disconnect\n",
      VAR_34);
  FUNC_20(VAR_18, VAR_9,
           VAR_15,
           1, VAR_35);
  FUNC_14(VAR_18, VAR_35,
         sizeof(VAR_35), 1,
         VAR_15);
  return;
 }

 if (VAR_29 && VAR_25.opmode_notif)
  FUNC_24(VAR_18, VAR_29, *VAR_25.opmode_notif,
         VAR_21->band);
 FUNC_33(&VAR_26->sta_mtx);

 VAR_30 |= FUNC_8(VAR_18, VAR_28, VAR_19,
            VAR_25.country_elem,
            VAR_25.country_elem_len,
            VAR_25.pwr_constr_elem,
            VAR_25.cisco_dtpc_elem);

 FUNC_2(VAR_18, VAR_30);
}

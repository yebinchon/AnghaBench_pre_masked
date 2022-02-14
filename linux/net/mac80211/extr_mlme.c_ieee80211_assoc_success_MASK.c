
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_9__ ;
typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_13__ ;
typedef struct TYPE_15__ TYPE_11__ ;
typedef struct TYPE_14__ TYPE_10__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_21__ {int* mac_cap_info; } ;
struct TYPE_22__ {int has_he; TYPE_5__ he_cap_elem; } ;
struct TYPE_25__ {int rx_nss; int mfp; int wme; int addr; TYPE_6__ he_cap; } ;
struct sta_info {TYPE_9__ sta; } ;
struct ieee802_11_elems {int* ext_capab; int ext_capab_len; int* opmode_notif; TYPE_10__* max_idle_period_ie; int mu_edca_param_set; int wmm_param_len; scalar_t__ wmm_param; int he_spr; TYPE_13__* he_operation; int * uora_element; int he_cap_len; scalar_t__ he_cap; scalar_t__ vht_cap_elem; scalar_t__ ht_cap_elem; scalar_t__ vht_operation; scalar_t__ ht_operation; int supp_rates; } ;
struct ieee80211_supported_band {int dummy; } ;
struct ieee80211_bss_conf {int he_support; int twt_requester; int multi_sta_back_32bit; int ack_enabled; int uora_exists; int nontransmitted; int protected_keep_alive; int aid; int assoc_capability; void* max_idle_period; int bssid_index; int bssid_indicator; int transmitter_bssid; int uora_ocw_range; void* frame_time_rts_th; void* htc_trig_based_pkt_ext; void* bss_color; } ;
struct TYPE_15__ {struct ieee80211_bss_conf bss_conf; } ;
struct ieee80211_if_managed {int broken_ap; int aid; int tdls_chan_switch_prohibited; int flags; int wmm_last_param_set; int mu_edca_last_param_set; scalar_t__ use_4addr; struct ieee80211_mgd_assoc_data* assoc_data; } ;
struct TYPE_17__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {struct ieee80211_local* local; TYPE_11__ vif; TYPE_1__ u; } ;
struct TYPE_18__ {int* variable; int capab_info; int aid; } ;
struct TYPE_19__ {TYPE_2__ assoc_resp; } ;
struct ieee80211_mgmt {int bssid; TYPE_3__ u; } ;
struct ieee80211_mgd_assoc_data {scalar_t__ wmm; TYPE_4__* bss; } ;
struct TYPE_24__ {scalar_t__ queues; } ;
struct ieee80211_local {int sta_mtx; TYPE_8__ hw; } ;
struct ieee80211_hdr {int dummy; } ;
struct cfg80211_bss_ies {size_t len; int* data; } ;
struct cfg80211_bss {int bssid_index; int max_bssid_indicator; TYPE_7__* transmitted_bss; int bssid; int ies; } ;
struct TYPE_23__ {int bssid; } ;
struct TYPE_20__ {int bssid; } ;
struct TYPE_16__ {int he_oper_params; } ;
struct TYPE_14__ {int idle_options; int max_idle_period; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_1 (struct sta_info*) ;
 int FUNC_2 (int ,int ) ;
 struct ieee80211_supported_band* FUNC_3 (struct ieee80211_sub_if_data*) ;
 int FUNC_4 (struct ieee80211_sub_if_data*,struct ieee80211_supported_band*,scalar_t__,int ,struct sta_info*) ;
 int FUNC_5 (TYPE_11__*,TYPE_13__*) ;
 int FUNC_6 (TYPE_11__*,int ) ;
 int FUNC_7 (struct ieee80211_sub_if_data*,struct ieee80211_supported_band*,scalar_t__,struct sta_info*) ;
 int FUNC_8 (struct ieee80211_sub_if_data*,struct sta_info*,struct ieee802_11_elems*) ;
 int FUNC_9 (struct ieee80211_local*,struct ieee80211_sub_if_data*) ;
 int FUNC_10 (struct ieee80211_sub_if_data*,struct cfg80211_bss*,int ) ;
 int FUNC_11 (struct ieee80211_sub_if_data*,int,int) ;
 int FUNC_12 (struct ieee80211_sub_if_data*) ;
 int FUNC_13 (struct ieee80211_sub_if_data*,struct ieee80211_hdr*) ;
 int FUNC_14 (struct ieee80211_local*,struct ieee80211_sub_if_data*,scalar_t__,int ,int ) ;
 int FUNC_15 (struct ieee80211_sub_if_data*,struct ieee80211_supported_band*,scalar_t__,struct sta_info*) ;
 int FUNC_16 (int*,size_t,int,struct ieee802_11_elems*,int ,int ) ;
 int FUNC_17 (struct cfg80211_bss_ies const*) ;
 struct cfg80211_bss_ies* FUNC_18 (struct cfg80211_bss_ies const*,size_t,int ) ;
 void* FUNC_19 (int ) ;
 void* FUNC_20 (int ,int ) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (struct sta_info*) ;
 struct cfg80211_bss_ies* FUNC_24 (int ) ;
 int FUNC_25 () ;
 int FUNC_26 () ;
 int FUNC_27 (struct ieee80211_sub_if_data*,char*,...) ;
 int FUNC_28 (struct sta_info*,int ) ;
 struct sta_info* FUNC_29 (struct ieee80211_sub_if_data*,int ) ;
 int FUNC_30 (struct sta_info*,int ) ;

__attribute__((used)) static bool FUNC_31(struct ieee80211_sub_if_data *VAR_24,
        struct cfg80211_bss *VAR_25,
        struct ieee80211_mgmt *VAR_26, size_t VAR_27)
{
 struct ieee80211_if_managed *VAR_28 = &VAR_24->u.mgd;
 struct ieee80211_local *VAR_29 = VAR_24->local;
 struct ieee80211_supported_band *VAR_30;
 struct sta_info *VAR_31;
 u8 *VAR_32;
 u16 VAR_33, VAR_34;
 struct ieee802_11_elems VAR_35;
 struct ieee80211_bss_conf *VAR_36 = &VAR_24->vif.bss_conf;
 const struct cfg80211_bss_ies *VAR_37 = ((void*)0);
 struct ieee80211_mgd_assoc_data *VAR_38 = VAR_28->assoc_data;
 u32 VAR_39 = 0;
 int VAR_40;
 bool VAR_41;



 VAR_34 = FUNC_19(VAR_26->u.assoc_resp.aid);
 VAR_33 = FUNC_19(VAR_26->u.assoc_resp.capab_info);





 VAR_34 &= 0x7ff;

 VAR_28->broken_ap = 0;

 if (VAR_34 == 0 || VAR_34 > VAR_8) {
  FUNC_27(VAR_24, "invalid AID value %d (out of range), turn off PS\n",
      VAR_34);
  VAR_34 = 0;
  VAR_28->broken_ap = 1;
 }

 VAR_32 = VAR_26->u.assoc_resp.variable;
 FUNC_16(VAR_32, VAR_27 - (VAR_32 - (u8 *)VAR_26), 0, &VAR_35,
          VAR_26->bssid, VAR_38->bss->bssid);

 if (!VAR_35.supp_rates) {
  FUNC_27(VAR_24, "no SuppRates element in AssocResp\n");
  return 0;
 }

 VAR_28->aid = VAR_34;
 VAR_28->tdls_chan_switch_prohibited =
  VAR_35.ext_capab && VAR_35.ext_capab_len >= 5 &&
  (VAR_35.ext_capab[4] & VAR_21);
 if ((VAR_38->wmm && !VAR_35.wmm_param) ||
     (!(VAR_28->flags & VAR_17) &&
      (!VAR_35.ht_cap_elem || !VAR_35.ht_operation)) ||
     (!(VAR_28->flags & VAR_18) &&
      (!VAR_35.vht_cap_elem || !VAR_35.vht_operation))) {
  const struct cfg80211_bss_ies *VAR_42;
  struct ieee802_11_elems VAR_43;

  FUNC_25();
  VAR_42 = FUNC_24(VAR_25->ies);
  if (VAR_42)
   VAR_37 = FUNC_18(VAR_42, sizeof(*VAR_42) + VAR_42->len,
       VAR_2);
  FUNC_26();
  if (!VAR_37)
   return 0;

  FUNC_16(VAR_37->data, VAR_37->len,
           0, &VAR_43,
           VAR_26->bssid,
           VAR_38->bss->bssid);
  if (VAR_38->wmm &&
      !VAR_35.wmm_param && VAR_43.wmm_param) {
   VAR_35.wmm_param = VAR_43.wmm_param;
   FUNC_27(VAR_24,
       "AP bug: WMM param missing from AssocResp\n");
  }





  if (!VAR_35.ht_cap_elem && VAR_43.ht_cap_elem &&
      !(VAR_28->flags & VAR_17)) {
   VAR_35.ht_cap_elem = VAR_43.ht_cap_elem;
   FUNC_27(VAR_24,
       "AP bug: HT capability missing from AssocResp\n");
  }
  if (!VAR_35.ht_operation && VAR_43.ht_operation &&
      !(VAR_28->flags & VAR_17)) {
   VAR_35.ht_operation = VAR_43.ht_operation;
   FUNC_27(VAR_24,
       "AP bug: HT operation missing from AssocResp\n");
  }
  if (!VAR_35.vht_cap_elem && VAR_43.vht_cap_elem &&
      !(VAR_28->flags & VAR_18)) {
   VAR_35.vht_cap_elem = VAR_43.vht_cap_elem;
   FUNC_27(VAR_24,
       "AP bug: VHT capa missing from AssocResp\n");
  }
  if (!VAR_35.vht_operation && VAR_43.vht_operation &&
      !(VAR_28->flags & VAR_18)) {
   VAR_35.vht_operation = VAR_43.vht_operation;
   FUNC_27(VAR_24,
       "AP bug: VHT operation missing from AssocResp\n");
  }
 }





 if (!(VAR_28->flags & VAR_17) &&
     (!VAR_35.wmm_param || !VAR_35.ht_cap_elem || !VAR_35.ht_operation)) {
  FUNC_27(VAR_24,
      "HT AP is missing WMM params or HT capability/operation\n");
  VAR_41 = 0;
  goto out;
 }

 if (!(VAR_28->flags & VAR_18) &&
     (!VAR_35.vht_cap_elem || !VAR_35.vht_operation)) {
  FUNC_27(VAR_24,
      "VHT AP is missing VHT capability/operation\n");
  VAR_41 = 0;
  goto out;
 }

 FUNC_21(&VAR_24->local->sta_mtx);




 VAR_31 = FUNC_29(VAR_24, VAR_25->bssid);
 if (FUNC_0(!VAR_31)) {
  FUNC_22(&VAR_24->local->sta_mtx);
  VAR_41 = 0;
  goto out;
 }

 VAR_30 = FUNC_3(VAR_24);
 if (!VAR_30) {
  FUNC_22(&VAR_24->local->sta_mtx);
  VAR_41 = 0;
  goto out;
 }

 if (!(VAR_28->flags & VAR_16) &&
     (!VAR_35.he_cap || !VAR_35.he_operation)) {
  FUNC_22(&VAR_24->local->sta_mtx);
  FUNC_27(VAR_24,
      "HE AP is missing HE capability/operation\n");
  VAR_41 = 0;
  goto out;
 }


 if (VAR_35.ht_cap_elem && !(VAR_28->flags & VAR_17))
  FUNC_7(VAR_24, VAR_30,
        VAR_35.ht_cap_elem, VAR_31);

 if (VAR_35.vht_cap_elem && !(VAR_28->flags & VAR_18))
  FUNC_15(VAR_24, VAR_30,
          VAR_35.vht_cap_elem, VAR_31);

 if (VAR_35.he_operation && !(VAR_28->flags & VAR_16) &&
     VAR_35.he_cap) {
  FUNC_4(VAR_24, VAR_30,
        VAR_35.he_cap,
        VAR_35.he_cap_len,
        VAR_31);

  VAR_36->he_support = VAR_31->sta.he_cap.has_he;
  VAR_39 |= FUNC_8(VAR_24, VAR_31, &VAR_35);
 } else {
  VAR_36->he_support = 0;
  VAR_36->twt_requester = 0;
 }

 if (VAR_36->he_support) {
  VAR_36->bss_color =
   FUNC_20(VAR_35.he_operation->he_oper_params,
          VAR_5);

  VAR_36->htc_trig_based_pkt_ext =
   FUNC_20(VAR_35.he_operation->he_oper_params,
         VAR_6);
  VAR_36->frame_time_rts_th =
   FUNC_20(VAR_35.he_operation->he_oper_params,
         VAR_7);

  VAR_36->multi_sta_back_32bit =
   VAR_31->sta.he_cap.he_cap_elem.mac_cap_info[2] &
   VAR_3;

  VAR_36->ack_enabled =
   VAR_31->sta.he_cap.he_cap_elem.mac_cap_info[2] &
   VAR_4;

  VAR_36->uora_exists = !!VAR_35.uora_element;
  if (VAR_35.uora_element)
   VAR_36->uora_ocw_range = VAR_35.uora_element[0];

  FUNC_5(&VAR_24->vif, VAR_35.he_operation);
  FUNC_6(&VAR_24->vif, VAR_35.he_spr);

 }

 if (VAR_25->transmitted_bss) {
  VAR_36->nontransmitted = 1;
  FUNC_2(VAR_36->transmitter_bssid,
    VAR_25->transmitted_bss->bssid);
  VAR_36->bssid_indicator = VAR_25->max_bssid_indicator;
  VAR_36->bssid_index = VAR_25->bssid_index;
 }
 if (VAR_35.opmode_notif &&
     !(*VAR_35.opmode_notif & VAR_12)) {
  u8 VAR_44;

  VAR_44 = *VAR_35.opmode_notif & VAR_10;
  VAR_44 >>= VAR_11;
  VAR_44 += 1;
  VAR_31->sta.rx_nss = VAR_44;
 }

 FUNC_23(VAR_31);

 if (VAR_28->flags & VAR_20) {
  FUNC_28(VAR_31, VAR_23);
  VAR_31->sta.mfp = 1;
 } else {
  VAR_31->sta.mfp = 0;
 }

 VAR_31->sta.wme = VAR_35.wmm_param && VAR_29->hw.queues >= VAR_9;

 VAR_40 = FUNC_30(VAR_31, VAR_13);
 if (!VAR_40 && !(VAR_28->flags & VAR_15))
  VAR_40 = FUNC_30(VAR_31, VAR_14);
 if (VAR_40) {
  FUNC_27(VAR_24,
      "failed to move station %pM to desired state\n",
      VAR_31->sta.addr);
  FUNC_0(FUNC_1(VAR_31));
  FUNC_22(&VAR_24->local->sta_mtx);
  VAR_41 = 0;
  goto out;
 }

 FUNC_22(&VAR_24->local->sta_mtx);







 VAR_28->wmm_last_param_set = -1;
 VAR_28->mu_edca_last_param_set = -1;

 if (VAR_28->flags & VAR_19) {
  FUNC_11(VAR_24, 0, 0);
 } else if (!FUNC_14(VAR_29, VAR_24, VAR_35.wmm_param,
          VAR_35.wmm_param_len,
          VAR_35.mu_edca_param_set)) {

  FUNC_11(VAR_24, 0, 1);







  VAR_28->flags |= VAR_19;
 }
 VAR_39 |= VAR_1;

 if (VAR_35.max_idle_period_ie) {
  VAR_36->max_idle_period =
   FUNC_19(VAR_35.max_idle_period_ie->max_idle_period);
  VAR_36->protected_keep_alive =
   !!(VAR_35.max_idle_period_ie->idle_options &
      VAR_22);
  VAR_39 |= VAR_0;
 } else {
  VAR_36->max_idle_period = 0;
  VAR_36->protected_keep_alive = 0;
 }



 VAR_36->aid = VAR_34;
 VAR_36->assoc_capability = VAR_33;
 FUNC_10(VAR_24, VAR_25, VAR_39);





 if (VAR_28->use_4addr)
  FUNC_9(VAR_29, VAR_24);





 FUNC_13(VAR_24, (struct ieee80211_hdr *)VAR_26);
 FUNC_12(VAR_24);

 VAR_41 = 1;
 out:
 FUNC_17(VAR_37);
 return VAR_41;
}

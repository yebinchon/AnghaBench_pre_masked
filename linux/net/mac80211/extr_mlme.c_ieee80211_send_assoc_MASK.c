
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_14__ ;
typedef struct TYPE_17__ TYPE_12__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct ieee80211_vht_cap {int dummy; } ;
struct ieee80211_supported_band {int n_bitrates; int n_channels; scalar_t__ band; TYPE_9__* channels; TYPE_8__* bitrates; } ;
struct TYPE_15__ {scalar_t__ addr; int chanctx_conf; } ;
struct ieee80211_if_managed {int flags; int uapsd_queues; int uapsd_max_sp_len; int assoc_req_ies_len; int assoc_req_ies; struct ieee80211_mgd_assoc_data* assoc_data; } ;
struct TYPE_19__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {int smps_mode; TYPE_10__ vif; TYPE_1__ u; struct ieee80211_local* local; } ;
struct TYPE_23__ {void* listen_interval; void* capab_info; } ;
struct TYPE_22__ {int* current_ap; void* listen_interval; void* capab_info; } ;
struct TYPE_24__ {TYPE_5__ assoc_req; TYPE_4__ reassoc_req; } ;
struct ieee80211_mgmt {int* da; int* sa; int* bssid; TYPE_6__ u; void* frame_control; } ;
struct ieee80211_mgd_assoc_data {int ssid_len; size_t ie_len; int capability; scalar_t__ fils_kek_len; scalar_t__ ie; scalar_t__ uapsd; scalar_t__ wmm; int ap_vht_cap; int ap_ht_param; scalar_t__ ssid; scalar_t__ prev_bssid; TYPE_3__* bss; scalar_t__ supp_rates_len; int supp_rates; } ;
struct TYPE_25__ {int listen_interval; } ;
struct TYPE_17__ {TYPE_7__ conf; scalar_t__ extra_tx_headroom; TYPE_2__* wiphy; } ;
struct ieee80211_local {TYPE_12__ hw; } ;
struct ieee80211_ht_cap {int dummy; } ;
struct ieee80211_he_mcs_nss_supp {int dummy; } ;
struct ieee80211_he_cap_elem {int dummy; } ;
struct ieee80211_channel {size_t band; } ;
struct TYPE_16__ {struct ieee80211_channel* chan; } ;
struct ieee80211_chanctx_conf {TYPE_11__ def; } ;
struct element {int datalen; int * data; } ;
struct TYPE_27__ {int center_freq; } ;
struct TYPE_26__ {int bitrate; } ;
struct TYPE_21__ {scalar_t__ bssid; } ;
struct TYPE_20__ {struct ieee80211_supported_band** bands; } ;
struct TYPE_18__ {int flags; } ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_14__* FUNC_3 (struct sk_buff*) ;
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
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 struct sk_buff* FUNC_6 (scalar_t__,int ) ;
 scalar_t__ FUNC_7 (int const,scalar_t__,size_t) ;
 void* FUNC_8 (int) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct ieee80211_local*,struct ieee80211_sub_if_data*,int ) ;
 scalar_t__ FUNC_11 (struct sk_buff*,struct ieee80211_mgd_assoc_data*) ;
 int FUNC_12 (struct ieee80211_sub_if_data*,struct sk_buff*,struct ieee80211_supported_band*) ;
 int FUNC_13 (struct ieee80211_sub_if_data*,struct sk_buff*,int ,struct ieee80211_supported_band*,struct ieee80211_channel*,int ) ;
 int FUNC_14 (struct ieee80211_sub_if_data*,struct sk_buff*,struct ieee80211_supported_band*,int *) ;
 int* FUNC_15 (int*,int) ;
 int FUNC_16 (TYPE_11__*) ;
 int FUNC_17 (int ) ;
 scalar_t__ FUNC_18 (TYPE_12__*,int ) ;
 size_t FUNC_19 (scalar_t__,size_t,int const*,int ,size_t) ;
 size_t FUNC_20 (scalar_t__,size_t,int const*,int ,int const*,int ,size_t) ;
 size_t FUNC_21 (scalar_t__,size_t,size_t) ;
 int FUNC_22 (TYPE_11__*,struct ieee80211_supported_band*,int ,scalar_t__,int*) ;
 int FUNC_23 (struct ieee80211_sub_if_data*,struct sk_buff*) ;
 int FUNC_24 (TYPE_10__*) ;
 int FUNC_25 (scalar_t__) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (int*,int,int ) ;
 int FUNC_28 (int*,scalar_t__,size_t) ;
 struct ieee80211_chanctx_conf* FUNC_29 (int ) ;
 int FUNC_30 () ;
 int FUNC_31 () ;
 int FUNC_32 (struct ieee80211_sub_if_data*) ;
 int* FUNC_33 (struct sk_buff*,int) ;
 int FUNC_34 (struct sk_buff*,scalar_t__,size_t) ;
 struct ieee80211_mgmt* FUNC_35 (struct sk_buff*,int) ;
 int FUNC_36 (struct sk_buff*,scalar_t__) ;
 int* FUNC_37 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_38(struct ieee80211_sub_if_data *VAR_27)
{
 struct ieee80211_local *VAR_28 = VAR_27->local;
 struct ieee80211_if_managed *VAR_29 = &VAR_27->u.mgd;
 struct ieee80211_mgd_assoc_data *VAR_30 = VAR_29->assoc_data;
 struct sk_buff *VAR_31;
 struct ieee80211_mgmt *VAR_32;
 u8 *VAR_33, VAR_34, *VAR_35;
 size_t VAR_36 = 0, VAR_37;
 int VAR_38, VAR_39, VAR_40, VAR_41, VAR_42;
 u16 VAR_43;
 struct ieee80211_supported_band *VAR_44;
 struct ieee80211_chanctx_conf *VAR_45;
 struct ieee80211_channel *VAR_46;
 u32 VAR_47 = 0;

 FUNC_32(VAR_27);

 FUNC_30();
 VAR_45 = FUNC_29(VAR_27->vif.chanctx_conf);
 if (FUNC_4(!VAR_45)) {
  FUNC_31();
  return;
 }
 VAR_46 = VAR_45->def.chan;
 FUNC_31();
 VAR_44 = VAR_28->hw.wiphy->bands[VAR_46->band];
 VAR_42 = FUNC_24(&VAR_27->vif);

 if (VAR_30->supp_rates_len) {






  VAR_40 = FUNC_22(&VAR_45->def, VAR_44,
           VAR_30->supp_rates,
           VAR_30->supp_rates_len,
           &VAR_47);
 } else {





  VAR_40 = 0;
  for (VAR_38 = 0; VAR_38 < VAR_44->n_bitrates; VAR_38++) {
   VAR_47 |= FUNC_1(VAR_38);
   VAR_40++;
  }
 }

 VAR_31 = FUNC_6(VAR_28->hw.extra_tx_headroom +
   sizeof(*VAR_32) +
   2 + VAR_30->ssid_len +
   4 + VAR_40 +
   4 +
   2 + 2 * VAR_44->n_channels +
   2 + sizeof(struct ieee80211_ht_cap) +
   2 + sizeof(struct ieee80211_vht_cap) +
   2 + 1 + sizeof(struct ieee80211_he_cap_elem) +
    sizeof(struct ieee80211_he_mcs_nss_supp) +
    VAR_4 +
   VAR_30->ie_len +
   (VAR_30->fils_kek_len ? 16 : 0) +
   9,
   VAR_2);
 if (!VAR_31)
  return;

 FUNC_36(VAR_31, VAR_28->hw.extra_tx_headroom);

 VAR_43 = VAR_20;

 if (VAR_44->band == VAR_15) {
  VAR_43 |= VAR_24;
  VAR_43 |= VAR_23;
 }

 if (VAR_30->capability & VAR_21)
  VAR_43 |= VAR_21;

 if ((VAR_30->capability & VAR_25) &&
     FUNC_18(&VAR_28->hw, VAR_18))
  VAR_43 |= VAR_25;

 if (VAR_29->flags & VAR_8)
  VAR_43 |= VAR_22;

 VAR_32 = FUNC_35(VAR_31, 24);
 FUNC_28(VAR_32->da, VAR_30->bss->bssid, VAR_0);
 FUNC_28(VAR_32->sa, VAR_27->vif.addr, VAR_0);
 FUNC_28(VAR_32->bssid, VAR_30->bss->bssid, VAR_0);

 if (!FUNC_25(VAR_30->prev_bssid)) {
  FUNC_33(VAR_31, 10);
  VAR_32->frame_control = FUNC_8(VAR_3 |
        VAR_10);
  VAR_32->u.reassoc_req.capab_info = FUNC_8(VAR_43);
  VAR_32->u.reassoc_req.listen_interval =
    FUNC_8(VAR_28->hw.conf.listen_interval);
  FUNC_28(VAR_32->u.reassoc_req.current_ap, VAR_30->prev_bssid,
         VAR_0);
 } else {
  FUNC_33(VAR_31, 4);
  VAR_32->frame_control = FUNC_8(VAR_3 |
        VAR_9);
  VAR_32->u.assoc_req.capab_info = FUNC_8(VAR_43);
  VAR_32->u.assoc_req.listen_interval =
    FUNC_8(VAR_28->hw.conf.listen_interval);
 }


 VAR_33 = FUNC_33(VAR_31, 2 + VAR_30->ssid_len);
 VAR_35 = VAR_33;
 *VAR_33++ = 133;
 *VAR_33++ = VAR_30->ssid_len;
 FUNC_28(VAR_33, VAR_30->ssid, VAR_30->ssid_len);


 VAR_41 = VAR_40;
 if (VAR_41 > 8)
  VAR_41 = 8;

 VAR_33 = FUNC_33(VAR_31, VAR_41 + 2);
 *VAR_33++ = 130;
 *VAR_33++ = VAR_41;

 VAR_39 = 0;
 for (VAR_38 = 0; VAR_38 < VAR_44->n_bitrates; VAR_38++) {
  if (FUNC_1(VAR_38) & VAR_47) {
   int VAR_48 = FUNC_2(VAR_44->bitrates[VAR_38].bitrate,
      5 * (1 << VAR_42));
   *VAR_33++ = (u8) VAR_48;
   if (++VAR_39 == 8)
    break;
  }
 }

 if (VAR_40 > VAR_39) {
  VAR_33 = FUNC_33(VAR_31, VAR_40 - VAR_39 + 2);
  *VAR_33++ = 145;
  *VAR_33++ = VAR_40 - VAR_39;

  for (VAR_38++; VAR_38 < VAR_44->n_bitrates; VAR_38++) {
   if (FUNC_1(VAR_38) & VAR_47) {
    int VAR_49;
    VAR_49 = FUNC_2(VAR_44->bitrates[VAR_38].bitrate,
          5 * (1 << VAR_42));
    *VAR_33++ = (u8) VAR_49;
   }
  }
 }

 if (VAR_43 & VAR_25 ||
     VAR_43 & VAR_22) {
  VAR_33 = FUNC_33(VAR_31, 4);
  *VAR_33++ = 139;
  *VAR_33++ = 2;
  *VAR_33++ = 0;

  *VAR_33++ = FUNC_16(&VAR_45->def);
 }

 if (VAR_43 & VAR_25) {

  VAR_33 = FUNC_33(VAR_31, 2 * VAR_44->n_channels + 2);
  *VAR_33++ = 132;
  *VAR_33++ = 2 * VAR_44->n_channels;
  for (VAR_38 = 0; VAR_38 < VAR_44->n_channels; VAR_38++) {
   *VAR_33++ = FUNC_17(
     VAR_44->channels[VAR_38].center_freq);
   *VAR_33++ = 1;
  }
 }


 if (FUNC_18(&VAR_28->hw, VAR_19) &&
     !(VAR_29->flags & VAR_5) && VAR_30->ie_len) {
  struct element *VAR_50;


  VAR_50 = (void *)FUNC_7(152,
        VAR_30->ie,
        VAR_30->ie_len);


  if (VAR_50 && VAR_50->datalen >= 3)
   VAR_50->data[2] |= VAR_26;
 }


 if (VAR_30->ie_len) {
  static const u8 VAR_51[] = {
   133,
   130,
   145,
   139,
   132,
   134,
   138,
   135,
   141,
   144,
   136,
   131,
  };
  static const u8 VAR_52[] = {
   131,
   143,
   154,

   152,
   137,
   129,
   142,

   128,
   140,
  };

  VAR_37 = FUNC_20(VAR_30->ie,
       VAR_30->ie_len,
       VAR_51,
       FUNC_0(VAR_51),
       VAR_52,
       FUNC_0(VAR_52),
       VAR_36);
  FUNC_34(VAR_31, VAR_30->ie + VAR_36, VAR_37 - VAR_36);
  VAR_36 = VAR_37;
 }

 if (FUNC_5((VAR_29->flags & VAR_6) &&
    !(VAR_29->flags & VAR_7)))
  VAR_29->flags |= VAR_7;

 if (!(VAR_29->flags & VAR_6))
  FUNC_13(VAR_27, VAR_31, VAR_30->ap_ht_param,
        VAR_44, VAR_46, VAR_27->smps_mode);


 if (VAR_30->ie_len) {
  static const u8 VAR_53[] = {




   154,
   152,
   137,
   129,
   142,

  };


  VAR_37 = FUNC_19(VAR_30->ie, VAR_30->ie_len,
          VAR_53, FUNC_0(VAR_53),
          VAR_36);
  FUNC_34(VAR_31, VAR_30->ie + VAR_36, VAR_37 - VAR_36);
  VAR_36 = VAR_37;
 }


 if (VAR_30->ie_len) {
  static const u8 VAR_54[] = {




   140,
   153, 146,

   153, 147,
   153, 148,
   153, 149,
   153, 151,
   153, 150,

  };


  VAR_37 = FUNC_19(VAR_30->ie, VAR_30->ie_len,
          VAR_54, FUNC_0(VAR_54),
          VAR_36);
  VAR_33 = FUNC_33(VAR_31, VAR_37 - VAR_36);
  FUNC_28(VAR_33, VAR_30->ie + VAR_36, VAR_37 - VAR_36);
  VAR_36 = VAR_37;
 }

 if (!(VAR_29->flags & VAR_7))
  FUNC_14(VAR_27, VAR_31, VAR_44,
         &VAR_30->ap_vht_cap);





 if (VAR_29->flags & VAR_6 ||
     (VAR_44->band == VAR_16 &&
      VAR_29->flags & VAR_7))
  VAR_29->flags |= VAR_5;

 if (!(VAR_29->flags & VAR_5))
  FUNC_12(VAR_27, VAR_31, VAR_44);


 if (VAR_30->ie_len) {
  VAR_37 = FUNC_21(VAR_30->ie,
          VAR_30->ie_len,
          VAR_36);
  FUNC_34(VAR_31, VAR_30->ie + VAR_36, VAR_37 - VAR_36);
  VAR_36 = VAR_37;
 }

 if (VAR_30->wmm) {
  if (VAR_30->uapsd) {
   VAR_34 = VAR_29->uapsd_queues;
   VAR_34 |= (VAR_29->uapsd_max_sp_len <<
         VAR_14);
  } else {
   VAR_34 = 0;
  }

  VAR_33 = FUNC_15(FUNC_33(VAR_31, 9), VAR_34);
 }


 if (VAR_30->ie_len) {
  VAR_37 = VAR_30->ie_len;
  FUNC_34(VAR_31, VAR_30->ie + VAR_36, VAR_37 - VAR_36);
 }

 if (VAR_30->fils_kek_len &&
     FUNC_11(VAR_31, VAR_30) < 0) {
  FUNC_9(VAR_31);
  return;
 }

 VAR_33 = FUNC_37(VAR_31);
 FUNC_26(VAR_29->assoc_req_ies);
 VAR_29->assoc_req_ies = FUNC_27(VAR_35, VAR_33 - VAR_35, VAR_1);
 VAR_29->assoc_req_ies_len = VAR_33 - VAR_35;

 FUNC_10(VAR_28, VAR_27, 0);

 FUNC_3(VAR_31)->flags |= VAR_12;
 if (FUNC_18(&VAR_28->hw, VAR_17))
  FUNC_3(VAR_31)->flags |= VAR_11 |
      VAR_13;
 FUNC_23(VAR_27, VAR_31);
}

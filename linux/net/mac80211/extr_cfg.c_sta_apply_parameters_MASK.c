
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
struct TYPE_14__ {scalar_t__ type; int power; } ;
struct station_parameters {int sta_flags_mask; int sta_flags_set; int ext_capab_len; int* ext_capab; int sta_modify_mask; scalar_t__ listen_interval; scalar_t__ support_p2p_ps; scalar_t__ airtime_weight; int opmode_notif; scalar_t__ opmode_notif_used; int he_capa_len; scalar_t__ he_capa; int vht_capa; int ht_capa; int supported_rates_len; int supported_rates; TYPE_6__ txpwr; scalar_t__ aid; int max_sp; int uapsd_queues; } ;
struct TYPE_12__ {scalar_t__ type; int power; } ;
struct TYPE_13__ {int wme; int mfp; int max_amsdu_subframes; scalar_t__ support_p2p_ps; int * supp_rates; TYPE_4__ txpwr; scalar_t__ aid; int max_sp; int uapsd_queues; } ;
struct sta_info {scalar_t__ listen_interval; scalar_t__ airtime_weight; TYPE_5__ sta; struct ieee80211_sub_if_data* sdata; } ;
struct ieee80211_supported_band {size_t band; } ;
struct TYPE_9__ {int chandef; } ;
struct TYPE_15__ {TYPE_1__ bss_conf; } ;
struct TYPE_10__ {int tdls_wider_bw_prohibited; int tdls_chan_switch_prohibited; } ;
struct TYPE_11__ {TYPE_2__ mgd; } ;
struct ieee80211_sub_if_data {TYPE_7__ vif; TYPE_3__ u; } ;
struct TYPE_16__ {scalar_t__ queues; } ;
struct ieee80211_local {TYPE_8__ hw; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
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
 int VAR_21 ;
 int FUNC_1 (struct ieee80211_sub_if_data*,struct sta_info*,int ,size_t) ;
 int FUNC_2 (struct sta_info*,int ) ;
 int FUNC_3 (struct ieee80211_local*,struct ieee80211_sub_if_data*,struct sta_info*) ;
 struct ieee80211_supported_band* FUNC_4 (struct ieee80211_sub_if_data*) ;
 int FUNC_5 (struct ieee80211_sub_if_data*,struct ieee80211_supported_band*,void*,int ,struct sta_info*) ;
 int FUNC_6 (struct ieee80211_sub_if_data*,struct ieee80211_supported_band*,int ,struct sta_info*) ;
 scalar_t__ FUNC_7 (TYPE_8__*,int ) ;
 int FUNC_8 (int *,struct ieee80211_supported_band*,int ,int ,int *) ;
 int FUNC_9 (struct ieee80211_sub_if_data*,struct ieee80211_supported_band*,int ,struct sta_info*) ;
 scalar_t__ FUNC_10 (TYPE_7__*) ;
 int FUNC_11 (struct sta_info*,int ) ;
 int FUNC_12 (struct ieee80211_local*,struct sta_info*,int,int) ;
 int FUNC_13 (struct ieee80211_local*,struct sta_info*,struct station_parameters*) ;
 scalar_t__ FUNC_14 (struct sta_info*,int ) ;

__attribute__((used)) static int FUNC_15(struct ieee80211_local *VAR_22,
    struct sta_info *VAR_23,
    struct station_parameters *VAR_24)
{
 int VAR_25 = 0;
 struct ieee80211_supported_band *VAR_26;
 struct ieee80211_sub_if_data *VAR_27 = VAR_23->sdata;
 u32 VAR_28, VAR_29;

 VAR_26 = FUNC_4(VAR_27);
 if (!VAR_26)
  return -VAR_0;

 VAR_28 = VAR_24->sta_flags_mask;
 VAR_29 = VAR_24->sta_flags_set;

 if (FUNC_10(&VAR_27->vif)) {




  if (VAR_28 & FUNC_0(VAR_3))
   VAR_28 |= FUNC_0(VAR_2);
  if (VAR_29 & FUNC_0(VAR_3))
   VAR_29 |= FUNC_0(VAR_2);
 } else if (FUNC_14(VAR_23, VAR_20)) {





  if (VAR_29 & FUNC_0(VAR_4)) {
   VAR_29 |= FUNC_0(VAR_3) |
          FUNC_0(VAR_2);
   VAR_28 |= FUNC_0(VAR_3) |
    FUNC_0(VAR_2);
  }
 }

 if (VAR_28 & FUNC_0(VAR_8) &&
     VAR_22->hw.queues >= VAR_1)
  VAR_23->sta.wme = VAR_29 & FUNC_0(VAR_8);



 if (!FUNC_14(VAR_23, VAR_20) &&
     !((VAR_28 & FUNC_0(VAR_2)) &&
       (VAR_29 & FUNC_0(VAR_2)))) {
  VAR_25 = FUNC_12(VAR_22, VAR_23, VAR_28, VAR_29);
  if (VAR_25)
   return VAR_25;
 }

 if (VAR_28 & FUNC_0(VAR_6)) {
  if (VAR_29 & FUNC_0(VAR_6))
   FUNC_11(VAR_23, VAR_18);
  else
   FUNC_2(VAR_23, VAR_18);
 }

 if (VAR_28 & FUNC_0(VAR_5)) {
  VAR_23->sta.mfp = !!(VAR_29 & FUNC_0(VAR_5));
  if (VAR_29 & FUNC_0(VAR_5))
   FUNC_11(VAR_23, VAR_17);
  else
   FUNC_2(VAR_23, VAR_17);
 }

 if (VAR_28 & FUNC_0(VAR_7)) {
  if (VAR_29 & FUNC_0(VAR_7))
   FUNC_11(VAR_23, VAR_20);
  else
   FUNC_2(VAR_23, VAR_20);
 }


 if (FUNC_14(VAR_23, VAR_20) &&
     !VAR_27->u.mgd.tdls_chan_switch_prohibited &&
     VAR_24->ext_capab_len >= 4 &&
     VAR_24->ext_capab[3] & VAR_13)
  FUNC_11(VAR_23, VAR_19);

 if (FUNC_14(VAR_23, VAR_20) &&
     !VAR_27->u.mgd.tdls_wider_bw_prohibited &&
     FUNC_7(&VAR_22->hw, VAR_12) &&
     VAR_24->ext_capab_len >= 8 &&
     VAR_24->ext_capab[7] & VAR_15)
  FUNC_11(VAR_23, VAR_21);

 if (VAR_24->sta_modify_mask & VAR_11) {
  VAR_23->sta.uapsd_queues = VAR_24->uapsd_queues;
  VAR_23->sta.max_sp = VAR_24->max_sp;
 }


 if (VAR_24->ext_capab_len >= 8) {
  u8 VAR_30 = (VAR_24->ext_capab[7] &
     VAR_14) >> 7;


  if (VAR_24->ext_capab_len >= 9) {
   u8 VAR_31 = VAR_24->ext_capab[8] &
    VAR_16;
   VAR_31 <<= 1;
   VAR_30 |= VAR_31;
  }

  switch (VAR_30) {
  case 1:
   VAR_23->sta.max_amsdu_subframes = 32;
   break;
  case 2:
   VAR_23->sta.max_amsdu_subframes = 16;
   break;
  case 3:
   VAR_23->sta.max_amsdu_subframes = 8;
   break;
  default:
   VAR_23->sta.max_amsdu_subframes = 0;
  }
 }





 if (VAR_24->aid)
  VAR_23->sta.aid = VAR_24->aid;
 if (VAR_24->listen_interval >= 0)
  VAR_23->listen_interval = VAR_24->listen_interval;

 if (VAR_24->sta_modify_mask & VAR_10) {
  VAR_23->sta.txpwr.type = VAR_24->txpwr.type;
  if (VAR_24->txpwr.type == VAR_9)
   VAR_23->sta.txpwr.power = VAR_24->txpwr.power;
  VAR_25 = FUNC_3(VAR_22, VAR_27, VAR_23);
  if (VAR_25)
   return VAR_25;
 }

 if (VAR_24->supported_rates && VAR_24->supported_rates_len) {
  FUNC_8(&VAR_27->vif.bss_conf.chandef,
      VAR_26, VAR_24->supported_rates,
      VAR_24->supported_rates_len,
      &VAR_23->sta.supp_rates[VAR_26->band]);
 }

 if (VAR_24->ht_capa)
  FUNC_6(VAR_27, VAR_26,
        VAR_24->ht_capa, VAR_23);


 if (VAR_24->vht_capa)
  FUNC_9(VAR_27, VAR_26,
          VAR_24->vht_capa, VAR_23);

 if (VAR_24->he_capa)
  FUNC_5(VAR_27, VAR_26,
        (void *)VAR_24->he_capa,
        VAR_24->he_capa_len, VAR_23);

 if (VAR_24->opmode_notif_used) {



  FUNC_1(VAR_27, VAR_23, VAR_24->opmode_notif,
           VAR_26->band);
 }

 if (VAR_24->support_p2p_ps >= 0)
  VAR_23->sta.support_p2p_ps = VAR_24->support_p2p_ps;

 if (FUNC_10(&VAR_27->vif))
  FUNC_13(VAR_22, VAR_23, VAR_24);

 if (VAR_24->airtime_weight)
  VAR_23->airtime_weight = VAR_24->airtime_weight;


 if (FUNC_14(VAR_23, VAR_20) ||
     VAR_29 & FUNC_0(VAR_2)) {
  VAR_25 = FUNC_12(VAR_22, VAR_23, VAR_28, VAR_29);
  if (VAR_25)
   return VAR_25;
 }

 return 0;
}

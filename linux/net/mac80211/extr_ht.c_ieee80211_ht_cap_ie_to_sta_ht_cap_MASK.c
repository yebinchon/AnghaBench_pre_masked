
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


typedef int u8 ;
struct TYPE_12__ {int bandwidth; int smps_mode; int ht_cap; int max_amsdu_len; } ;
struct sta_info {TYPE_6__ sta; void* cur_max_bandwidth; } ;
struct TYPE_7__ {int tx_params; int* rx_mask; int rx_highest; } ;
struct ieee80211_sta_ht_cap {int ht_supported; int cap; int ampdu_factor; int ampdu_density; TYPE_1__ mcs; } ;
struct ieee80211_supported_band {struct ieee80211_sta_ht_cap ht_cap; } ;
struct TYPE_9__ {int width; } ;
struct TYPE_10__ {TYPE_3__ chandef; } ;
struct TYPE_11__ {scalar_t__ type; TYPE_4__ bss_conf; } ;
struct ieee80211_sub_if_data {TYPE_5__ vif; } ;
struct TYPE_8__ {int tx_params; int* rx_mask; int rx_highest; } ;
struct ieee80211_ht_cap {int ampdu_params_info; TYPE_2__ mcs; int cap_info; } ;
typedef int ht_cap ;
typedef enum ieee80211_sta_rx_bandwidth { ____Placeholder_ieee80211_sta_rx_bandwidth } ieee80211_sta_rx_bandwidth ;
typedef enum ieee80211_smps_mode { ____Placeholder_ieee80211_smps_mode } ieee80211_smps_mode ;


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
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 void* VAR_26 ;
 void* VAR_27 ;






 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 int FUNC_0 (int) ;




 int FUNC_1 (struct ieee80211_sub_if_data*,struct ieee80211_sta_ht_cap*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,struct ieee80211_sta_ht_cap*,int) ;
 int FUNC_4 (int *,struct ieee80211_sta_ht_cap*,int) ;
 int FUNC_5 (struct ieee80211_sta_ht_cap*,int ,int) ;

bool FUNC_6(struct ieee80211_sub_if_data *VAR_30,
           struct ieee80211_supported_band *VAR_31,
           const struct ieee80211_ht_cap *VAR_32,
           struct sta_info *VAR_33)
{
 struct ieee80211_sta_ht_cap VAR_34, VAR_35;
 u8 VAR_36, VAR_37;
 int VAR_38, VAR_39;
 bool VAR_40;
 enum ieee80211_sta_rx_bandwidth VAR_41;
 enum ieee80211_smps_mode VAR_42;

 FUNC_5(&VAR_34, 0, sizeof(VAR_34));

 if (!VAR_32 || !VAR_31->ht_cap.ht_supported)
  goto apply;

 VAR_34.ht_supported = 1;

 VAR_35 = VAR_31->ht_cap;







 if (VAR_30->vif.type == VAR_29 ||
     VAR_30->vif.type == VAR_28)
  FUNC_1(VAR_30, &VAR_35);







 VAR_34.cap = FUNC_2(VAR_32->cap_info) &
  (VAR_35.cap | ~(VAR_4 |
     VAR_11 |
     VAR_3 |
     VAR_7 |
     VAR_8 |
     VAR_2));





 if (!(VAR_35.cap & VAR_12))
  VAR_34.cap &= ~VAR_6;
 if (!(VAR_35.cap & VAR_6))
  VAR_34.cap &= ~VAR_12;

 VAR_36 = VAR_32->ampdu_params_info;
 VAR_34.ampdu_factor =
  VAR_36 & VAR_1;
 VAR_34.ampdu_density =
  (VAR_36 & VAR_0) >> 2;


 VAR_37 = VAR_35.mcs.tx_params;


 VAR_34.mcs.tx_params = VAR_32->mcs.tx_params;


 if (!(VAR_37 & VAR_14))
  goto apply;


 if (VAR_37 & VAR_18)
  VAR_39 =
   ((VAR_37 & VAR_16)
    >> VAR_17) + 1;
 else
  VAR_39 = VAR_15;
 for (VAR_38 = 0; VAR_38 < VAR_39; VAR_38++)
  VAR_34.mcs.rx_mask[VAR_38] =
   VAR_35.mcs.rx_mask[VAR_38] & VAR_32->mcs.rx_mask[VAR_38];

 if (VAR_37 & VAR_19)
  for (VAR_38 = VAR_20;
       VAR_38 < VAR_13; VAR_38++)
   VAR_34.mcs.rx_mask[VAR_38] =
    VAR_35.mcs.rx_mask[VAR_38] &
     VAR_32->mcs.rx_mask[VAR_38];


 if (VAR_35.mcs.rx_mask[32/8] & VAR_32->mcs.rx_mask[32/8] & 1)
  VAR_34.mcs.rx_mask[32/8] |= 1;


 VAR_34.mcs.rx_highest = VAR_32->mcs.rx_highest;

 if (VAR_34.cap & VAR_5)
  VAR_33->sta.max_amsdu_len = VAR_22;
 else
  VAR_33->sta.max_amsdu_len = VAR_21;

 apply:
 VAR_40 = FUNC_3(&VAR_33->sta.ht_cap, &VAR_34, sizeof(VAR_34));

 FUNC_4(&VAR_33->sta.ht_cap, &VAR_34, sizeof(VAR_34));

 switch (VAR_30->vif.bss_conf.chandef.width) {
 default:
  FUNC_0(1);

 case 135:
 case 136:
  VAR_41 = VAR_26;
  break;
 case 134:
 case 133:
 case 132:
 case 137:
  VAR_41 = VAR_34.cap & VAR_11 ?
    VAR_27 : VAR_26;
  break;
 }

 VAR_33->sta.bandwidth = VAR_41;

 VAR_33->cur_max_bandwidth =
  VAR_34.cap & VAR_11 ?
    VAR_27 : VAR_26;

 switch ((VAR_34.cap & VAR_9)
   >> VAR_10) {
 case 129:
 case 128:
  VAR_42 = VAR_25;
  break;
 case 130:
  VAR_42 = VAR_23;
  break;
 case 131:
  VAR_42 = VAR_24;
  break;
 }

 if (VAR_42 != VAR_33->sta.smps_mode)
  VAR_40 = 1;
 VAR_33->sta.smps_mode = VAR_42;

 return VAR_40;
}

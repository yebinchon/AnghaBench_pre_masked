
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_7__ {int bandwidth; scalar_t__* supp_rates; } ;
struct TYPE_5__ {int last_rx; } ;
struct sta_info {TYPE_4__* mesh; TYPE_3__ sta; TYPE_1__ rx_stats; } ;
struct ieee802_11_elems {TYPE_2__* ht_operation; int he_cap_len; int he_cap; int vht_cap_elem; int ht_cap_elem; } ;
struct ieee80211_supported_band {size_t band; } ;
struct ieee80211_sub_if_data {struct ieee80211_local* local; } ;
struct ieee80211_local {int dummy; } ;
typedef enum ieee80211_sta_rx_bandwidth { ____Placeholder_ieee80211_sta_rx_bandwidth } ieee80211_sta_rx_bandwidth ;
struct TYPE_8__ {scalar_t__ plink_state; int processed_beacon; int plink_lock; } ;
struct TYPE_6__ {int ht_param; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 struct ieee80211_supported_band* FUNC_0 (struct ieee80211_sub_if_data*) ;
 int FUNC_1 (struct ieee80211_sub_if_data*,struct ieee80211_supported_band*,int ,int ,struct sta_info*) ;
 scalar_t__ FUNC_2 (struct ieee80211_sub_if_data*,struct ieee80211_supported_band*,int ,struct sta_info*) ;
 scalar_t__ FUNC_3 (struct ieee80211_sub_if_data*,struct ieee802_11_elems*,size_t,scalar_t__*) ;
 int FUNC_4 (struct ieee80211_sub_if_data*,struct ieee80211_supported_band*,int ,struct sta_info*) ;
 int VAR_6 ;
 int FUNC_5 (struct sta_info*) ;
 int FUNC_6 (struct ieee80211_local*,struct ieee80211_supported_band*,struct sta_info*,scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct sta_info*,int ) ;

__attribute__((used)) static void FUNC_10(struct ieee80211_sub_if_data *VAR_7,
          struct sta_info *VAR_8,
          struct ieee802_11_elems *VAR_9)
{
 struct ieee80211_local *VAR_10 = VAR_7->local;
 struct ieee80211_supported_band *VAR_11;
 u32 VAR_12, VAR_13 = 0, VAR_14 = 0;
 enum ieee80211_sta_rx_bandwidth VAR_15 = VAR_8->sta.bandwidth;

 VAR_11 = FUNC_0(VAR_7);
 if (!VAR_11)
  return;

 VAR_12 = FUNC_3(VAR_7, VAR_9, VAR_11->band,
     &VAR_13);

 FUNC_7(&VAR_8->mesh->plink_lock);
 VAR_8->rx_stats.last_rx = VAR_6;


 if (VAR_8->mesh->plink_state == VAR_4 &&
     VAR_8->mesh->processed_beacon)
  goto out;
 VAR_8->mesh->processed_beacon = 1;

 if (VAR_8->sta.supp_rates[VAR_11->band] != VAR_12)
  VAR_14 |= VAR_2;
 VAR_8->sta.supp_rates[VAR_11->band] = VAR_12;

 if (FUNC_2(VAR_7, VAR_11,
           VAR_9->ht_cap_elem, VAR_8))
  VAR_14 |= VAR_1;

 FUNC_4(VAR_7, VAR_11,
         VAR_9->vht_cap_elem, VAR_8);

 FUNC_1(VAR_7, VAR_11, VAR_9->he_cap,
       VAR_9->he_cap_len, VAR_8);

 if (VAR_15 != VAR_8->sta.bandwidth)
  VAR_14 |= VAR_1;


 if (VAR_9->ht_operation &&
     !(VAR_9->ht_operation->ht_param &
       VAR_0)) {
  if (VAR_8->sta.bandwidth != VAR_3)
   VAR_14 |= VAR_1;
  VAR_8->sta.bandwidth = VAR_3;
 }

 if (!FUNC_9(VAR_8, VAR_5))
  FUNC_5(VAR_8);
 else
  FUNC_6(VAR_10, VAR_11, VAR_8, VAR_14);
out:
 FUNC_8(&VAR_8->mesh->plink_lock);
}

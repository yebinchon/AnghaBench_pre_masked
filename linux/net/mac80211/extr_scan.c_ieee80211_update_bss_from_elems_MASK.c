
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ieee802_11_elems {int supp_rates_len; int ext_supp_rates_len; scalar_t__ parse_error; scalar_t__ wmm_info; scalar_t__ wmm_param; scalar_t__ ext_supp_rates; scalar_t__ supp_rates; int * erp_info; } ;
struct ieee80211_supported_band {int * bitrates; } ;
struct ieee80211_rx_status {size_t band; scalar_t__ encoding; size_t rate_idx; int device_timestamp; } ;
struct TYPE_4__ {TYPE_1__* wiphy; } ;
struct ieee80211_local {TYPE_2__ hw; } ;
struct ieee80211_bss {int valid_data; int has_erp_value; int supp_rates_len; int wmm_used; int * beacon_rate; int uapsd_supported; scalar_t__ supp_rates; int erp_value; int corrupt_data; int device_ts_presp; int device_ts_beacon; } ;
struct TYPE_3__ {struct ieee80211_supported_band** bands; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct ieee802_11_elems*) ;
 int FUNC_1 (scalar_t__,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_2(struct ieee80211_local *VAR_8,
    struct ieee80211_bss *VAR_9,
    struct ieee802_11_elems *VAR_10,
    struct ieee80211_rx_status *VAR_11,
    bool VAR_12)
{
 int VAR_13, VAR_14;

 if (VAR_12)
  VAR_9->device_ts_beacon = VAR_11->device_timestamp;
 else
  VAR_9->device_ts_presp = VAR_11->device_timestamp;

 if (VAR_10->parse_error) {
  if (VAR_12)
   VAR_9->corrupt_data |= VAR_0;
  else
   VAR_9->corrupt_data |= VAR_1;
 } else {
  if (VAR_12)
   VAR_9->corrupt_data &= ~VAR_0;
  else
   VAR_9->corrupt_data &= ~VAR_1;
 }


 if (VAR_10->erp_info && (!VAR_10->parse_error ||
    !(VAR_9->valid_data & VAR_2))) {
  VAR_9->erp_value = VAR_10->erp_info[0];
  VAR_9->has_erp_value = 1;
  if (!VAR_10->parse_error)
   VAR_9->valid_data |= VAR_2;
 }


 if (!VAR_10->parse_error ||
     !(VAR_9->valid_data & VAR_3)) {
  VAR_14 = 0;
  if (VAR_10->supp_rates) {
   VAR_13 = VAR_5;
   if (VAR_13 > VAR_10->supp_rates_len)
    VAR_13 = VAR_10->supp_rates_len;
   FUNC_1(VAR_9->supp_rates, VAR_10->supp_rates, VAR_13);
   VAR_14 += VAR_13;
  }
  if (VAR_10->ext_supp_rates) {
   VAR_13 = VAR_5 - VAR_14;
   if (VAR_13 > VAR_10->ext_supp_rates_len)
    VAR_13 = VAR_10->ext_supp_rates_len;
   FUNC_1(VAR_9->supp_rates + VAR_14, VAR_10->ext_supp_rates,
          VAR_13);
   VAR_14 += VAR_13;
  }
  if (VAR_14) {
   VAR_9->supp_rates_len = VAR_14;
   if (!VAR_10->parse_error)
    VAR_9->valid_data |= VAR_3;
  }
 }

 if (!VAR_10->parse_error ||
     !(VAR_9->valid_data & VAR_4)) {
  VAR_9->wmm_used = VAR_10->wmm_param || VAR_10->wmm_info;
  VAR_9->uapsd_supported = FUNC_0(VAR_10);
  if (!VAR_10->parse_error)
   VAR_9->valid_data |= VAR_4;
 }

 if (VAR_12) {
  struct ieee80211_supported_band *VAR_15 =
   VAR_8->hw.wiphy->bands[VAR_11->band];
  if (!(VAR_11->encoding == VAR_6) &&
      !(VAR_11->encoding == VAR_7))
   VAR_9->beacon_rate =
    &VAR_15->bitrates[VAR_11->rate_idx];
 }
}

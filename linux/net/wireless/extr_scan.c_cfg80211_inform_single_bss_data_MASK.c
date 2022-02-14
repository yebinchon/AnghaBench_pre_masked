
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
typedef void* u16 ;
struct wiphy {scalar_t__ signal_type; scalar_t__ max_adj_channel_rssi_comp; } ;
struct ieee80211_channel {scalar_t__ band; scalar_t__ center_freq; } ;
struct cfg80211_registered_device {int bss_generation; } ;
struct cfg80211_non_tx_bss {int tx_bss; int max_bssid_indicator; int bssid_index; } ;
struct cfg80211_bss {int signal; int capability; int ies; int proberesp_ies; int beacon_ies; int max_bssid_indicator; int bssid_index; int transmitted_bss; void* beacon_interval; int scan_width; struct ieee80211_channel* channel; int bssid; } ;
struct cfg80211_internal_bss {struct cfg80211_bss pub; int ts_boottime; } ;
struct cfg80211_inform_bss {int signal; TYPE_1__* chan; int boottime_ns; int scan_width; } ;
struct cfg80211_bss_ies {size_t len; int from_beacon; int data; int tsf; } ;
typedef int gfp_t ;
typedef enum cfg80211_bss_frame_type { ____Placeholder_cfg80211_bss_frame_type } cfg80211_bss_frame_type ;
struct TYPE_4__ {unsigned long ts; } ;
struct TYPE_3__ {scalar_t__ center_freq; } ;





 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct cfg80211_registered_device*,struct cfg80211_internal_bss*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 TYPE_2__* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,struct cfg80211_bss*) ;
 struct cfg80211_internal_bss* FUNC_5 (struct cfg80211_registered_device*,struct cfg80211_internal_bss*,int,unsigned long) ;
 struct ieee80211_channel* FUNC_6 (struct wiphy*,int const*,size_t,TYPE_1__*,int ) ;
 unsigned long VAR_7 ;
 struct cfg80211_bss_ies* FUNC_7 (int,int ) ;
 int FUNC_8 (int ,int const*,size_t) ;
 int FUNC_9 (int ,struct cfg80211_bss_ies*) ;
 int FUNC_10 (struct wiphy*,struct ieee80211_channel*,int ) ;
 int FUNC_11 (struct cfg80211_bss*) ;
 struct cfg80211_registered_device* FUNC_12 (struct wiphy*) ;

__attribute__((used)) static struct cfg80211_bss *
FUNC_13(struct wiphy *VAR_8,
    struct cfg80211_inform_bss *VAR_9,
    enum cfg80211_bss_frame_type VAR_10,
    const u8 *VAR_11, u64 VAR_12, u16 VAR_13,
    u16 VAR_14, const u8 *VAR_15, size_t VAR_16,
    struct cfg80211_non_tx_bss *VAR_17,
    gfp_t VAR_18)
{
 struct cfg80211_registered_device *VAR_19 = FUNC_12(VAR_8);
 struct cfg80211_bss_ies *VAR_20;
 struct ieee80211_channel *VAR_21;
 struct cfg80211_internal_bss VAR_22 = {}, *VAR_23;
 int VAR_24;
 bool VAR_25;
 unsigned long VAR_26;

 if (FUNC_0(!VAR_8))
  return ((void*)0);

 if (FUNC_0(VAR_8->signal_type == VAR_0 &&
      (VAR_9->signal < 0 || VAR_9->signal > 100)))
  return ((void*)0);

 VAR_21 = FUNC_6(VAR_8, VAR_15, VAR_16, VAR_9->chan,
        VAR_9->scan_width);
 if (!VAR_21)
  return ((void*)0);

 FUNC_8(VAR_22.pub.bssid, VAR_11, VAR_1);
 VAR_22.pub.channel = VAR_21;
 VAR_22.pub.scan_width = VAR_9->scan_width;
 VAR_22.pub.signal = VAR_9->signal;
 VAR_22.pub.beacon_interval = VAR_14;
 VAR_22.pub.capability = VAR_13;
 VAR_22.ts_boottime = VAR_9->boottime_ns;
 if (VAR_17) {
  VAR_22.pub.transmitted_bss = VAR_17->tx_bss;
  VAR_26 = FUNC_3(VAR_17->tx_bss)->ts;
  VAR_22.pub.bssid_index = VAR_17->bssid_index;
  VAR_22.pub.max_bssid_indicator = VAR_17->max_bssid_indicator;
 } else {
  VAR_26 = VAR_7;
 }
 VAR_20 = FUNC_7(sizeof(*VAR_20) + VAR_16, VAR_18);
 if (!VAR_20)
  return ((void*)0);
 VAR_20->len = VAR_16;
 VAR_20->tsf = VAR_12;
 VAR_20->from_beacon = 0;
 FUNC_8(VAR_20->data, VAR_15, VAR_16);

 switch (VAR_10) {
 case 130:
  VAR_20->from_beacon = 1;

 case 128:
  FUNC_9(VAR_22.pub.beacon_ies, VAR_20);
  break;
 case 129:
  FUNC_9(VAR_22.pub.proberesp_ies, VAR_20);
  break;
 }
 FUNC_9(VAR_22.pub.ies, VAR_20);

 VAR_25 = FUNC_2(VAR_9->chan->center_freq - VAR_21->center_freq) <=
  VAR_8->max_adj_channel_rssi_comp;
 VAR_23 = FUNC_5(FUNC_12(VAR_8), &VAR_22, VAR_25, VAR_26);
 if (!VAR_23)
  return ((void*)0);

 if (VAR_21->band == VAR_2) {
  VAR_24 = VAR_23->pub.capability & VAR_4;
  if (VAR_24 == VAR_3 ||
      VAR_24 == VAR_5)
   FUNC_10(VAR_8, VAR_21, VAR_18);
 } else {
  if (VAR_23->pub.capability & VAR_6)
   FUNC_10(VAR_8, VAR_21, VAR_18);
 }

 if (VAR_17) {



  if (FUNC_4(VAR_17->tx_bss,
            &VAR_23->pub)) {
   if (FUNC_1(VAR_19, VAR_23))
    VAR_19->bss_generation++;
  }
 }

 FUNC_11(&VAR_23->pub);

 return &VAR_23->pub;
}

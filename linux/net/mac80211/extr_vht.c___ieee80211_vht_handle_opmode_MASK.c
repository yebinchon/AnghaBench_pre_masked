
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sta_opmode_info {int rx_nss; int changed; int bw; } ;
struct TYPE_2__ {int rx_nss; int bandwidth; } ;
struct sta_info {int addr; TYPE_1__ sta; int cur_max_bandwidth; } ;
struct ieee80211_sub_if_data {int dev; } ;
typedef enum nl80211_band { ____Placeholder_nl80211_band } nl80211_band ;
typedef enum ieee80211_sta_rx_bandwidth { ____Placeholder_ieee80211_sta_rx_bandwidth } ieee80211_sta_rx_bandwidth ;


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
 int FUNC_0 (int ,int ,struct sta_opmode_info*,int ) ;
 int FUNC_1 (struct sta_info*) ;
 int FUNC_2 (struct sta_info*) ;

u32 FUNC_3(struct ieee80211_sub_if_data *VAR_13,
      struct sta_info *VAR_14, u8 VAR_15,
      enum nl80211_band VAR_16)
{
 enum ieee80211_sta_rx_bandwidth VAR_17;
 struct sta_opmode_info VAR_18 = {};
 u32 VAR_19 = 0;
 u8 VAR_20;


 if (VAR_15 & VAR_4)
  return 0;

 VAR_20 = VAR_15 & VAR_2;
 VAR_20 >>= VAR_3;
 VAR_20 += 1;

 if (VAR_14->sta.rx_nss != VAR_20) {
  VAR_14->sta.rx_nss = VAR_20;
  VAR_18.rx_nss = VAR_20;
  VAR_19 |= VAR_6;
  VAR_18.changed |= VAR_12;
 }

 switch (VAR_15 & VAR_1) {
 case 130:
  VAR_14->cur_max_bandwidth = VAR_8;
  break;
 case 129:
  VAR_14->cur_max_bandwidth = VAR_9;
  break;
 case 128:
  VAR_14->cur_max_bandwidth = VAR_10;
  break;
 case 131:
  VAR_14->cur_max_bandwidth = VAR_7;
  break;
 }

 VAR_17 = FUNC_1(VAR_14);
 if (VAR_17 != VAR_14->sta.bandwidth) {
  VAR_14->sta.bandwidth = VAR_17;
  VAR_18.bw = FUNC_2(VAR_14);
  VAR_19 |= VAR_5;
  VAR_18.changed |= VAR_11;
 }

 if (VAR_18.changed)
  FUNC_0(VAR_13->dev, VAR_14->addr,
        &VAR_18, VAR_0);

 return VAR_19;
}

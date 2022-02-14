
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum nl80211_chan_width { ____Placeholder_nl80211_chan_width } nl80211_chan_width ;
typedef enum ieee80211_sta_rx_bandwidth { ____Placeholder_ieee80211_sta_rx_bandwidth } ieee80211_sta_rx_bandwidth ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;






 int FUNC_0 (int) ;

enum ieee80211_sta_rx_bandwidth
FUNC_1(enum nl80211_chan_width VAR_4)
{
 switch (VAR_4) {
 case 131:
 case 132:
  return VAR_1;
 case 130:
  return VAR_2;
 case 129:
  return VAR_3;
 case 133:
 case 128:
  return VAR_0;
 default:
  FUNC_0(1);
  return VAR_1;
 }
}

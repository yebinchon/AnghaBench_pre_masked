
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_5__ {int tx_mcs_map; } ;
struct TYPE_6__ {TYPE_1__ vht_mcs; scalar_t__ vht_supported; } ;
struct TYPE_8__ {int tx_params; scalar_t__* rx_mask; } ;
struct ieee80211_sta_ht_cap {TYPE_4__ mcs; int ht_supported; } ;
struct TYPE_7__ {TYPE_2__ vht_cap; struct ieee80211_sta_ht_cap ht_cap; } ;
struct sta_info {TYPE_3__ sta; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;

u8 FUNC_1(struct sta_info *VAR_4)
{
 struct ieee80211_sta_ht_cap *VAR_5 = &VAR_4->sta.ht_cap;
 u8 VAR_6;

 if (!VAR_4->sta.ht_cap.ht_supported)
  return 1;

 if (VAR_4->sta.vht_cap.vht_supported) {
  int VAR_7;
  u16 VAR_8 =
   FUNC_0(VAR_4->sta.vht_cap.vht_mcs.tx_mcs_map);

  for (VAR_7 = 7; VAR_7 >= 0; VAR_7--)
   if ((VAR_8 & (0x3 << (VAR_7 * 2))) !=
       VAR_3)
    return VAR_7 + 1;
 }

 if (VAR_5->mcs.rx_mask[3])
  VAR_6 = 4;
 else if (VAR_5->mcs.rx_mask[2])
  VAR_6 = 3;
 else if (VAR_5->mcs.rx_mask[1])
  VAR_6 = 2;
 else
  VAR_6 = 1;

 if (!(VAR_5->mcs.tx_params & VAR_2))
  return VAR_6;

 return ((VAR_5->mcs.tx_params & VAR_0)
   >> VAR_1) + 1;
}

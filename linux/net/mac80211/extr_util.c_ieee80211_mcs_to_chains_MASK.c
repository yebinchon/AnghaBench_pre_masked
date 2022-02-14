
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ieee80211_mcs_info {scalar_t__* rx_mask; } ;



u8 FUNC_0(const struct ieee80211_mcs_info *VAR_0)
{
 if (!VAR_0)
  return 1;



 if (VAR_0->rx_mask[3])
  return 4;
 if (VAR_0->rx_mask[2])
  return 3;
 if (VAR_0->rx_mask[1])
  return 2;
 return 1;
}

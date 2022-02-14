
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct ieee80211_sta_ht_cap {int cap; } ;
struct ieee80211_ht_cap {int cap_info; } ;
typedef int __le16 ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct ieee80211_ht_cap *VAR_0,
      struct ieee80211_ht_cap *VAR_1,
      struct ieee80211_sta_ht_cap *VAR_2,
      u16 VAR_3)
{
 __le16 VAR_4 = FUNC_0(VAR_3);

 if ((VAR_1->cap_info & VAR_4) &&
     (VAR_0->cap_info & VAR_4))
  VAR_2->cap |= VAR_3;
}

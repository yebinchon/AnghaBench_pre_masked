
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct ieee80211_supported_band {int ht_cap; } ;
struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {TYPE_1__ mgd; } ;
struct ieee80211_sub_if_data {TYPE_2__ u; } ;
struct ieee80211_sta_ht_cap {int cap; } ;
struct ieee80211_ht_cap {int dummy; } ;
struct ieee80211_channel {int flags; } ;
typedef int ht_cap ;
typedef enum ieee80211_smps_mode { ____Placeholder_ieee80211_smps_mode } ieee80211_smps_mode ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;


 int VAR_6 ;





 int VAR_7 ;
 int FUNC_1 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct ieee80211_sub_if_data*,struct ieee80211_sta_ht_cap*) ;
 int FUNC_3 (int*,struct ieee80211_sta_ht_cap*,int) ;
 int FUNC_4 (struct ieee80211_sta_ht_cap*,int *,int) ;
 int* FUNC_5 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_sub_if_data *VAR_11,
    struct sk_buff *VAR_12, u8 VAR_13,
    struct ieee80211_supported_band *VAR_14,
    struct ieee80211_channel *VAR_15,
    enum ieee80211_smps_mode VAR_16)
{
 u8 *VAR_17;
 u32 VAR_18 = VAR_15->flags;
 u16 VAR_19;
 struct ieee80211_sta_ht_cap VAR_20;

 FUNC_0(sizeof(VAR_20) != sizeof(VAR_14->ht_cap));

 FUNC_4(&VAR_20, &VAR_14->ht_cap, sizeof(VAR_20));
 FUNC_2(VAR_11, &VAR_20);


 VAR_19 = VAR_20.cap;

 switch (VAR_13 & VAR_6) {
 case 134:
  if (VAR_18 & VAR_1) {
   VAR_19 &= ~VAR_5;
   VAR_19 &= ~VAR_2;
  }
  break;
 case 133:
  if (VAR_18 & VAR_0) {
   VAR_19 &= ~VAR_5;
   VAR_19 &= ~VAR_2;
  }
  break;
 }






 if (VAR_11->u.mgd.flags & VAR_7) {
  VAR_19 &= ~VAR_5;
  VAR_19 &= ~VAR_2;
 }


 VAR_19 &= ~VAR_3;
 switch (VAR_16) {
 case 132:
 case 130:
  FUNC_1(1);

 case 129:
  VAR_19 |= VAR_8 <<
   VAR_4;
  break;
 case 128:
  VAR_19 |= VAR_10 <<
   VAR_4;
  break;
 case 131:
  VAR_19 |= VAR_9 <<
   VAR_4;
  break;
 }


 VAR_17 = FUNC_5(VAR_12, sizeof(struct ieee80211_ht_cap) + 2);
 FUNC_3(VAR_17, &VAR_20, VAR_19);
}

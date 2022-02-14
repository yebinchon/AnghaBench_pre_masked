
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sk_buff {int dummy; } ;
struct ieee80211_supported_band {int dummy; } ;
struct TYPE_4__ {scalar_t__ width; } ;
struct TYPE_5__ {TYPE_1__ chandef; } ;
struct TYPE_6__ {TYPE_2__ bss_conf; } ;
struct ieee80211_sub_if_data {TYPE_3__ vif; } ;
struct ieee80211_sta_he_cap {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 struct ieee80211_sta_he_cap* FUNC_0 (struct ieee80211_supported_band*,int ) ;
 struct ieee80211_supported_band* FUNC_1 (struct ieee80211_sub_if_data*) ;
 int FUNC_2 (scalar_t__*,struct ieee80211_sta_he_cap const*,scalar_t__*) ;
 scalar_t__* FUNC_3 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;

int FUNC_5(struct ieee80211_sub_if_data *VAR_6,
         struct sk_buff *VAR_7, u8 VAR_8)
{
 const struct ieee80211_sta_he_cap *VAR_9;
 struct ieee80211_supported_band *VAR_10;
 u8 *VAR_11;

 VAR_10 = FUNC_1(VAR_6);
 if (!VAR_10)
  return -VAR_0;

 VAR_9 = FUNC_0(VAR_10, VAR_5);

 if (!VAR_9 ||
     VAR_6->vif.bss_conf.chandef.width == VAR_3 ||
     VAR_6->vif.bss_conf.chandef.width == VAR_4 ||
     VAR_6->vif.bss_conf.chandef.width == VAR_2)
  return 0;

 if (FUNC_4(VAR_7) < VAR_8)
  return -VAR_1;

 VAR_11 = FUNC_3(VAR_7, VAR_8);
 FUNC_2(VAR_11, VAR_9, VAR_11 + VAR_8);

 return 0;
}

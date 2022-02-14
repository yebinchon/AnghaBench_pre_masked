
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct TYPE_8__ {int cap; int ht_supported; } ;
struct ieee80211_supported_band {TYPE_4__ ht_cap; } ;
struct TYPE_5__ {scalar_t__ width; } ;
struct TYPE_6__ {TYPE_1__ chandef; } ;
struct TYPE_7__ {TYPE_2__ bss_conf; } ;
struct ieee80211_sub_if_data {TYPE_3__ vif; } ;
struct ieee80211_ht_cap {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct ieee80211_supported_band* FUNC_0 (struct ieee80211_sub_if_data*) ;
 int FUNC_1 (int *,TYPE_4__*,int ) ;
 int * FUNC_2 (struct sk_buff*,int) ;
 int FUNC_3 (struct sk_buff*) ;

int FUNC_4(struct ieee80211_sub_if_data *VAR_5,
         struct sk_buff *VAR_6)
{
 struct ieee80211_supported_band *VAR_7;
 u8 *VAR_8;

 VAR_7 = FUNC_0(VAR_5);
 if (!VAR_7)
  return -VAR_0;

 if (!VAR_7->ht_cap.ht_supported ||
     VAR_5->vif.bss_conf.chandef.width == VAR_3 ||
     VAR_5->vif.bss_conf.chandef.width == VAR_4 ||
     VAR_5->vif.bss_conf.chandef.width == VAR_2)
  return 0;

 if (FUNC_3(VAR_6) < 2 + sizeof(struct ieee80211_ht_cap))
  return -VAR_1;

 VAR_8 = FUNC_2(VAR_6, 2 + sizeof(struct ieee80211_ht_cap));
 FUNC_1(VAR_8, &VAR_7->ht_cap, VAR_7->ht_cap.cap);

 return 0;
}

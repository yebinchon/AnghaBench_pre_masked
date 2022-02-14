
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sk_buff {int dummy; } ;
struct ieee80211_supported_band {int dummy; } ;
struct TYPE_3__ {int type; } ;
struct ieee80211_sub_if_data {TYPE_1__ vif; } ;
struct TYPE_4__ {int* mac_cap_info; } ;
struct ieee80211_sta_he_cap {TYPE_2__ he_cap_elem; } ;
struct ieee80211_addba_ext_ie {int data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct ieee80211_sta_he_cap* FUNC_0 (struct ieee80211_supported_band*,int ) ;
 struct ieee80211_supported_band* FUNC_1 (struct ieee80211_sub_if_data*) ;
 scalar_t__* FUNC_2 (struct sk_buff*,int) ;
 scalar_t__ FUNC_3 (int,int ) ;
 int FUNC_4 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_sub_if_data *VAR_4,
       struct sk_buff *VAR_5,
       const struct ieee80211_addba_ext_ie *VAR_6)
{
 struct ieee80211_supported_band *VAR_7;
 struct ieee80211_addba_ext_ie *VAR_8;
 const struct ieee80211_sta_he_cap *VAR_9;
 u8 VAR_10, VAR_11;
 u8 *VAR_12;

 VAR_7 = FUNC_1(VAR_4);
 if (!VAR_7)
  return;
 VAR_9 = FUNC_0(VAR_7, VAR_4->vif.type);
 if (!VAR_9)
  return;

 VAR_12 = FUNC_2(VAR_5, 2 + sizeof(struct ieee80211_addba_ext_ie));
 *VAR_12++ = VAR_3;
 *VAR_12++ = sizeof(struct ieee80211_addba_ext_ie);
 VAR_8 = (struct ieee80211_addba_ext_ie *)VAR_12;
 VAR_8->data = VAR_6->data & VAR_1;

 VAR_10 = FUNC_3(VAR_6->data,
      VAR_0);
 VAR_11 = FUNC_3(VAR_9->he_cap_elem.mac_cap_info[0],
          VAR_2);
 if (VAR_10 > VAR_11)
  VAR_10 = VAR_11;
 VAR_8->data |= FUNC_4(VAR_10,
         VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct ieee80211_supported_band {int dummy; } ;
struct ieee80211_sub_if_data {int dummy; } ;
struct TYPE_2__ {int phy_cap_info; } ;
struct ieee80211_sta_he_cap {TYPE_1__ he_cap_elem; int * ppe_thres; } ;


 struct ieee80211_sta_he_cap* FUNC_0 (struct ieee80211_supported_band*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int*,struct ieee80211_sta_he_cap const*,int*) ;
 int* FUNC_4 (struct sk_buff*,int) ;

__attribute__((used)) static void FUNC_5(struct ieee80211_sub_if_data *VAR_0,
    struct sk_buff *VAR_1,
    struct ieee80211_supported_band *VAR_2)
{
 u8 *VAR_3;
 const struct ieee80211_sta_he_cap *VAR_4 = ((void*)0);
 u8 VAR_5;

 VAR_4 = FUNC_0(VAR_2);
 if (!VAR_4)
  return;





 VAR_5 =
  2 + 1 + sizeof(VAR_4->he_cap_elem) +
  FUNC_1(&VAR_4->he_cap_elem) +
  FUNC_2(VAR_4->ppe_thres[0],
          VAR_4->he_cap_elem.phy_cap_info);
 VAR_3 = FUNC_4(VAR_1, VAR_5);
 FUNC_3(VAR_3, VAR_4, VAR_3 + VAR_5);
}

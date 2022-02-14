
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int* phy_cap_info; } ;
struct ieee80211_sta_he_cap {int has_he; TYPE_2__* ppe_thres; TYPE_2__ he_cap_elem; TYPE_2__ he_mcs_nss_supp; } ;
struct TYPE_3__ {struct ieee80211_sta_he_cap he_cap; } ;
struct sta_info {TYPE_1__ sta; } ;
struct ieee80211_supported_band {int dummy; } ;
struct ieee80211_sub_if_data {int dummy; } ;
struct ieee80211_he_cap_elem {int phy_cap_info; } ;


 int VAR_0 ;
 int FUNC_0 (struct ieee80211_supported_band*) ;
 int FUNC_1 (struct ieee80211_he_cap_elem*) ;
 int FUNC_2 (int const,int ) ;
 int FUNC_3 (TYPE_2__*,int const*,int) ;
 int FUNC_4 (struct ieee80211_sta_he_cap*,int ,int) ;

void
FUNC_5(struct ieee80211_sub_if_data *VAR_1,
      struct ieee80211_supported_band *VAR_2,
      const u8 *VAR_3, u8 VAR_4,
      struct sta_info *VAR_5)
{
 struct ieee80211_sta_he_cap *VAR_6 = &VAR_5->sta.he_cap;
 struct ieee80211_he_cap_elem *VAR_7 = (void *)VAR_3;
 u8 VAR_8;
 u8 VAR_9;
 u8 VAR_10;

 FUNC_4(VAR_6, 0, sizeof(*VAR_6));

 if (!VAR_3 || !FUNC_0(VAR_2))
  return;


 VAR_9 = FUNC_1(VAR_7);
 VAR_8 =
  FUNC_2(VAR_3[sizeof(VAR_6->he_cap_elem) +
      VAR_9],
          VAR_7->phy_cap_info);
 VAR_10 = sizeof(VAR_6->he_cap_elem) + VAR_9 +
   VAR_8;
 if (VAR_4 < VAR_10)
  return;

 FUNC_3(&VAR_6->he_cap_elem, VAR_3, sizeof(VAR_6->he_cap_elem));


 FUNC_3(&VAR_6->he_mcs_nss_supp,
        &VAR_3[sizeof(VAR_6->he_cap_elem)], VAR_9);


 if (VAR_6->he_cap_elem.phy_cap_info[6] &
     VAR_0)
  FUNC_3(VAR_6->ppe_thres,
         &VAR_3[sizeof(VAR_6->he_cap_elem) + VAR_9],
         VAR_8);

 VAR_6->has_he = 1;
}

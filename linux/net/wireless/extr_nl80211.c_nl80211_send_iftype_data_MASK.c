
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_2__ {int * phy_cap_info; int * mac_cap_info; } ;
struct ieee80211_sta_he_cap {int * ppe_thres; int he_mcs_nss_supp; TYPE_1__ he_cap_elem; scalar_t__ has_he; } ;
struct ieee80211_sband_iftype_data {int types_mask; struct ieee80211_sta_he_cap he_cap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int,int *) ;

__attribute__((used)) static int
FUNC_2(struct sk_buff *VAR_6,
    const struct ieee80211_sband_iftype_data *VAR_7)
{
 const struct ieee80211_sta_he_cap *VAR_8 = &VAR_7->he_cap;

 if (FUNC_0(VAR_6, VAR_5,
    VAR_7->types_mask))
  return -VAR_0;

 if (VAR_8->has_he) {
  if (FUNC_1(VAR_6, VAR_1,
       sizeof(VAR_8->he_cap_elem.mac_cap_info),
       VAR_8->he_cap_elem.mac_cap_info) ||
      FUNC_1(VAR_6, VAR_3,
       sizeof(VAR_8->he_cap_elem.phy_cap_info),
       VAR_8->he_cap_elem.phy_cap_info) ||
      FUNC_1(VAR_6, VAR_2,
       sizeof(VAR_8->he_mcs_nss_supp),
       &VAR_8->he_mcs_nss_supp) ||
      FUNC_1(VAR_6, VAR_4,
       sizeof(VAR_8->ppe_thres), VAR_8->ppe_thres))
   return -VAR_0;
 }

 return 0;
}

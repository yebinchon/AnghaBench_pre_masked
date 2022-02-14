
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ieee80211_supported_band {int dummy; } ;
struct ieee80211_he_mcs_nss_supp {int dummy; } ;
struct ieee80211_sta_he_cap {struct ieee80211_he_mcs_nss_supp he_mcs_nss_supp; } ;
struct ieee80211_he_operation {int he_mcs_nss_set; } ;
typedef int __le16 ;


 int VAR_0 ;
 struct ieee80211_sta_he_cap* FUNC_0 (struct ieee80211_supported_band*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static bool
FUNC_2(struct ieee80211_supported_band *VAR_1,
        const struct ieee80211_he_operation *VAR_2)
{
 const struct ieee80211_sta_he_cap *VAR_3 =
  FUNC_0(VAR_1);
 u16 VAR_4;
 int VAR_5;

 if (!VAR_3 || !VAR_2)
  return 0;

 VAR_4 = FUNC_1(VAR_2->he_mcs_nss_set);


 for (VAR_5 = 0; VAR_5 < 3; VAR_5++) {
  const struct ieee80211_he_mcs_nss_supp *VAR_6 =
   &VAR_3->he_mcs_nss_supp;
  u16 VAR_7 =
   FUNC_1(((__le16 *)VAR_6)[2 * VAR_5]);
  u16 VAR_8 =
   FUNC_1(((__le16 *)VAR_6)[2 * VAR_5 + 1]);
  u8 VAR_9;
  bool VAR_10 = 1;
  for (VAR_9 = 8; VAR_9 > 0; VAR_9--) {
   u8 VAR_11 = (VAR_7 >> (2 * (VAR_9 - 1))) & 3;
   u8 VAR_12 = (VAR_8 >> (2 * (VAR_9 - 1))) & 3;
   u8 VAR_13 = (VAR_4 >> (2 * (VAR_9 - 1))) & 3;

   if (VAR_13 == VAR_0)
    continue;





   if (VAR_11 == VAR_0 ||
       VAR_12 == VAR_0 ||
       (VAR_13 > VAR_11) || (VAR_13 > VAR_12)) {
    VAR_10 = 0;
    break;
   }
  }

  if (VAR_10)
   return 1;
 }


 return 0;
}

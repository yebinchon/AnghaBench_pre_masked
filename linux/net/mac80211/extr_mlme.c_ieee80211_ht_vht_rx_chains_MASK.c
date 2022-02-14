
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_4__ {int tx_mcs_map; } ;
struct ieee80211_vht_cap {TYPE_2__ supp_mcs; } ;
struct ieee80211_if_managed {int flags; } ;
struct TYPE_3__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {TYPE_1__ u; } ;
struct ieee80211_ht_cap {int mcs; } ;
struct cfg80211_bss {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int* FUNC_0 (struct cfg80211_bss*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static u8 FUNC_4(struct ieee80211_sub_if_data *VAR_5,
         struct cfg80211_bss *VAR_6)
{
 struct ieee80211_if_managed *VAR_7 = &VAR_5->u.mgd;
 const u8 *VAR_8, *VAR_9;
 const struct ieee80211_ht_cap *VAR_10;
 const struct ieee80211_vht_cap *VAR_11;
 u8 VAR_12 = 1;

 if (VAR_7->flags & VAR_0)
  return VAR_12;

 VAR_8 = FUNC_0(VAR_6, VAR_3);
 if (VAR_8 && VAR_8[1] >= sizeof(*VAR_10)) {
  VAR_10 = (void *)(VAR_8 + 2);
  VAR_12 = FUNC_1(&VAR_10->mcs);




 }

 if (VAR_7->flags & VAR_1)
  return VAR_12;

 VAR_9 = FUNC_0(VAR_6, VAR_4);
 if (VAR_9 && VAR_9[1] >= sizeof(*VAR_11)) {
  u8 VAR_13;
  u16 VAR_14;

  VAR_11 = (void *)(VAR_9 + 2);
  VAR_14 = FUNC_2(VAR_11->supp_mcs.tx_mcs_map);
  for (VAR_13 = 8; VAR_13 > 0; VAR_13--) {
   if (((VAR_14 >> (2 * (VAR_13 - 1))) & 3) !=
     VAR_2)
    break;
  }

  VAR_12 = FUNC_3(VAR_12, VAR_13);
 }

 return VAR_12;
}

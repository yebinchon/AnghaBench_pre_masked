
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_11__ {int rx_mask; } ;
struct ieee80211_ht_cap {int cap_info; int ampdu_params_info; TYPE_5__ mcs; } ;
struct TYPE_9__ {struct ieee80211_ht_cap ht_capa_mask; struct ieee80211_ht_cap ht_capa; } ;
struct TYPE_8__ {struct ieee80211_ht_cap ht_capa_mask; struct ieee80211_ht_cap ht_capa; } ;
struct TYPE_10__ {TYPE_3__ ibss; TYPE_2__ mgd; } ;
struct TYPE_7__ {int type; } ;
struct ieee80211_sub_if_data {TYPE_4__ u; TYPE_1__ vif; } ;
struct TYPE_12__ {scalar_t__* rx_mask; } ;
struct ieee80211_sta_ht_cap {int cap; scalar_t__ ampdu_factor; scalar_t__ ampdu_density; TYPE_6__ mcs; int ht_supported; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct ieee80211_ht_cap*,struct ieee80211_ht_cap*,struct ieee80211_sta_ht_cap*,int ) ;
 int FUNC_2 (struct ieee80211_ht_cap*,struct ieee80211_ht_cap*,struct ieee80211_sta_ht_cap*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;

void FUNC_5(struct ieee80211_sub_if_data *VAR_12,
         struct ieee80211_sta_ht_cap *VAR_13)
{
 struct ieee80211_ht_cap *VAR_14, *VAR_15;
 u8 *VAR_16, *VAR_17;
 int VAR_18;

 if (!VAR_13->ht_supported)
  return;

 switch (VAR_12->vif.type) {
 case 128:
  VAR_14 = &VAR_12->u.mgd.ht_capa;
  VAR_15 = &VAR_12->u.mgd.ht_capa_mask;
  break;
 case 129:
  VAR_14 = &VAR_12->u.ibss.ht_capa;
  VAR_15 = &VAR_12->u.ibss.ht_capa_mask;
  break;
 default:
  FUNC_0(1);
  return;
 }

 VAR_16 = (u8 *)(&VAR_14->mcs.rx_mask);
 VAR_17 = (u8 *)(&VAR_15->mcs.rx_mask);
 for (VAR_18 = 0; VAR_18 < VAR_11; VAR_18++) {
  u8 VAR_19 = VAR_17[VAR_18];
  VAR_13->mcs.rx_mask[VAR_18] &= ~VAR_19;

  VAR_13->mcs.rx_mask[VAR_18] |= (VAR_19 & VAR_16[VAR_18]);
 }


 FUNC_1(VAR_14, VAR_15, VAR_13,
         VAR_9);
 FUNC_1(VAR_14, VAR_15, VAR_13,
         VAR_8);


 FUNC_1(VAR_14, VAR_15, VAR_13,
         VAR_7);


 FUNC_1(VAR_14, VAR_15, VAR_13,
         VAR_5);


 FUNC_1(VAR_14, VAR_15, VAR_13,
         VAR_4);


 FUNC_2(VAR_14, VAR_15, VAR_13,
        VAR_3);


 FUNC_2(VAR_14, VAR_15, VAR_13,
        VAR_10);


 if (VAR_15->cap_info & FUNC_3(VAR_6))
  VAR_13->cap |= FUNC_4(VAR_14->cap_info) &
     VAR_6;


 if (VAR_15->ampdu_params_info &
     VAR_2) {
  u8 VAR_20 = VAR_14->ampdu_params_info &
         VAR_2;
  if (VAR_20 < VAR_13->ampdu_factor)
   VAR_13->ampdu_factor = VAR_20;
 }


 if (VAR_15->ampdu_params_info &
     VAR_0) {
  u8 VAR_21 = (VAR_14->ampdu_params_info &
   VAR_0)
   >> VAR_1;
  if (VAR_21 > VAR_13->ampdu_density)
   VAR_13->ampdu_density = VAR_21;
 }
}

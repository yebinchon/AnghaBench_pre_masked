
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vht_cap ;
typedef scalar_t__ u8 ;
struct TYPE_10__ {scalar_t__ vht_supported; scalar_t__ ht_supported; } ;
struct TYPE_9__ {TYPE_5__ vht_cap; TYPE_5__ ht_cap; } ;
struct sta_info {TYPE_4__ sta; int tdls_chandef; } ;
struct sk_buff {int dummy; } ;
struct ieee80211_vht_cap {int dummy; } ;
struct ieee80211_supported_band {TYPE_5__ vht_cap; TYPE_5__ ht_cap; int band; } ;
struct TYPE_7__ {int chandef; } ;
struct TYPE_8__ {TYPE_2__ bss_conf; } ;
struct ieee80211_sub_if_data {TYPE_3__ vif; struct ieee80211_local* local; } ;
struct ieee80211_sta_vht_cap {int cap; scalar_t__ vht_supported; scalar_t__ ht_supported; } ;
struct ieee80211_sta_ht_cap {int cap; scalar_t__ vht_supported; scalar_t__ ht_supported; } ;
struct TYPE_6__ {scalar_t__ queues; } ;
struct ieee80211_local {int sta_mtx; TYPE_1__ hw; } ;
struct ieee80211_ht_cap {int dummy; } ;
typedef int ht_cap ;


 int FUNC_0 (scalar_t__ const*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (struct ieee80211_sub_if_data*,struct sk_buff*,int,int ) ;
 int FUNC_3 (struct ieee80211_sub_if_data*,struct sk_buff*,int,int ) ;
 int FUNC_4 (scalar_t__*,int ) ;
 int FUNC_5 (struct ieee80211_sub_if_data*,struct ieee80211_sta_vht_cap*) ;
 int FUNC_6 (struct ieee80211_sub_if_data*,struct ieee80211_sta_vht_cap*) ;
 struct ieee80211_supported_band* FUNC_7 (struct ieee80211_sub_if_data*) ;
 int FUNC_8 (scalar_t__*,struct ieee80211_sta_vht_cap*,int) ;
 int FUNC_9 (scalar_t__*,struct ieee80211_sta_vht_cap*,int) ;
 size_t FUNC_10 (scalar_t__ const*,size_t,scalar_t__ const*,int ,size_t) ;
 int FUNC_11 (struct ieee80211_sub_if_data*,struct sk_buff*) ;
 int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (struct ieee80211_sub_if_data*,struct sk_buff*) ;
 int FUNC_14 (struct ieee80211_sub_if_data*,struct sk_buff*,scalar_t__ const*,int) ;
 int FUNC_15 (struct ieee80211_sub_if_data*,struct sk_buff*) ;
 int FUNC_16 (struct ieee80211_sub_if_data*,struct sk_buff*) ;
 int FUNC_17 (struct ieee80211_sub_if_data*,struct sta_info*) ;
 int FUNC_18 (struct ieee80211_sta_vht_cap*,TYPE_5__*,int) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 scalar_t__* FUNC_21 (struct sk_buff*,int) ;
 int FUNC_22 (struct sk_buff*,scalar_t__ const*,size_t) ;
 struct sta_info* FUNC_23 (struct ieee80211_sub_if_data*,scalar_t__ const*) ;
 scalar_t__ FUNC_24 (struct sta_info*,int ) ;

__attribute__((used)) static void
FUNC_25(struct ieee80211_sub_if_data *VAR_8,
       struct sk_buff *VAR_9, const u8 *VAR_10,
       u8 VAR_11, bool VAR_12,
       const u8 *VAR_13, size_t VAR_14)
{
 struct ieee80211_supported_band *VAR_15;
 struct ieee80211_local *VAR_16 = VAR_8->local;
 struct ieee80211_sta_ht_cap VAR_17;
 struct ieee80211_sta_vht_cap VAR_18;
 struct sta_info *VAR_19 = ((void*)0);
 size_t VAR_20 = 0, VAR_21;
 u8 *VAR_22;

 VAR_15 = FUNC_7(VAR_8);
 if (!VAR_15)
  return;

 FUNC_3(VAR_8, VAR_9, 0, VAR_15->band);
 FUNC_2(VAR_8, VAR_9, 0, VAR_15->band);
 FUNC_16(VAR_8, VAR_9);


 if (VAR_14) {
  static const u8 VAR_23[] = {
   129,
   138,
   136,
   131,
   132,
  };
  VAR_21 = FUNC_10(VAR_13, VAR_14,
          VAR_23,
          FUNC_0(VAR_23),
          VAR_20);
  FUNC_22(VAR_9, VAR_13 + VAR_20, VAR_21 - VAR_20);
  VAR_20 = VAR_21;
 }

 FUNC_13(VAR_8, VAR_9);


 if (VAR_16->hw.queues >= VAR_2 &&
     VAR_11 != VAR_4)
  FUNC_4(FUNC_21(VAR_9, 9), 0);


 if (VAR_14) {
  static const u8 VAR_24[] = {
   129,
   138,
   136,
   131,
   132,
   137,
   133,
   135,
   128,
   130,
  };
  VAR_21 = FUNC_10(VAR_13, VAR_14,
          VAR_24,
          FUNC_0(VAR_24),
          VAR_20);
  FUNC_22(VAR_9, VAR_13 + VAR_20, VAR_21 - VAR_20);
  VAR_20 = VAR_21;
 }

 FUNC_19(&VAR_16->sta_mtx);


 if (VAR_11 == VAR_7) {
  VAR_19 = FUNC_23(VAR_8, VAR_10);
  if (FUNC_1(!VAR_19)) {
   FUNC_20(&VAR_16->sta_mtx);
   return;
  }

  VAR_19->tdls_chandef = VAR_8->vif.bss_conf.chandef;
 }

 FUNC_15(VAR_8, VAR_9);






 FUNC_18(&VAR_17, &VAR_15->ht_cap, sizeof(VAR_17));

 if ((VAR_11 == VAR_6 ||
      VAR_11 == VAR_4) &&
     VAR_17.ht_supported) {
  FUNC_5(VAR_8, &VAR_17);


  VAR_17.cap |= VAR_3
    << VAR_0;

  VAR_22 = FUNC_21(VAR_9, sizeof(struct ieee80211_ht_cap) + 2);
  FUNC_8(VAR_22, &VAR_17, VAR_17.cap);
 } else if (VAR_11 == VAR_7 &&
     VAR_17.ht_supported && VAR_19->sta.ht_cap.ht_supported) {

  FUNC_18(&VAR_17, &VAR_19->sta.ht_cap, sizeof(VAR_17));

  VAR_22 = FUNC_21(VAR_9, sizeof(struct ieee80211_ht_cap) + 2);
  FUNC_8(VAR_22, &VAR_17, VAR_17.cap);
 }

 if (VAR_17.ht_supported &&
     (VAR_17.cap & VAR_1))
  FUNC_12(VAR_9);

 FUNC_14(VAR_8, VAR_9, VAR_10, VAR_12);


 if (VAR_14) {
  static const u8 VAR_25[] = {
   129,
   138,
   136,
   131,
   132,
   137,
   133,
   135,
   128,
   130,
   134,
  };
  VAR_21 = FUNC_10(VAR_13, VAR_14,
          VAR_25,
          FUNC_0(VAR_25),
          VAR_20);
  FUNC_22(VAR_9, VAR_13 + VAR_20, VAR_21 - VAR_20);
  VAR_20 = VAR_21;
 }


 FUNC_18(&VAR_18, &VAR_15->vht_cap, sizeof(VAR_18));
 if ((VAR_11 == VAR_6 ||
      VAR_11 == VAR_4) &&
     VAR_18.vht_supported) {
  FUNC_6(VAR_8, &VAR_18);


  if (VAR_11 == VAR_6)
   FUNC_11(VAR_8, VAR_9);

  VAR_22 = FUNC_21(VAR_9, sizeof(struct ieee80211_vht_cap) + 2);
  FUNC_9(VAR_22, &VAR_18, VAR_18.cap);
 } else if (VAR_11 == VAR_7 &&
     VAR_18.vht_supported && VAR_19->sta.vht_cap.vht_supported) {

  FUNC_18(&VAR_18, &VAR_19->sta.vht_cap, sizeof(VAR_18));


  FUNC_11(VAR_8, VAR_9);

  VAR_22 = FUNC_21(VAR_9, sizeof(struct ieee80211_vht_cap) + 2);
  FUNC_9(VAR_22, &VAR_18, VAR_18.cap);





  if (FUNC_24(VAR_19, VAR_5))
   FUNC_17(VAR_8, VAR_19);
 }

 FUNC_20(&VAR_16->sta_mtx);


 if (VAR_14) {
  VAR_21 = VAR_14;
  FUNC_22(VAR_9, VAR_13 + VAR_20, VAR_21 - VAR_20);
 }

}

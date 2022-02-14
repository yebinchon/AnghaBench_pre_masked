
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_13__ {scalar_t__ vht_supported; } ;
struct TYPE_14__ {scalar_t__ ht_supported; } ;
struct TYPE_12__ {TYPE_6__ vht_cap; TYPE_7__ ht_cap; scalar_t__ wme; } ;
struct sta_info {int tdls_chandef; TYPE_5__ sta; } ;
struct sk_buff {int dummy; } ;
struct ieee80211_vht_operation {int dummy; } ;
struct ieee80211_supported_band {scalar_t__ band; } ;
struct TYPE_10__ {int chandef; } ;
struct TYPE_11__ {TYPE_3__ bss_conf; } ;
struct ieee80211_if_managed {int const* bssid; } ;
struct TYPE_8__ {struct ieee80211_if_managed mgd; } ;
struct ieee80211_sub_if_data {TYPE_4__ vif; TYPE_1__ u; struct ieee80211_local* local; } ;
struct TYPE_9__ {scalar_t__ queues; } ;
struct ieee80211_local {int sta_mtx; TYPE_2__ hw; } ;
struct ieee80211_ht_operation {int dummy; } ;


 int FUNC_0 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (int) ;




 int VAR_5 ;
 struct ieee80211_supported_band* FUNC_2 (struct ieee80211_sub_if_data*) ;
 int FUNC_3 (int *,TYPE_7__*,int *,int,int) ;
 int FUNC_4 (int *,TYPE_6__*,int *) ;
 size_t FUNC_5 (int const*,size_t,int const*,int ,size_t) ;
 int FUNC_6 (struct ieee80211_sub_if_data*,struct sk_buff*,int const*,int) ;
 int FUNC_7 (struct ieee80211_sub_if_data*,struct sk_buff*) ;
 int FUNC_8 (struct ieee80211_sub_if_data*,struct sta_info*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (struct sk_buff*,int) ;
 int FUNC_12 (struct sk_buff*,int const*,size_t) ;
 struct sta_info* FUNC_13 (struct ieee80211_sub_if_data*,int const*) ;
 scalar_t__ FUNC_14 (struct sta_info*,int ) ;

__attribute__((used)) static void
FUNC_15(struct ieee80211_sub_if_data *VAR_6,
     struct sk_buff *VAR_7, const u8 *VAR_8,
     bool VAR_9, const u8 *VAR_10,
     size_t VAR_11)
{
 struct ieee80211_local *VAR_12 = VAR_6->local;
 struct ieee80211_if_managed *VAR_13 = &VAR_6->u.mgd;
 size_t VAR_14 = 0, VAR_15;
 struct sta_info *VAR_16, *VAR_17;
 struct ieee80211_supported_band *VAR_18;
 u8 *VAR_19;

 VAR_18 = FUNC_2(VAR_6);
 if (!VAR_18)
  return;

 FUNC_9(&VAR_12->sta_mtx);

 VAR_16 = FUNC_13(VAR_6, VAR_8);
 VAR_17 = FUNC_13(VAR_6, VAR_13->bssid);
 if (FUNC_1(!VAR_16 || !VAR_17)) {
  FUNC_10(&VAR_12->sta_mtx);
  return;
 }

 VAR_16->tdls_chandef = VAR_6->vif.bss_conf.chandef;


 if (VAR_11) {
  static const u8 VAR_20[] = {
   129,
  };
  VAR_15 = FUNC_5(VAR_10, VAR_11,
          VAR_20,
          FUNC_0(VAR_20),
          VAR_14);
  FUNC_12(VAR_7, VAR_10 + VAR_14, VAR_15 - VAR_14);
  VAR_14 = VAR_15;
 }


 if (VAR_12->hw.queues >= VAR_3 && VAR_16->sta.wme)
  FUNC_7(VAR_6, VAR_7);


 if (VAR_11) {
  static const u8 VAR_21[] = {
   129,
   130,
   131,
   128,
  };
  VAR_15 = FUNC_5(VAR_10, VAR_11,
          VAR_21,
          FUNC_0(VAR_21),
          VAR_14);
  FUNC_12(VAR_7, VAR_10 + VAR_14, VAR_15 - VAR_14);
  VAR_14 = VAR_15;
 }





 if (!VAR_17->sta.ht_cap.ht_supported && VAR_16->sta.ht_cap.ht_supported) {
  u16 VAR_22 = VAR_2 |
      VAR_0 |
      VAR_1;

  VAR_19 = FUNC_11(VAR_7, 2 + sizeof(struct ieee80211_ht_operation));
  FUNC_3(VAR_19, &VAR_16->sta.ht_cap,
        &VAR_6->vif.bss_conf.chandef, VAR_22,
        1);
 }

 FUNC_6(VAR_6, VAR_7, VAR_8, VAR_9);


 if (VAR_18->band != VAR_4 &&
     VAR_16->sta.vht_cap.vht_supported) {




  if (FUNC_14(VAR_16, VAR_5))
   FUNC_8(VAR_6, VAR_16);

  VAR_19 = FUNC_11(VAR_7, 2 + sizeof(struct ieee80211_vht_operation));
  FUNC_4(VAR_19, &VAR_16->sta.vht_cap,
         &VAR_16->tdls_chandef);
 }

 FUNC_10(&VAR_12->sta_mtx);


 if (VAR_11) {
  VAR_15 = VAR_11;
  FUNC_12(VAR_7, VAR_10 + VAR_14, VAR_15 - VAR_14);
 }
}

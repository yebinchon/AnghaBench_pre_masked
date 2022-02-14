
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {void* iftype; } ;
struct TYPE_4__ {void* type; } ;
struct ieee80211_sub_if_data {int work; int skb_queue; int encrypt_headroom; TYPE_2__ wdev; int name; TYPE_1__ vif; struct ieee80211_local* local; } ;
struct TYPE_6__ {int wiphy; scalar_t__ vif_data_size; } ;
struct ieee80211_local {int iflist_mtx; scalar_t__ monitor_sdata; int mtx; int monitor_chandef; TYPE_3__ hw; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ) ;
 void* VAR_5 ;
 int FUNC_2 (scalar_t__,int *) ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct ieee80211_local*,struct ieee80211_sub_if_data*) ;
 int FUNC_5 (struct ieee80211_local*,struct ieee80211_sub_if_data*) ;
 int FUNC_6 (struct ieee80211_sub_if_data*,void*) ;
 int FUNC_7 (TYPE_3__*,int ) ;
 int VAR_7 ;
 int FUNC_8 (struct ieee80211_sub_if_data*) ;
 int FUNC_9 (struct ieee80211_sub_if_data*,int *,int ) ;
 int FUNC_10 (struct ieee80211_sub_if_data*) ;
 struct ieee80211_sub_if_data* FUNC_11 (scalar_t__,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (scalar_t__,struct ieee80211_sub_if_data*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int ,int ,char*,char*) ;
 int FUNC_17 () ;
 char* FUNC_18 (int ) ;

int FUNC_19(struct ieee80211_local *VAR_8)
{
 struct ieee80211_sub_if_data *VAR_9;
 int VAR_10;

 if (!FUNC_7(&VAR_8->hw, VAR_6))
  return 0;

 FUNC_0();

 if (VAR_8->monitor_sdata)
  return 0;

 VAR_9 = FUNC_11(sizeof(*VAR_9) + VAR_8->hw.vif_data_size, VAR_1);
 if (!VAR_9)
  return -VAR_0;


 VAR_9->local = VAR_8;
 VAR_9->vif.type = VAR_5;
 FUNC_16(VAR_9->name, VAR_4, "%s-monitor",
   FUNC_18(VAR_8->hw.wiphy));
 VAR_9->wdev.iftype = VAR_5;

 VAR_9->encrypt_headroom = VAR_3;

 FUNC_8(VAR_9);

 VAR_10 = FUNC_4(VAR_8, VAR_9);
 if (FUNC_3(VAR_10)) {

  FUNC_10(VAR_9);
  return VAR_10;
 }

 VAR_10 = FUNC_6(VAR_9, VAR_5);
 if (VAR_10) {
  FUNC_10(VAR_9);
  return VAR_10;
 }

 FUNC_12(&VAR_8->iflist_mtx);
 FUNC_14(VAR_8->monitor_sdata, VAR_9);
 FUNC_13(&VAR_8->iflist_mtx);

 FUNC_12(&VAR_8->mtx);
 VAR_10 = FUNC_9(VAR_9, &VAR_8->monitor_chandef,
     VAR_2);
 FUNC_13(&VAR_8->mtx);
 if (VAR_10) {
  FUNC_12(&VAR_8->iflist_mtx);
  FUNC_2(VAR_8->monitor_sdata, ((void*)0));
  FUNC_13(&VAR_8->iflist_mtx);
  FUNC_17();
  FUNC_5(VAR_8, VAR_9);
  FUNC_10(VAR_9);
  return VAR_10;
 }

 FUNC_15(&VAR_9->skb_queue);
 FUNC_1(&VAR_9->work, VAR_7);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_sub_if_data {int dummy; } ;
struct ieee80211_local {int mtx; int iflist_mtx; int monitor_sdata; int hw; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int *) ;
 int VAR_0 ;
 int FUNC_2 (struct ieee80211_local*,struct ieee80211_sub_if_data*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct ieee80211_sub_if_data*) ;
 int FUNC_5 (struct ieee80211_sub_if_data*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct ieee80211_sub_if_data* FUNC_9 (int ,int ) ;
 int FUNC_10 () ;

void FUNC_11(struct ieee80211_local *VAR_1)
{
 struct ieee80211_sub_if_data *VAR_2;

 if (!FUNC_3(&VAR_1->hw, VAR_0))
  return;

 FUNC_0();

 FUNC_7(&VAR_1->iflist_mtx);

 VAR_2 = FUNC_9(VAR_1->monitor_sdata,
       FUNC_6(&VAR_1->iflist_mtx));
 if (!VAR_2) {
  FUNC_8(&VAR_1->iflist_mtx);
  return;
 }

 FUNC_1(VAR_1->monitor_sdata, ((void*)0));
 FUNC_8(&VAR_1->iflist_mtx);

 FUNC_10();

 FUNC_7(&VAR_1->mtx);
 FUNC_4(VAR_2);
 FUNC_8(&VAR_1->mtx);

 FUNC_2(VAR_1, VAR_2);

 FUNC_5(VAR_2);
}

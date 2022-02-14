
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_vif {int dummy; } ;
struct ieee80211_sub_if_data {int dev; int local; } ;
typedef int gfp_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,struct ieee80211_sub_if_data*) ;
 struct ieee80211_sub_if_data* FUNC_2 (struct ieee80211_vif*) ;

void FUNC_3(struct ieee80211_vif *VAR_0, gfp_t VAR_1)
{
 struct ieee80211_sub_if_data *VAR_2 = FUNC_2(VAR_0);

 FUNC_1(VAR_2->local, VAR_2);

 FUNC_0(VAR_2->dev, VAR_1);
}

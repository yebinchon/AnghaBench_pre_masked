
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_local {int in_reconfig; int restart_work; } ;
struct ieee80211_hw {int wiphy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 struct ieee80211_local* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct ieee80211_hw*,int ,int ,int) ;
 int FUNC_3 (int ,int *) ;
 int VAR_2 ;
 int FUNC_4 (struct ieee80211_local*) ;
 int FUNC_5 (int ,char*) ;

void FUNC_6(struct ieee80211_hw *VAR_3)
{
 struct ieee80211_local *VAR_4 = FUNC_1(VAR_3);

 FUNC_4(VAR_4);

 FUNC_5(VAR_3->wiphy,
     "Hardware restart was requested\n");


 FUNC_2(VAR_3, VAR_0,
     VAR_1,
     0);





 VAR_4->in_reconfig = 1;
 FUNC_0();

 FUNC_3(VAR_2, &VAR_4->restart_work);
}

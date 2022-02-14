
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_local {int scan_work; int hw; int scan_info; int scanning; } ;
struct ieee80211_hw {int dummy; } ;
struct cfg80211_scan_info {int aborted; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ieee80211_local* FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (int *,struct cfg80211_scan_info*,int) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (struct ieee80211_local*,int ) ;

void FUNC_5(struct ieee80211_hw *VAR_2,
         struct cfg80211_scan_info *VAR_3)
{
 struct ieee80211_local *VAR_4 = FUNC_0(VAR_2);

 FUNC_4(VAR_4, VAR_3->aborted);

 FUNC_3(VAR_1, &VAR_4->scanning);
 if (VAR_3->aborted)
  FUNC_3(VAR_0, &VAR_4->scanning);

 FUNC_2(&VAR_4->scan_info, VAR_3, sizeof(*VAR_3));

 FUNC_1(&VAR_4->hw, &VAR_4->scan_work, 0);
}

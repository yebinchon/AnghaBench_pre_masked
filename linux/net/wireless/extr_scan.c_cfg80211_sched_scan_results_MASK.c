
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct wiphy {int dummy; } ;
struct cfg80211_sched_scan_request {int report_results; } ;
struct cfg80211_registered_device {int sched_scan_res_wk; } ;


 struct cfg80211_sched_scan_request* FUNC_0 (struct cfg80211_registered_device*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct wiphy*,int ) ;
 struct cfg80211_registered_device* FUNC_5 (struct wiphy*) ;

void FUNC_6(struct wiphy *VAR_1, u64 VAR_2)
{
 struct cfg80211_registered_device *VAR_3 = FUNC_5(VAR_1);
 struct cfg80211_sched_scan_request *VAR_4;

 FUNC_4(VAR_1, VAR_2);


 FUNC_2();
 VAR_4 = FUNC_0(VAR_3, VAR_2);
 if (VAR_4) {
  VAR_4->report_results = 1;
  FUNC_1(VAR_0, &VAR_3->sched_scan_res_wk);
 }
 FUNC_3();
}

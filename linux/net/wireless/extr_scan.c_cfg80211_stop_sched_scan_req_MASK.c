
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfg80211_sched_scan_request {int reqid; int dev; } ;
struct cfg80211_registered_device {int dummy; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (struct cfg80211_registered_device*,struct cfg80211_sched_scan_request*) ;
 int FUNC_2 (struct cfg80211_sched_scan_request*,int ) ;
 int FUNC_3 (struct cfg80211_registered_device*,int ,int ) ;

int FUNC_4(struct cfg80211_registered_device *VAR_1,
     struct cfg80211_sched_scan_request *VAR_2,
     bool VAR_3)
{
 FUNC_0();

 if (!VAR_3) {
  int VAR_4 = FUNC_3(VAR_1, VAR_2->dev, VAR_2->reqid);
  if (VAR_4)
   return VAR_4;
 }

 FUNC_2(VAR_2, VAR_0);

 FUNC_1(VAR_1, VAR_2);

 return 0;
}

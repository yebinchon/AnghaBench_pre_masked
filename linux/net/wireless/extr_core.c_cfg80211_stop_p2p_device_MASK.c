
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wireless_dev {scalar_t__ iftype; int is_running; } ;
struct cfg80211_registered_device {TYPE_2__* scan_req; int opencount; } ;
struct TYPE_3__ {int aborted; } ;
struct TYPE_4__ {TYPE_1__ info; int notified; struct wireless_dev* wdev; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct cfg80211_registered_device*,int) ;
 int FUNC_3 (struct cfg80211_registered_device*,struct wireless_dev*) ;
 int FUNC_4 (struct wireless_dev*) ;

void FUNC_5(struct cfg80211_registered_device *VAR_1,
         struct wireless_dev *VAR_2)
{
 FUNC_0();

 if (FUNC_1(VAR_2->iftype != VAR_0))
  return;

 if (!FUNC_4(VAR_2))
  return;

 FUNC_3(VAR_1, VAR_2);
 VAR_2->is_running = 0;

 VAR_1->opencount--;

 if (VAR_1->scan_req && VAR_1->scan_req->wdev == VAR_2) {
  if (FUNC_1(!VAR_1->scan_req->notified))
   VAR_1->scan_req->info.aborted = 1;
  FUNC_2(VAR_1, 0);
 }
}

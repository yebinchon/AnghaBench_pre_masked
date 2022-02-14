
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wrqu ;
typedef union iwreq_data {int dummy; } iwreq_data ;
struct wireless_dev {scalar_t__ netdev; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int aborted; } ;
struct cfg80211_scan_request {int flags; TYPE_1__ info; int scan_start; struct wireless_dev* wdev; } ;
struct cfg80211_registered_device {struct sk_buff* scan_msg; struct cfg80211_scan_request* scan_req; int bss_lock; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct cfg80211_registered_device*,int ) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct cfg80211_scan_request*) ;
 int FUNC_5 (union iwreq_data*,int ,int) ;
 struct sk_buff* FUNC_6 (struct cfg80211_registered_device*,struct wireless_dev*,int ) ;
 int FUNC_7 (struct cfg80211_registered_device*,struct sk_buff*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (scalar_t__,int ,union iwreq_data*,int *) ;

void FUNC_11(struct cfg80211_registered_device *VAR_2,
      bool VAR_3)
{
 struct cfg80211_scan_request *VAR_4;
 struct wireless_dev *VAR_5;
 struct sk_buff *VAR_6;




 FUNC_0();

 if (VAR_2->scan_msg) {
  FUNC_7(VAR_2, VAR_2->scan_msg);
  VAR_2->scan_msg = ((void*)0);
  return;
 }

 VAR_4 = VAR_2->scan_req;
 if (!VAR_4)
  return;

 VAR_5 = VAR_4->wdev;






 if (VAR_5->netdev)
  FUNC_2(VAR_5->netdev);

 if (!VAR_4->info.aborted &&
     VAR_4->flags & VAR_0) {

  FUNC_8(&VAR_2->bss_lock);
  FUNC_1(VAR_2, VAR_4->scan_start);
  FUNC_9(&VAR_2->bss_lock);
 }

 VAR_6 = FUNC_6(VAR_2, VAR_5, VAR_4->info.aborted);
 if (VAR_5->netdev)
  FUNC_3(VAR_5->netdev);

 VAR_2->scan_req = ((void*)0);
 FUNC_4(VAR_4);

 if (!VAR_3)
  VAR_2->scan_msg = VAR_6;
 else
  FUNC_7(VAR_2, VAR_6);
}

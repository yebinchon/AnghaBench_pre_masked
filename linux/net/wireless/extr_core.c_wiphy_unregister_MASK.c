
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wiphy {int dummy; } ;
struct TYPE_3__ {int registered; scalar_t__ wowlan_config; int dev; int debugfsdir; int wdev_list; } ;
struct cfg80211_registered_device {int opencount; TYPE_2__* ops; TYPE_1__ wiphy; int propagate_cac_done_wk; int propagate_radar_detect_wk; int mlme_unreg_wk; int sched_scan_stop_wk; int destroy_work; int dfs_update_channels_wk; int event_work; int conn_work; int scan_done_wk; int list; scalar_t__ rfkill; int dev_wait; } ;
struct TYPE_4__ {scalar_t__ set_wakeup; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct cfg80211_registered_device*) ;
 int FUNC_4 (struct cfg80211_registered_device*) ;
 int VAR_1 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct cfg80211_registered_device*,int ) ;
 int FUNC_11 (struct cfg80211_registered_device*,int) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (struct wiphy*) ;
 struct cfg80211_registered_device* FUNC_18 (struct wiphy*) ;

void FUNC_19(struct wiphy *VAR_2)
{
 struct cfg80211_registered_device *VAR_3 = FUNC_18(VAR_2);

 FUNC_16(VAR_3->dev_wait, ({
  int VAR_4;
  FUNC_13();
  VAR_4 = VAR_3->opencount;
  FUNC_14();
  VAR_4 == 0; }));

 if (VAR_3->rfkill)
  FUNC_12(VAR_3->rfkill);

 FUNC_13();
 FUNC_10(VAR_3, VAR_0);
 VAR_3->wiphy.registered = 0;

 FUNC_0(!FUNC_9(&VAR_3->wiphy.wdev_list));





 FUNC_5(VAR_3->wiphy.debugfsdir);
 FUNC_8(&VAR_3->list);
 FUNC_15();





 FUNC_17(VAR_2);

 VAR_1++;
 FUNC_6(&VAR_3->wiphy.dev);

 FUNC_14();

 FUNC_7(&VAR_3->scan_done_wk);
 FUNC_2(&VAR_3->conn_work);
 FUNC_7(&VAR_3->event_work);
 FUNC_1(&VAR_3->dfs_update_channels_wk);
 FUNC_7(&VAR_3->destroy_work);
 FUNC_7(&VAR_3->sched_scan_stop_wk);
 FUNC_7(&VAR_3->mlme_unreg_wk);
 FUNC_7(&VAR_3->propagate_radar_detect_wk);
 FUNC_7(&VAR_3->propagate_cac_done_wk);





 FUNC_4(VAR_3);
 FUNC_3(VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wireless_dev {int list; scalar_t__ identifier; int pmsr_free_wk; int pmsr_lock; int pmsr_list; int mgmt_registrations_lock; int mgmt_registrations; int event_lock; int event_list; int mtx; } ;
struct TYPE_2__ {int wdev_list; } ;
struct cfg80211_registered_device {int devlist_generation; TYPE_1__ wiphy; scalar_t__ wdev_id; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct cfg80211_registered_device*,struct wireless_dev*,int ) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct cfg80211_registered_device *VAR_2,
   struct wireless_dev *VAR_3)
{
 FUNC_3(&VAR_3->mtx);
 FUNC_0(&VAR_3->event_list);
 FUNC_5(&VAR_3->event_lock);
 FUNC_0(&VAR_3->mgmt_registrations);
 FUNC_5(&VAR_3->mgmt_registrations_lock);
 FUNC_0(&VAR_3->pmsr_list);
 FUNC_5(&VAR_3->pmsr_lock);
 FUNC_1(&VAR_3->pmsr_free_wk, VAR_1);
 if (!VAR_3->identifier)
  VAR_3->identifier = ++VAR_2->wdev_id;
 FUNC_2(&VAR_3->list, &VAR_2->wiphy.wdev_list);
 VAR_2->devlist_generation++;

 FUNC_4(VAR_2, VAR_3, VAR_0);
}

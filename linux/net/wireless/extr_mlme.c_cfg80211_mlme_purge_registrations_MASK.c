
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wireless_dev {int mgmt_registrations_lock; int mgmt_registrations; int wiphy; } ;
struct cfg80211_registered_device {int mlme_unreg_lock; int mlme_unreg; } ;


 int FUNC_0 (struct cfg80211_registered_device*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct cfg80211_registered_device* FUNC_6 (int ) ;

void FUNC_7(struct wireless_dev *VAR_0)
{
 struct cfg80211_registered_device *VAR_1 = FUNC_6(VAR_0->wiphy);

 FUNC_3(&VAR_0->mgmt_registrations_lock);
 FUNC_2(&VAR_1->mlme_unreg_lock);
 FUNC_1(&VAR_0->mgmt_registrations, &VAR_1->mlme_unreg);
 FUNC_4(&VAR_1->mlme_unreg_lock);
 FUNC_5(&VAR_0->mgmt_registrations_lock);

 FUNC_0(VAR_1);
}

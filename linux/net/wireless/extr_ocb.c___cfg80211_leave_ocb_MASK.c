
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wireless_dev {scalar_t__ iftype; int chandef; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct cfg80211_registered_device {TYPE_1__* ops; } ;
struct TYPE_2__ {int leave_ocb; } ;


 int FUNC_0 (struct wireless_dev*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (struct cfg80211_registered_device*,struct net_device*) ;

int FUNC_3(struct cfg80211_registered_device *VAR_2,
    struct net_device *VAR_3)
{
 struct wireless_dev *VAR_4 = VAR_3->ieee80211_ptr;
 int VAR_5;

 FUNC_0(VAR_4);

 if (VAR_3->ieee80211_ptr->iftype != VAR_1)
  return -VAR_0;

 if (!VAR_2->ops->leave_ocb)
  return -VAR_0;

 VAR_5 = FUNC_2(VAR_2, VAR_3);
 if (!VAR_5)
  FUNC_1(&VAR_4->chandef, 0, sizeof(VAR_4->chandef));

 return VAR_5;
}

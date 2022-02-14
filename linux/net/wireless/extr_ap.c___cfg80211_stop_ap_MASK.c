
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wireless_dev {scalar_t__ iftype; scalar_t__ ssid_len; int chandef; scalar_t__ beacon_interval; scalar_t__ conn_owner_nlportid; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct cfg80211_registered_device {TYPE_1__* ops; } ;
struct TYPE_2__ {int stop_ap; } ;


 int FUNC_0 (struct wireless_dev*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct cfg80211_registered_device*) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (struct wireless_dev*) ;
 int FUNC_4 (struct cfg80211_registered_device*,struct net_device*,int *) ;
 int FUNC_5 (struct cfg80211_registered_device*,struct net_device*) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct cfg80211_registered_device *VAR_5,
         struct net_device *VAR_6, bool VAR_7)
{
 struct wireless_dev *VAR_8 = VAR_6->ieee80211_ptr;
 int VAR_9;

 FUNC_0(VAR_8);

 if (!VAR_5->ops->stop_ap)
  return -VAR_1;

 if (VAR_6->ieee80211_ptr->iftype != VAR_2 &&
     VAR_6->ieee80211_ptr->iftype != VAR_3)
  return -VAR_1;

 if (!VAR_8->beacon_interval)
  return -VAR_0;

 VAR_9 = FUNC_5(VAR_5, VAR_6);
 if (!VAR_9) {
  VAR_8->conn_owner_nlportid = 0;
  VAR_8->beacon_interval = 0;
  FUNC_2(&VAR_8->chandef, 0, sizeof(VAR_8->chandef));
  VAR_8->ssid_len = 0;
  FUNC_4(VAR_5, VAR_6, ((void*)0));
  if (VAR_7)
   FUNC_3(VAR_8);




  FUNC_1(VAR_5);
 }

 FUNC_6(&VAR_4);

 return VAR_9;
}

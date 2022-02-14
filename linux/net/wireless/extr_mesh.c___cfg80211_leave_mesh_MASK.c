
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wireless_dev {scalar_t__ iftype; int chandef; scalar_t__ beacon_interval; scalar_t__ mesh_id_len; scalar_t__ conn_owner_nlportid; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct cfg80211_registered_device {TYPE_1__* ops; } ;
struct TYPE_2__ {int leave_mesh; } ;


 int FUNC_0 (struct wireless_dev*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct cfg80211_registered_device*) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (struct cfg80211_registered_device*,struct net_device*) ;
 int FUNC_4 (struct cfg80211_registered_device*,struct net_device*,int *) ;

int FUNC_5(struct cfg80211_registered_device *VAR_3,
     struct net_device *VAR_4)
{
 struct wireless_dev *VAR_5 = VAR_4->ieee80211_ptr;
 int VAR_6;

 FUNC_0(VAR_5);

 if (VAR_4->ieee80211_ptr->iftype != VAR_2)
  return -VAR_1;

 if (!VAR_3->ops->leave_mesh)
  return -VAR_1;

 if (!VAR_5->mesh_id_len)
  return -VAR_0;

 VAR_6 = FUNC_3(VAR_3, VAR_4);
 if (!VAR_6) {
  VAR_5->conn_owner_nlportid = 0;
  VAR_5->mesh_id_len = 0;
  VAR_5->beacon_interval = 0;
  FUNC_2(&VAR_5->chandef, 0, sizeof(VAR_5->chandef));
  FUNC_4(VAR_3, VAR_4, ((void*)0));
  FUNC_1(VAR_3);
 }

 return VAR_6;
}

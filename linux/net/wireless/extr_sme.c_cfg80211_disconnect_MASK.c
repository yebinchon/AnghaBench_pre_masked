
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct wireless_dev {scalar_t__ ssid_len; int current_bss; scalar_t__ conn; scalar_t__ conn_owner_nlportid; int * connect_keys; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct cfg80211_registered_device {TYPE_1__* ops; } ;
struct TYPE_2__ {int disconnect; } ;


 int FUNC_0 (struct wireless_dev*) ;
 int FUNC_1 (struct cfg80211_registered_device*,struct net_device*) ;
 int FUNC_2 (struct wireless_dev*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct cfg80211_registered_device*,struct net_device*,int ) ;

int FUNC_5(struct cfg80211_registered_device *VAR_0,
   struct net_device *VAR_1, u16 VAR_2, bool VAR_3)
{
 struct wireless_dev *VAR_4 = VAR_1->ieee80211_ptr;
 int VAR_5 = 0;

 FUNC_0(VAR_4);

 FUNC_3(VAR_4->connect_keys);
 VAR_4->connect_keys = ((void*)0);

 VAR_4->conn_owner_nlportid = 0;

 if (VAR_4->conn)
  VAR_5 = FUNC_2(VAR_4, VAR_2);
 else if (!VAR_0->ops->disconnect)
  FUNC_1(VAR_0, VAR_1);
 else if (VAR_4->ssid_len)
  VAR_5 = FUNC_4(VAR_0, VAR_1, VAR_2);






 if (!VAR_4->current_bss)
  VAR_4->ssid_len = 0;

 return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct wireless_dev {TYPE_3__* current_bss; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct cfg80211_registered_device {TYPE_1__* ops; } ;
struct TYPE_5__ {int bssid; } ;
struct TYPE_6__ {TYPE_2__ pub; } ;
struct TYPE_4__ {int deauth; } ;


 int FUNC_0 (struct wireless_dev*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct cfg80211_registered_device*,struct net_device*,int *,int *,int ,int ,int) ;
 int FUNC_2 (int *,int ,int) ;

void FUNC_3(struct cfg80211_registered_device *VAR_2,
   struct net_device *VAR_3)
{
 struct wireless_dev *VAR_4 = VAR_3->ieee80211_ptr;
 u8 VAR_5[VAR_0];

 FUNC_0(VAR_4);

 if (!VAR_2->ops->deauth)
  return;

 if (!VAR_4->current_bss)
  return;

 FUNC_2(VAR_5, VAR_4->current_bss->pub.bssid, VAR_0);
 FUNC_1(VAR_2, VAR_3, VAR_5, ((void*)0), 0,
        VAR_1, 0);
}

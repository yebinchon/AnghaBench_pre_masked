
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ ssid_len; } ;
struct TYPE_7__ {TYPE_2__ ibss; } ;
struct wireless_dev {TYPE_3__ wext; int chandef; scalar_t__ ssid_len; TYPE_4__* current_bss; int wiphy; int * connect_keys; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct cfg80211_registered_device {TYPE_1__* ops; } ;
struct TYPE_8__ {int pub; } ;
struct TYPE_5__ {scalar_t__ del_key; } ;


 int FUNC_0 (struct wireless_dev*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct cfg80211_registered_device*) ;
 int FUNC_3 (TYPE_4__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (struct cfg80211_registered_device*,struct net_device*,int,int,int *) ;
 int FUNC_7 (struct cfg80211_registered_device*,struct net_device*,int *) ;
 struct cfg80211_registered_device* FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(struct net_device *VAR_0, bool VAR_1)
{
 struct wireless_dev *VAR_2 = VAR_0->ieee80211_ptr;
 struct cfg80211_registered_device *VAR_3 = FUNC_8(VAR_2->wiphy);
 int VAR_4;

 FUNC_0(VAR_2);

 FUNC_4(VAR_2->connect_keys);
 VAR_2->connect_keys = ((void*)0);

 FUNC_7(VAR_3, VAR_0, ((void*)0));





 if (VAR_3->ops->del_key)
  for (VAR_4 = 0; VAR_4 < 6; VAR_4++)
   FUNC_6(VAR_3, VAR_0, VAR_4, 0, ((void*)0));

 if (VAR_2->current_bss) {
  FUNC_3(VAR_2->current_bss);
  FUNC_1(VAR_2->wiphy, &VAR_2->current_bss->pub);
 }

 VAR_2->current_bss = ((void*)0);
 VAR_2->ssid_len = 0;
 FUNC_5(&VAR_2->chandef, 0, sizeof(VAR_2->chandef));




 FUNC_2(VAR_3);
}

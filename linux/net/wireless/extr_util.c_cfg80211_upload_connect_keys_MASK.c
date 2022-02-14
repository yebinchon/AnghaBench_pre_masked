
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wireless_dev {TYPE_2__* connect_keys; struct net_device* netdev; int wiphy; } ;
struct net_device {int dummy; } ;
struct cfg80211_registered_device {int dummy; } ;
struct TYPE_4__ {int def; TYPE_1__* params; } ;
struct TYPE_3__ {int cipher; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct net_device*,char*,int) ;
 scalar_t__ FUNC_2 (struct cfg80211_registered_device*,struct net_device*,int,int,int *,TYPE_1__*) ;
 scalar_t__ FUNC_3 (struct cfg80211_registered_device*,struct net_device*,int,int,int) ;
 struct cfg80211_registered_device* FUNC_4 (int ) ;

void FUNC_5(struct wireless_dev *VAR_1)
{
 struct cfg80211_registered_device *VAR_2 = FUNC_4(VAR_1->wiphy);
 struct net_device *VAR_3 = VAR_1->netdev;
 int VAR_4;

 if (!VAR_1->connect_keys)
  return;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if (!VAR_1->connect_keys->params[VAR_4].cipher)
   continue;
  if (FUNC_2(VAR_2, VAR_3, VAR_4, 0, ((void*)0),
     &VAR_1->connect_keys->params[VAR_4])) {
   FUNC_1(VAR_3, "failed to set key %d\n", VAR_4);
   continue;
  }
  if (VAR_1->connect_keys->def == VAR_4 &&
      FUNC_3(VAR_2, VAR_3, VAR_4, 1, 1)) {
   FUNC_1(VAR_3, "failed to set defkey %d\n", VAR_4);
   continue;
  }
 }

 FUNC_0(VAR_1->connect_keys);
 VAR_1->connect_keys = ((void*)0);
}

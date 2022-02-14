
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dev_addr; } ;
struct TYPE_2__ {int type; } ;
struct ieee80211_sub_if_data {int wdev; TYPE_1__ vif; } ;


 int VAR_0 ;
 struct ieee80211_sub_if_data* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct ieee80211_sub_if_data*,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_1)
{
 struct ieee80211_sub_if_data *VAR_2 = FUNC_0(VAR_1);
 int VAR_3;


 if (!FUNC_3(VAR_1->dev_addr))
  return -VAR_0;

 VAR_3 = FUNC_1(VAR_2, VAR_2->vif.type);
 if (VAR_3)
  return VAR_3;

 return FUNC_2(&VAR_2->wdev, 1);
}

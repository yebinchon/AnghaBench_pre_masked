
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct cfg80211_registered_device {int wiphy; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* set_power_mgmt ) (int *,struct net_device*,int,int) ;} ;


 int FUNC_0 (int *,struct net_device*,int,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,struct net_device*,int,int) ;

__attribute__((used)) static inline int FUNC_3(struct cfg80211_registered_device *VAR_0,
          struct net_device *VAR_1, bool VAR_2,
          int VAR_3)
{
 int VAR_4;
 FUNC_2(&VAR_0->wiphy, VAR_1, VAR_2, VAR_3);
 VAR_4 = VAR_0->ops->set_power_mgmt(&VAR_0->wiphy, VAR_1, VAR_2, VAR_3);
 FUNC_1(&VAR_0->wiphy, VAR_4);
 return VAR_4;
}

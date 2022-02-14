
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct cfg802154_registered_device {int wpan_phy; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* del_virtual_intf_deprecated ) (int *,struct net_device*) ;} ;


 int FUNC_0 (int *,struct net_device*) ;

__attribute__((used)) static inline void
FUNC_1(struct cfg802154_registered_device *VAR_0,
     struct net_device *VAR_1)
{
 VAR_0->ops->del_virtual_intf_deprecated(&VAR_0->wpan_phy, VAR_1);
}

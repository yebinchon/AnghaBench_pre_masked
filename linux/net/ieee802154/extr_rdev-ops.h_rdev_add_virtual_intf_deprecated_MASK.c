
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct cfg802154_registered_device {int wpan_phy; TYPE_1__* ops; } ;
struct TYPE_2__ {struct net_device* (* add_virtual_intf_deprecated ) (int *,char const*,unsigned char,int) ;} ;


 struct net_device* FUNC_0 (int *,char const*,unsigned char,int) ;

__attribute__((used)) static inline struct net_device *
FUNC_1(struct cfg802154_registered_device *VAR_0,
     const char *VAR_1,
     unsigned char VAR_2,
     int VAR_3)
{
 return VAR_0->ops->add_virtual_intf_deprecated(&VAR_0->wpan_phy, VAR_1,
            VAR_2, VAR_3);
}

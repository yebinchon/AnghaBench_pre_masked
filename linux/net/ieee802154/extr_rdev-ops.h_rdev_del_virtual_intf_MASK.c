
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpan_dev {int dummy; } ;
struct cfg802154_registered_device {int wpan_phy; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* del_virtual_intf ) (int *,struct wpan_dev*) ;} ;


 int FUNC_0 (int *,struct wpan_dev*) ;
 int FUNC_1 (int *,struct wpan_dev*) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static inline int
FUNC_3(struct cfg802154_registered_device *VAR_0,
        struct wpan_dev *VAR_1)
{
 int VAR_2;

 FUNC_1(&VAR_0->wpan_phy, VAR_1);
 VAR_2 = VAR_0->ops->del_virtual_intf(&VAR_0->wpan_phy, VAR_1);
 FUNC_2(&VAR_0->wpan_phy, VAR_2);
 return VAR_2;
}

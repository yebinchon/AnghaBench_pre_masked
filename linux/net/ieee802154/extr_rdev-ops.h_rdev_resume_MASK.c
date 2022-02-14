
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cfg802154_registered_device {int wpan_phy; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* resume ) (int *) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;

__attribute__((used)) static inline int
FUNC_3(struct cfg802154_registered_device *VAR_0)
{
 int VAR_1;
 FUNC_1(&VAR_0->wpan_phy);
 VAR_1 = VAR_0->ops->resume(&VAR_0->wpan_phy);
 FUNC_2(&VAR_0->wpan_phy, VAR_1);
 return VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct cfg802154_registered_device {int wpan_phy; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* set_channel ) (int *,int ,int ) ;} ;


 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,int ) ;

__attribute__((used)) static inline int
FUNC_3(struct cfg802154_registered_device *VAR_0, u8 VAR_1, u8 VAR_2)
{
 int VAR_3;

 FUNC_2(&VAR_0->wpan_phy, VAR_1, VAR_2);
 VAR_3 = VAR_0->ops->set_channel(&VAR_0->wpan_phy, VAR_1, VAR_2);
 FUNC_1(&VAR_0->wpan_phy, VAR_3);
 return VAR_3;
}

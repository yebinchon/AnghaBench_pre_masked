
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpan_phy_cca {int dummy; } ;
struct cfg802154_registered_device {int wpan_phy; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* set_cca_mode ) (int *,struct wpan_phy_cca const*) ;} ;


 int FUNC_0 (int *,struct wpan_phy_cca const*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,struct wpan_phy_cca const*) ;

__attribute__((used)) static inline int
FUNC_3(struct cfg802154_registered_device *VAR_0,
    const struct wpan_phy_cca *VAR_1)
{
 int VAR_2;

 FUNC_2(&VAR_0->wpan_phy, VAR_1);
 VAR_2 = VAR_0->ops->set_cca_mode(&VAR_0->wpan_phy, VAR_1);
 FUNC_1(&VAR_0->wpan_phy, VAR_2);
 return VAR_2;
}

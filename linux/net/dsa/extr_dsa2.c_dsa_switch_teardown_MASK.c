
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dsa_switch {int * devlink; TYPE_1__* ops; scalar_t__ slave_mii_bus; } ;
struct TYPE_2__ {int (* teardown ) (struct dsa_switch*) ;scalar_t__ phy_read; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct dsa_switch*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct dsa_switch*) ;

__attribute__((used)) static void FUNC_5(struct dsa_switch *VAR_0)
{
 if (VAR_0->slave_mii_bus && VAR_0->ops->phy_read)
  FUNC_3(VAR_0->slave_mii_bus);

 FUNC_2(VAR_0);

 if (VAR_0->ops->teardown)
  VAR_0->ops->teardown(VAR_0);

 if (VAR_0->devlink) {
  FUNC_1(VAR_0->devlink);
  FUNC_0(VAR_0->devlink);
  VAR_0->devlink = ((void*)0);
 }

}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dsa_switch {int * devlink; int slave_mii_bus; int dev; TYPE_1__* ops; int phys_mii_mask; } ;
struct TYPE_2__ {int (* setup ) (struct dsa_switch*) ;scalar_t__ phy_read; } ;


 int VAR_0 ;
 int * FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int FUNC_5 (struct dsa_switch*) ;
 int FUNC_6 (struct dsa_switch*) ;
 int FUNC_7 (struct dsa_switch*) ;
 int FUNC_8 (struct dsa_switch*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct dsa_switch*) ;

__attribute__((used)) static int FUNC_11(struct dsa_switch *VAR_2)
{
 int VAR_3 = 0;






 VAR_2->phys_mii_mask |= FUNC_8(VAR_2);




 VAR_2->devlink = FUNC_0(&VAR_1, 0);
 if (!VAR_2->devlink)
  return -VAR_0;

 VAR_3 = FUNC_2(VAR_2->devlink, VAR_2->dev);
 if (VAR_3)
  goto free_devlink;

 VAR_3 = FUNC_6(VAR_2);
 if (VAR_3)
  goto unregister_devlink;

 VAR_3 = VAR_2->ops->setup(VAR_2);
 if (VAR_3 < 0)
  goto unregister_notifier;

 if (!VAR_2->slave_mii_bus && VAR_2->ops->phy_read) {
  VAR_2->slave_mii_bus = FUNC_4(VAR_2->dev);
  if (!VAR_2->slave_mii_bus) {
   VAR_3 = -VAR_0;
   goto unregister_notifier;
  }

  FUNC_5(VAR_2);

  VAR_3 = FUNC_9(VAR_2->slave_mii_bus);
  if (VAR_3 < 0)
   goto unregister_notifier;
 }

 return 0;

unregister_notifier:
 FUNC_7(VAR_2);
unregister_devlink:
 FUNC_3(VAR_2->devlink);
free_devlink:
 FUNC_1(VAR_2->devlink);
 VAR_2->devlink = ((void*)0);

 return VAR_3;
}

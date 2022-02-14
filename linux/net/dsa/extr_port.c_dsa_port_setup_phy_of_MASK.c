
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dev; } ;
struct phy_device {TYPE_2__ mdio; } ;
struct dsa_switch {int dev; TYPE_1__* ops; } ;
struct dsa_port {int index; struct dsa_switch* ds; } ;
struct TYPE_3__ {int (* adjust_link ) (struct dsa_switch*,int,struct phy_device*) ;} ;


 scalar_t__ FUNC_0 (struct phy_device*) ;
 int FUNC_1 (struct phy_device*) ;
 int FUNC_2 (int ,char*,int ) ;
 struct phy_device* FUNC_3 (struct dsa_port*) ;
 int FUNC_4 (struct phy_device*) ;
 int FUNC_5 (struct phy_device*) ;
 int FUNC_6 (struct phy_device*) ;
 int FUNC_7 (struct phy_device*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct dsa_switch*,int,struct phy_device*) ;

__attribute__((used)) static int FUNC_10(struct dsa_port *VAR_0, bool VAR_1)
{
 struct dsa_switch *VAR_2 = VAR_0->ds;
 struct phy_device *VAR_3;
 int VAR_4 = VAR_0->index;
 int VAR_5 = 0;

 VAR_3 = FUNC_3(VAR_0);
 if (!VAR_3)
  return 0;

 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 if (VAR_1) {
  VAR_5 = FUNC_5(VAR_3);
  if (VAR_5 < 0)
   goto err_put_dev;

  VAR_5 = FUNC_4(VAR_3);
  if (VAR_5 < 0)
   goto err_put_dev;
 } else {
  VAR_5 = FUNC_6(VAR_3);
  if (VAR_5 < 0)
   goto err_put_dev;
 }

 if (VAR_2->ops->adjust_link)
  VAR_2->ops->adjust_link(VAR_2, VAR_4, VAR_3);

 FUNC_2(VAR_2->dev, "enabled port's phy: %s", FUNC_7(VAR_3));

err_put_dev:
 FUNC_8(&VAR_3->mdio.dev);
 return VAR_5;
}

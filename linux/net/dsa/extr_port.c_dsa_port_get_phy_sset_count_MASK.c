
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct phy_device {TYPE_1__ mdio; } ;
struct dsa_port {int dn; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct phy_device*) ;
 struct phy_device* FUNC_1 (struct dsa_port*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct phy_device*) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct dsa_port *VAR_1)
{
 struct phy_device *VAR_2;
 int VAR_3 = -VAR_0;

 if (FUNC_2(VAR_1->dn))
  return VAR_3;

 VAR_2 = FUNC_1(VAR_1);
 if (FUNC_0(VAR_2))
  return VAR_3;

 VAR_3 = FUNC_3(VAR_2);
 FUNC_4(&VAR_2->mdio.dev);

 return VAR_3;
}

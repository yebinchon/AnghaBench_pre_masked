
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int dev; } ;
struct phy_device {int interface; TYPE_2__ mdio; } ;
struct dsa_switch {TYPE_1__* ops; int dev; } ;
struct dsa_port {int index; struct dsa_switch* ds; struct device_node* dn; } ;
struct device_node {int dummy; } ;
struct TYPE_3__ {int (* adjust_link ) (struct dsa_switch*,int,struct phy_device*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct phy_device*) ;
 int FUNC_2 (struct device_node*) ;
 struct phy_device* FUNC_3 (struct device_node*) ;
 int FUNC_4 (struct device_node*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct dsa_switch*,int,struct phy_device*) ;

__attribute__((used)) static int FUNC_7(struct dsa_port *VAR_1)
{
 struct device_node *VAR_2 = VAR_1->dn;
 struct dsa_switch *VAR_3 = VAR_1->ds;
 struct phy_device *VAR_4;
 int VAR_5 = VAR_1->index;
 int VAR_6;
 int VAR_7;

 VAR_7 = FUNC_4(VAR_2);
 if (VAR_7) {
  FUNC_0(VAR_3->dev,
   "failed to register the fixed PHY of port %d\n",
   VAR_5);
  return VAR_7;
 }

 VAR_4 = FUNC_3(VAR_2);

 VAR_6 = FUNC_2(VAR_2);
 if (VAR_6 < 0)
  VAR_6 = VAR_0;
 VAR_4->interface = VAR_6;

 FUNC_1(VAR_4);

 if (VAR_3->ops->adjust_link)
  VAR_3->ops->adjust_link(VAR_3, VAR_5, VAR_4);

 FUNC_5(&VAR_4->mdio.dev);

 return 0;
}

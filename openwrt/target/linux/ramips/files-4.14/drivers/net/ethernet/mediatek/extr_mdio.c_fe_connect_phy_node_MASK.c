
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int dev; } ;
struct phy_device {int no_auto_carrier_off; TYPE_2__* drv; int phy_id; TYPE_1__ mdio; int supported; int advertising; } ;
struct fe_priv {scalar_t__* link; TYPE_3__* phy; int dev; int netdev; } ;
struct device_node {int name; } ;
typedef int __be32 ;
struct TYPE_6__ {struct phy_device** phy; int ** phy_node; } ;
struct TYPE_5__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*,int,int ,int ,int ) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int FUNC_4 (struct device_node*) ;
 int * FUNC_5 (struct device_node*,char*,int *) ;
 struct phy_device* FUNC_6 (int ,struct device_node*,int ,int ,int) ;
 int FUNC_7 (char*,int ) ;

int FUNC_8(struct fe_priv *VAR_4, struct device_node *VAR_5, int VAR_6)
{
 const __be32 *VAR_7 = ((void*)0);
 struct phy_device *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_5(VAR_5, "reg", ((void*)0));

 if (!VAR_7 || (FUNC_0(*VAR_7) >= 0x20)) {
  FUNC_7("%s: invalid phy id\n", VAR_5->name);
  return -VAR_0;
 }

 VAR_9 = FUNC_4(VAR_5);
 if (VAR_9 < 0) {
  FUNC_1(VAR_4->dev, "incorrect phy-mode %d\n", VAR_9);
  VAR_4->phy->phy_node[VAR_6] = ((void*)0);
  return -VAR_0;
 }

 VAR_8 = FUNC_6(VAR_4->netdev, VAR_5, VAR_3,
    0, VAR_9);
 if (!VAR_8) {
  FUNC_1(VAR_4->dev, "could not connect to PHY\n");
  VAR_4->phy->phy_node[VAR_6] = ((void*)0);
  return -VAR_1;
 }

 VAR_8->supported &= VAR_2;
 VAR_8->advertising = VAR_8->supported;
 VAR_8->no_auto_carrier_off = 1;

 FUNC_2(VAR_4->dev,
   "connected port %d to PHY at %s [uid=%08x, driver=%s]\n",
   VAR_6, FUNC_3(&VAR_8->mdio.dev), VAR_8->phy_id,
   VAR_8->drv->name);

 VAR_4->phy->phy[VAR_6] = VAR_8;
 VAR_4->link[VAR_6] = 0;

 return 0;
}

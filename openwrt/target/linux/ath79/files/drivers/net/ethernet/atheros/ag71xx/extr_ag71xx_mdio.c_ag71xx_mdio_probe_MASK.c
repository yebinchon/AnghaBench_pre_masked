
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct mii_bus {char* name; int * irq; scalar_t__ phy_mask; int id; struct device* parent; struct ag71xx_mdio* priv; int reset; int write; int read; } ;
struct device_node {char* name; } ;
struct ag71xx_mdio {struct mii_bus* mii_bus; int mdio_reset; int mii_regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct ag71xx_mdio* FUNC_2 (struct device*,int,int ) ;
 struct mii_bus* FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct mii_bus*,struct device_node*) ;
 int FUNC_7 (struct device_node*,char*) ;
 scalar_t__ FUNC_8 (struct device_node*,char*,scalar_t__*) ;
 int FUNC_9 (struct platform_device*,struct ag71xx_mdio*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ,char*,char*,int ) ;
 int FUNC_13 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_9)
{
 struct device *VAR_10 = &VAR_9->dev;
 struct device_node *VAR_11 = VAR_9->dev.of_node;
 struct ag71xx_mdio *VAR_12;
 struct mii_bus *VAR_13;
 bool VAR_14;
 int VAR_15, VAR_16;

 VAR_12 = FUNC_2(VAR_10, sizeof(*VAR_12), VAR_1);
 if (!VAR_12)
  return -VAR_0;

 VAR_12->mii_regmap = FUNC_13(VAR_11, "regmap");
 if (FUNC_0(VAR_12->mii_regmap))
  return FUNC_1(VAR_12->mii_regmap);

 VAR_13 = FUNC_3(VAR_10);
 if (!VAR_13)
  return -VAR_0;

 VAR_12->mdio_reset = FUNC_4(VAR_10, "mdio");
 VAR_14 = FUNC_7(VAR_11, "builtin-switch");

 VAR_13->name = "ag71xx_mdio";
 VAR_13->read = VAR_5;
 VAR_13->write = VAR_6;
 VAR_13->reset = VAR_7;
 VAR_13->priv = VAR_12;
 VAR_13->parent = VAR_10;
 FUNC_12(VAR_13->id, VAR_2, "%s.%d", VAR_11->name, VAR_8++);

 if (!VAR_14 &&
     FUNC_8(VAR_11, "phy-mask", &VAR_13->phy_mask))
  VAR_13->phy_mask = 0;

 for (VAR_15 = 0; VAR_15 < VAR_3; VAR_15++)
  VAR_13->irq[VAR_15] = VAR_4;

 if (!FUNC_0(VAR_12->mdio_reset)) {
  FUNC_10(VAR_12->mdio_reset);
  FUNC_5(100);
  FUNC_11(VAR_12->mdio_reset);
  FUNC_5(200);
 }

 VAR_16 = FUNC_6(VAR_13, VAR_11);
 if (VAR_16)
  return VAR_16;

 VAR_12->mii_bus = VAR_13;
 FUNC_9(VAR_9, VAR_12);

 return 0;
}

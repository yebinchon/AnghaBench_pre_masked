
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct device_node* of_node; } ;
struct mii_bus {struct ag71xx_mdio* priv; TYPE_1__ dev; } ;
struct device_node {int dummy; } ;
struct ag71xx_mdio {int mii_regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct device_node*,int*) ;
 scalar_t__ FUNC_1 (struct device_node*,char*) ;
 int FUNC_2 (struct device_node*,char*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct mii_bus *VAR_5)
{
 struct device_node *VAR_6 = VAR_5->dev.of_node;
 struct ag71xx_mdio *VAR_7 = VAR_5->priv;
 bool VAR_8;
 u32 VAR_9;

 VAR_8 = FUNC_2(VAR_6, "builtin-switch");

 if (FUNC_0(VAR_6, &VAR_9)) {
  if (FUNC_1(VAR_6, "qca,ar9340-mdio"))
   VAR_9 = VAR_3;
  else if (VAR_8)
   VAR_9 = VAR_1;
  else
   VAR_9 = VAR_2;
 }

 FUNC_3(VAR_7->mii_regmap, VAR_0, VAR_9 | VAR_4);
 FUNC_4(100);

 FUNC_3(VAR_7->mii_regmap, VAR_0, VAR_9);
 FUNC_4(100);

 return 0;
}

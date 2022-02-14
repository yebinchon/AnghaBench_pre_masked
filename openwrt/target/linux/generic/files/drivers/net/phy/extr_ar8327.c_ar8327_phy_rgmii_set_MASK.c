
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {struct device_node* of_node; } ;
struct TYPE_4__ {int addr; TYPE_1__ dev; } ;
struct phy_device {TYPE_2__ mdio; } ;
struct device_node {int dummy; } ;
struct ar8xxx_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ar8xxx_priv*,int,int ,int *) ;
 int FUNC_1 (struct ar8xxx_priv*,int,int ,int ) ;
 int FUNC_2 (struct device_node*,char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(struct ar8xxx_priv *VAR_6, struct phy_device *VAR_7)
{
 u16 VAR_8 = 0;
 int VAR_9 = VAR_7->mdio.addr;
 struct device_node *VAR_10 = VAR_7->mdio.dev.of_node;

 if (!VAR_10)
  return;

 if (!FUNC_2(VAR_10, "qca,phy-rgmii-en")) {
  FUNC_3("ar8327: qca,phy-rgmii-en is not specified\n");
  return;
 }
 FUNC_0(VAR_6, VAR_9,
    VAR_0, &VAR_8);
 VAR_8 |= VAR_1;
 FUNC_1(VAR_6, VAR_9,
    VAR_0, VAR_8);


 if (!FUNC_2(VAR_10, "qca,txclk-delay-en")) {
  FUNC_3("ar8327: qca,txclk-delay-en is not specified\n");
  return;
 }
 FUNC_0(VAR_6, VAR_9,
    VAR_2, &VAR_8);
 VAR_8 |= VAR_3;
 FUNC_1(VAR_6, VAR_9,
    VAR_2, VAR_8);


 if (!FUNC_2(VAR_10, "qca,rxclk-delay-en")) {
  FUNC_3("ar8327: qca,rxclk-delay-en is not specified\n");
  return;
 }
 FUNC_0(VAR_6, VAR_9,
    VAR_4, &VAR_8);
 VAR_8 |= VAR_5;
 FUNC_1(VAR_6, VAR_9,
    VAR_4, VAR_8);
}

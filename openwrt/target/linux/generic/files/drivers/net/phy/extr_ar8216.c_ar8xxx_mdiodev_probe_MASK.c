
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct switch_dev {char* alias; int name; int devname; int ports; } ;
struct of_device_id {scalar_t__ data; } ;
struct TYPE_10__ {int of_node; } ;
struct mdio_device {TYPE_3__ dev; TYPE_1__* bus; } ;
struct device_node {int dummy; } ;
struct ar8xxx_priv {int port4_phy; struct switch_dev dev; scalar_t__ use_count; int list; TYPE_1__* mii_bus; int chip_rev; TYPE_3__* pdev; TYPE_2__* sw_mii_bus; struct ar8xxx_chip const* chip; scalar_t__ mib_poll_interval; } ;
struct ar8xxx_chip {scalar_t__ phy_write; scalar_t__ phy_read; } ;
struct TYPE_9__ {char* name; int id; TYPE_3__* parent; struct ar8xxx_priv* priv; int write; int read; } ;
struct TYPE_8__ {TYPE_3__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ar8xxx_priv* FUNC_0 () ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ar8xxx_priv*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct ar8xxx_priv*) ;
 int FUNC_3 (struct ar8xxx_priv*) ;
 int FUNC_4 (struct ar8xxx_priv*) ;
 char* FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,struct ar8xxx_priv*) ;
 TYPE_2__* FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 struct device_node* FUNC_11 (int ,char*) ;
 struct of_device_id* FUNC_12 (int ,TYPE_3__*) ;
 int FUNC_13 (TYPE_2__*,struct device_node*) ;
 scalar_t__ FUNC_14 (int ,char*) ;
 int FUNC_15 (int ,char*,scalar_t__*) ;
 int FUNC_16 (char*,int ,int ,int ,char*) ;
 int FUNC_17 (struct switch_dev*,int *) ;
 int FUNC_18 (int ,int ,char*,char*) ;
 int FUNC_19 (struct switch_dev*) ;

__attribute__((used)) static int
FUNC_20(struct mdio_device *VAR_8)
{
 const struct of_device_id *VAR_9;
 struct ar8xxx_priv *VAR_10;
 struct switch_dev *VAR_11;
 struct device_node *VAR_12;
 int VAR_13;

 VAR_9 = FUNC_12(VAR_5, &VAR_8->dev);
 if (!VAR_9)
  return -VAR_0;

 VAR_10 = FUNC_0();
 if (VAR_10 == ((void*)0))
  return -VAR_1;

 VAR_10->mii_bus = VAR_8->bus;
 VAR_10->pdev = &VAR_8->dev;
 VAR_10->chip = (const struct ar8xxx_chip *) VAR_9->data;

 VAR_13 = FUNC_15(VAR_10->pdev->of_node, "qca,mib-poll-interval",
       &VAR_10->mib_poll_interval);
 if (VAR_13)
  VAR_10->mib_poll_interval = 0;

 VAR_13 = FUNC_3(VAR_10);
 if (VAR_13)
  goto free_priv;

 VAR_13 = FUNC_2(VAR_10);
 if (VAR_13)
  goto free_priv;

 if (VAR_10->chip->phy_read && VAR_10->chip->phy_write) {
  VAR_10->sw_mii_bus = FUNC_7(&VAR_8->dev);
  VAR_10->sw_mii_bus->name = "ar8xxx-mdio";
  VAR_10->sw_mii_bus->read = VAR_6;
  VAR_10->sw_mii_bus->write = VAR_7;
  VAR_10->sw_mii_bus->priv = VAR_10;
  VAR_10->sw_mii_bus->parent = &VAR_8->dev;
  FUNC_18(VAR_10->sw_mii_bus->id, VAR_2, "%s",
    FUNC_5(&VAR_8->dev));
  VAR_12 = FUNC_11(VAR_10->pdev->of_node, "mdio-bus");
  VAR_13 = FUNC_13(VAR_10->sw_mii_bus, VAR_12);
  if (VAR_13)
   goto free_priv;
 }

 VAR_11 = &VAR_10->dev;
 VAR_11->alias = FUNC_5(&VAR_8->dev);

 if (FUNC_14(VAR_10->pdev->of_node, "qca,phy4-mii-enable")) {
  VAR_10->port4_phy = 1;
  VAR_11->ports--;
 }

 VAR_13 = FUNC_17(VAR_11, ((void*)0));
 if (VAR_13)
  goto free_priv;

 FUNC_16("%s: %s rev. %u switch registered on %s\n",
  VAR_11->devname, VAR_11->name, VAR_10->chip_rev,
  FUNC_5(&VAR_10->mii_bus->dev));

 FUNC_9(&VAR_4);
 FUNC_8(&VAR_10->list, &VAR_3);
 FUNC_10(&VAR_4);

 VAR_10->use_count++;

 VAR_13 = FUNC_4(VAR_10);
 if (VAR_13)
  goto err_unregister_switch;

 FUNC_6(&VAR_8->dev, VAR_10);

 return 0;

err_unregister_switch:
 if (--VAR_10->use_count)
  return VAR_13;

 FUNC_19(&VAR_10->dev);

free_priv:
 FUNC_1(VAR_10);
 return VAR_13;
}

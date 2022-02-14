
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct mt753x_sw_id {int (* init ) (struct gsw_mt753x*) ;int (* post_init ) (struct gsw_mt753x*) ;int model; int (* detect ) (struct gsw_mt753x*,struct chip_rev*) ;} ;
struct mt753x_mapping {int name; } ;
struct mii_bus {int dummy; } ;
struct gsw_mt753x {int global_vlan_enable; scalar_t__ irq; TYPE_1__* dev; int phy_status_poll; int irq_worker; int name; int model; int smi_addr; int mii_lock; struct mii_bus* host_bus; } ;
struct device_node {int dummy; } ;
struct chip_rev {int rev; int name; } ;


 int FUNC_0 (struct mt753x_sw_id**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_1__*,char*,...) ;
 int FUNC_3 (TYPE_1__*,char*,int ,...) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,struct gsw_mt753x*) ;
 struct gsw_mt753x* FUNC_6 (TYPE_1__*,int,int ) ;
 int FUNC_7 (TYPE_1__*,scalar_t__,int ,int ,int ,struct gsw_mt753x*) ;
 int FUNC_8 (struct gsw_mt753x*) ;
 int FUNC_9 (struct gsw_mt753x*,struct mt753x_mapping*) ;
 struct mt753x_mapping* FUNC_10 (struct device_node*) ;
 scalar_t__ FUNC_11 (struct gsw_mt753x*) ;
 int FUNC_12 (struct gsw_mt753x*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_13 (struct gsw_mt753x*) ;
 struct mt753x_sw_id** VAR_7 ;
 int FUNC_14 (struct gsw_mt753x*) ;
 int FUNC_15 (int *) ;
 struct mii_bus* FUNC_16 (struct device_node*) ;
 struct device_node* FUNC_17 (struct device_node*,char*,int ) ;
 int FUNC_18 (struct device_node*,char*) ;
 scalar_t__ FUNC_19 (struct device_node*,char*,int *) ;
 scalar_t__ FUNC_20 (struct platform_device*,int ) ;
 int FUNC_21 (struct platform_device*,struct gsw_mt753x*) ;
 int FUNC_22 (struct gsw_mt753x*,struct chip_rev*) ;
 int FUNC_23 (struct gsw_mt753x*) ;
 int FUNC_24 (struct gsw_mt753x*) ;

__attribute__((used)) static int FUNC_25(struct platform_device *VAR_8)
{
 struct gsw_mt753x *VAR_9;
 struct mt753x_sw_id *VAR_10;
 struct device_node *VAR_11 = VAR_8->dev.of_node;
 struct device_node *VAR_12;
 struct mii_bus *VAR_13;
 int VAR_14 = -VAR_0;
 struct chip_rev VAR_15;
 struct mt753x_mapping *VAR_16;
 int VAR_17;

 VAR_12 = FUNC_17(VAR_11, "mediatek,mdio", 0);
 if (!VAR_12)
  return -VAR_0;

 VAR_13 = FUNC_16(VAR_12);
 if (!VAR_13)
  return -VAR_2;

 VAR_9 = FUNC_6(&VAR_8->dev, sizeof(struct gsw_mt753x), VAR_3);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->host_bus = VAR_13;
 VAR_9->dev = &VAR_8->dev;
 FUNC_15(&VAR_9->mii_lock);


 if (FUNC_11(VAR_9))
  goto fail;


 if (FUNC_19(VAR_11, "mediatek,smi-addr", &VAR_9->smi_addr))
  VAR_9->smi_addr = VAR_4;


 VAR_16 = FUNC_10(VAR_11);
 if (VAR_16) {
  FUNC_9(VAR_9, VAR_16);
  VAR_9->global_vlan_enable = 1;
  FUNC_3(VAR_9->dev, "LAN/WAN VLAN setting=%s\n", VAR_16->name);
 }


 FUNC_13(VAR_9);


 for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_7); VAR_17++) {
  if (!VAR_7[VAR_17]->detect(VAR_9, &VAR_15)) {
   VAR_10 = VAR_7[VAR_17];

   VAR_9->name = VAR_15.name;
   VAR_9->model = VAR_10->model;

   FUNC_3(VAR_9->dev, "Switch is MediaTek %s rev %d",
     VAR_9->name, VAR_15.rev);


   VAR_14 = VAR_10->init(VAR_9);
   if (VAR_14)
    goto fail;

   break;
  }
 }

 if (VAR_17 >= FUNC_0(VAR_7)) {
  FUNC_2(VAR_9->dev, "No mt753x switch found\n");
  goto fail;
 }

 VAR_9->irq = FUNC_20(VAR_8, 0);
 if (VAR_9->irq >= 0) {
  VAR_14 = FUNC_7(VAR_9->dev, VAR_9->irq, VAR_5,
           0, FUNC_4(VAR_9->dev), VAR_9);
  if (VAR_14) {
   FUNC_2(VAR_9->dev, "Failed to request irq %d\n",
    VAR_9->irq);
   goto fail;
  }

  FUNC_1(&VAR_9->irq_worker, VAR_6);
 }

 FUNC_21(VAR_8, VAR_9);

 VAR_9->phy_status_poll = FUNC_18(VAR_9->dev->of_node,
           "mediatek,phy-poll");

 FUNC_8(VAR_9);

 FUNC_14(VAR_9);

 if (VAR_10->post_init)
  VAR_10->post_init(VAR_9);

 if (VAR_9->irq >= 0)
  FUNC_12(VAR_9);

 return 0;

fail:
 FUNC_5(&VAR_8->dev, VAR_9);

 return VAR_14;
}

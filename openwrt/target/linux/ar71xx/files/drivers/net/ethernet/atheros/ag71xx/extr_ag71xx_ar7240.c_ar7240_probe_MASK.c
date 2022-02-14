
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct switch_dev {char* name; int vlans; int * ops; int cpu_port; void* ports; } ;
struct mii_bus {int dev; } ;
struct ar7240sw {int ver; int* vlan_id; int * vlan_table; struct switch_dev swdev; TYPE_1__* swdata; struct mii_bus* mii_bus; } ;
struct ag71xx_platform_data {scalar_t__ phy_if_mode; TYPE_1__* switch_data; } ;
struct ag71xx {int dev; struct mii_bus* mii_bus; } ;
struct TYPE_2__ {scalar_t__ phy4_mii_en; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 struct ag71xx_platform_data* FUNC_0 (struct ag71xx*) ;
 int VAR_20 ;
 scalar_t__ FUNC_1 (struct mii_bus*,int ,int ) ;
 int FUNC_2 (struct ar7240sw*) ;
 int FUNC_3 (struct mii_bus*,int ) ;
 int FUNC_4 (struct mii_bus*,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct ar7240sw*) ;
 struct ar7240sw* FUNC_7 (int,int ) ;
 int FUNC_8 (char*,int ,...) ;
 int FUNC_9 (char*,int ,char*) ;
 scalar_t__ FUNC_10 (struct switch_dev*,int ) ;
 scalar_t__ FUNC_11 (struct ar7240sw*) ;
 scalar_t__ FUNC_12 (struct ar7240sw*) ;

__attribute__((used)) static struct ar7240sw *FUNC_13(struct ag71xx *VAR_21)
{
 struct ag71xx_platform_data *VAR_22 = FUNC_0(VAR_21);
 struct mii_bus *VAR_23 = VAR_21->mii_bus;
 struct ar7240sw *VAR_24;
 struct switch_dev *VAR_25;
 u32 VAR_26;
 u16 VAR_27;
 u16 VAR_28;
 int VAR_29;

 VAR_27 = FUNC_1(VAR_23, 0, VAR_16);
 VAR_28 = FUNC_1(VAR_23, 0, VAR_17);
 if ((VAR_27 != VAR_4 || VAR_28 != VAR_5) &&
     (VAR_27 != VAR_10 || VAR_28 != VAR_11)) {
  FUNC_8("%s: unknown phy id '%04x:%04x'\n",
         FUNC_5(&VAR_23->dev), VAR_27, VAR_28);
  return ((void*)0);
 }

 VAR_24 = FUNC_7(sizeof(*VAR_24), VAR_15);
 if (!VAR_24)
  return ((void*)0);

 VAR_24->mii_bus = VAR_23;
 VAR_24->swdata = VAR_22->switch_data;

 VAR_25 = &VAR_24->swdev;

 VAR_26 = FUNC_3(VAR_23, VAR_7);
 VAR_24->ver = (VAR_26 >> VAR_1) &
    VAR_0;

 if (FUNC_11(VAR_24)) {
  VAR_25->name = "AR7240/AR9330 built-in switch";
  VAR_25->ports = VAR_3 - 1;
 } else if (FUNC_12(VAR_24)) {
  VAR_25->name = "AR934X built-in switch";

  if (VAR_22->phy_if_mode == VAR_18) {
   FUNC_4(VAR_23, VAR_12,
      VAR_8);
  } else if (VAR_22->phy_if_mode == VAR_19) {
   FUNC_4(VAR_23, VAR_12,
      VAR_9);
  } else {
   FUNC_8("%s: invalid PHY interface mode\n",
          FUNC_5(&VAR_23->dev));
   goto err_free;
  }

  if (VAR_24->swdata->phy4_mii_en) {
   FUNC_4(VAR_23, VAR_13,
      VAR_14);
   VAR_25->ports = VAR_3 - 1;
  } else {
   VAR_25->ports = VAR_3;
  }
 } else {
  FUNC_8("%s: unsupported chip, ctrl=%08x\n",
   FUNC_5(&VAR_23->dev), VAR_26);
  goto err_free;
 }

 VAR_25->cpu_port = VAR_6;
 VAR_25->vlans = VAR_2;
 VAR_25->ops = &VAR_20;

 if (FUNC_10(&VAR_24->swdev, VAR_21->dev) < 0)
  goto err_free;

 FUNC_9("%s: Found an %s\n", FUNC_5(&VAR_23->dev), VAR_25->name);


 for (VAR_29 = 0; VAR_29 < VAR_2; VAR_29++)
  VAR_24->vlan_id[VAR_29] = VAR_29;

 VAR_24->vlan_table[0] = FUNC_2(VAR_24);

 return VAR_24;

err_free:
 FUNC_6(VAR_24);
 return ((void*)0);
}

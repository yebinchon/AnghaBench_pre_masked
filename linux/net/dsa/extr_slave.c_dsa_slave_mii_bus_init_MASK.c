
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dsa_switch {int index; int phys_mii_mask; TYPE_2__* slave_mii_bus; int dev; TYPE_1__* dst; } ;
struct TYPE_4__ {char* name; int phy_mask; int parent; int id; int write; int read; void* priv; } ;
struct TYPE_3__ {int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*,int,int) ;

void FUNC_1(struct dsa_switch *VAR_3)
{
 VAR_3->slave_mii_bus->priv = (void *)VAR_3;
 VAR_3->slave_mii_bus->name = "dsa slave smi";
 VAR_3->slave_mii_bus->read = VAR_1;
 VAR_3->slave_mii_bus->write = VAR_2;
 FUNC_0(VAR_3->slave_mii_bus->id, VAR_0, "dsa-%d.%d",
   VAR_3->dst->index, VAR_3->index);
 VAR_3->slave_mii_bus->parent = VAR_3->dev;
 VAR_3->slave_mii_bus->phy_mask = ~VAR_3->phys_mii_mask;
}

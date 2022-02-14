
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct switch_dev {int name; int * ops; int ports; int cpu_port; int vlans; } ;
struct TYPE_4__ {scalar_t__ addr; int dev; int bus; } ;
struct phy_device {TYPE_2__ mdio; struct ip17xx_state* priv; } ;
struct ip17xx_state {TYPE_1__* regs; int mii_bus; struct switch_dev dev; } ;
struct TYPE_3__ {int NAME; int NUM_PORTS; int CPU_PORT; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ip17xx_state*) ;
 int VAR_4 ;
 int FUNC_2 (struct ip17xx_state*) ;
 struct ip17xx_state* FUNC_3 (int,int ) ;
 int FUNC_4 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct phy_device *VAR_5)
{
 struct ip17xx_state *VAR_6;
 struct switch_dev *VAR_7;
 int VAR_8;


 if (VAR_5->mdio.addr != 0)
  return -VAR_0;

 VAR_6 = FUNC_3(sizeof(*VAR_6), VAR_2);
 if (!VAR_6)
  return -VAR_1;

 VAR_7 = &VAR_6->dev;

 VAR_5->priv = VAR_6;
 VAR_6->mii_bus = VAR_5->mdio.bus;

 VAR_8 = FUNC_1(VAR_6);
 if (VAR_8 < 0)
  goto error;

 VAR_7->vlans = VAR_3;
 VAR_7->cpu_port = VAR_6->regs->CPU_PORT;
 VAR_7->ports = VAR_6->regs->NUM_PORTS;
 VAR_7->name = VAR_6->regs->NAME;
 VAR_7->ops = &VAR_4;

 FUNC_4("IP17xx: Found %s at %s\n", VAR_7->name, FUNC_0(&VAR_5->mdio.dev));
 return 0;

error:
 FUNC_2(VAR_6);
 return VAR_8;
}

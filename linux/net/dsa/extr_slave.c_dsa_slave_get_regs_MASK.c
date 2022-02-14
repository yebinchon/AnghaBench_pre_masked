
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ethtool_regs {int dummy; } ;
struct dsa_switch {TYPE_1__* ops; } ;
struct dsa_port {int index; struct dsa_switch* ds; } ;
struct TYPE_2__ {int (* get_regs ) (struct dsa_switch*,int ,struct ethtool_regs*,void*) ;} ;


 struct dsa_port* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct dsa_switch*,int ,struct ethtool_regs*,void*) ;

__attribute__((used)) static void
FUNC_2(struct net_device *VAR_0, struct ethtool_regs *VAR_1, void *VAR_2)
{
 struct dsa_port *VAR_3 = FUNC_0(VAR_0);
 struct dsa_switch *VAR_4 = VAR_3->ds;

 if (VAR_4->ops->get_regs)
  VAR_4->ops->get_regs(VAR_4, VAR_3->index, VAR_1, VAR_2);
}

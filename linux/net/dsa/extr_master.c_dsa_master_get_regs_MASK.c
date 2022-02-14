
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {struct dsa_port* dsa_ptr; } ;
struct ethtool_regs {int len; } ;
struct ethtool_ops {int (* get_regs_len ) (struct net_device*) ;int (* get_regs ) (struct net_device*,struct ethtool_regs*,void*) ;} ;
struct ethtool_drvinfo {int driver; } ;
struct dsa_switch {TYPE_1__* ops; } ;
struct dsa_port {int index; struct dsa_switch* ds; struct ethtool_ops* orig_ethtool_ops; } ;
struct TYPE_2__ {int (* get_regs_len ) (struct dsa_switch*,int) ;int (* get_regs ) (struct dsa_switch*,int,struct ethtool_regs*,void*) ;} ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,struct ethtool_regs*,void*) ;
 int FUNC_3 (struct dsa_switch*,int) ;
 int FUNC_4 (struct dsa_switch*,int,struct ethtool_regs*,void*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_0,
    struct ethtool_regs *VAR_1, void *VAR_2)
{
 struct dsa_port *VAR_3 = VAR_0->dsa_ptr;
 const struct ethtool_ops *VAR_4 = VAR_3->orig_ethtool_ops;
 struct dsa_switch *VAR_5 = VAR_3->ds;
 struct ethtool_drvinfo *VAR_6;
 struct ethtool_regs *VAR_7;
 int VAR_8 = VAR_3->index;
 int VAR_9;

 if (VAR_4->get_regs_len && VAR_4->get_regs) {
  VAR_9 = VAR_4->get_regs_len(VAR_0);
  if (VAR_9 < 0)
   return;
  VAR_1->len = VAR_9;
  VAR_4->get_regs(VAR_0, VAR_1, VAR_2);
  VAR_2 += VAR_1->len;
 }

 VAR_6 = (struct ethtool_drvinfo *)VAR_2;
 FUNC_0(VAR_6->driver, "dsa", sizeof(VAR_6->driver));
 VAR_2 += sizeof(*VAR_6);
 VAR_7 = (struct ethtool_regs *)VAR_2;
 VAR_2 += sizeof(*VAR_7);

 if (VAR_5->ops->get_regs_len && VAR_5->ops->get_regs) {
  VAR_9 = VAR_5->ops->get_regs_len(VAR_5, VAR_8);
  if (VAR_9 < 0)
   return;
  VAR_7->len = VAR_9;
  VAR_5->ops->get_regs(VAR_5, VAR_8, VAR_7, VAR_2);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ethtool_wolinfo {int dummy; } ;
struct dsa_switch {TYPE_1__* ops; } ;
struct dsa_port {int index; int pl; struct dsa_switch* ds; } ;
struct TYPE_2__ {int (* get_wol ) (struct dsa_switch*,int ,struct ethtool_wolinfo*) ;} ;


 struct dsa_port* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,struct ethtool_wolinfo*) ;
 int FUNC_2 (struct dsa_switch*,int ,struct ethtool_wolinfo*) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0, struct ethtool_wolinfo *VAR_1)
{
 struct dsa_port *VAR_2 = FUNC_0(VAR_0);
 struct dsa_switch *VAR_3 = VAR_2->ds;

 FUNC_1(VAR_2->pl, VAR_1);

 if (VAR_3->ops->get_wol)
  VAR_3->ops->get_wol(VAR_3, VAR_2->index, VAR_1);
}

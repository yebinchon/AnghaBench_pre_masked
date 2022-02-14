
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int phydev; } ;
struct ethtool_eee {int dummy; } ;
struct dsa_switch {TYPE_1__* ops; } ;
struct dsa_port {int pl; int index; struct dsa_switch* ds; } ;
struct TYPE_2__ {int (* get_mac_eee ) (struct dsa_switch*,int ,struct ethtool_eee*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct dsa_port* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,struct ethtool_eee*) ;
 int FUNC_2 (struct dsa_switch*,int ,struct ethtool_eee*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_2, struct ethtool_eee *VAR_3)
{
 struct dsa_port *VAR_4 = FUNC_0(VAR_2);
 struct dsa_switch *VAR_5 = VAR_4->ds;
 int VAR_6;


 if (!VAR_2->phydev || !VAR_4->pl)
  return -VAR_0;

 if (!VAR_5->ops->get_mac_eee)
  return -VAR_1;

 VAR_6 = VAR_5->ops->get_mac_eee(VAR_5, VAR_4->index, VAR_3);
 if (VAR_6)
  return VAR_6;

 return FUNC_1(VAR_4->pl, VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int dummy; } ;
struct ethtool_rxnfc {int dummy; } ;
struct dsa_switch {TYPE_1__* ops; } ;
struct dsa_port {int index; struct dsa_switch* ds; } ;
struct TYPE_2__ {int (* get_rxnfc ) (struct dsa_switch*,int ,struct ethtool_rxnfc*,int *) ;} ;


 int VAR_0 ;
 struct dsa_port* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct dsa_switch*,int ,struct ethtool_rxnfc*,int *) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1,
          struct ethtool_rxnfc *VAR_2, u32 *VAR_3)
{
 struct dsa_port *VAR_4 = FUNC_0(VAR_1);
 struct dsa_switch *VAR_5 = VAR_4->ds;

 if (!VAR_5->ops->get_rxnfc)
  return -VAR_0;

 return VAR_5->ops->get_rxnfc(VAR_5, VAR_4->index, VAR_2, VAR_3);
}

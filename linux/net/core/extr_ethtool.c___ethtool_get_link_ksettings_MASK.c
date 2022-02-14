
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {TYPE_1__* ethtool_ops; } ;
struct ethtool_link_ksettings {int dummy; } ;
struct TYPE_2__ {int (* get_link_ksettings ) (struct net_device*,struct ethtool_link_ksettings*) ;} ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (struct ethtool_link_ksettings*,int ,int) ;
 int FUNC_2 (struct net_device*,struct ethtool_link_ksettings*) ;

int FUNC_3(struct net_device *VAR_1,
     struct ethtool_link_ksettings *VAR_2)
{
 FUNC_0();

 if (!VAR_1->ethtool_ops->get_link_ksettings)
  return -VAR_0;

 FUNC_1(VAR_2, 0, sizeof(*VAR_2));
 return VAR_1->ethtool_ops->get_link_ksettings(VAR_1, VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ethtool_link_ksettings {int dummy; } ;
struct dsa_port {int pl; } ;


 struct dsa_port* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,struct ethtool_link_ksettings const*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0,
     const struct ethtool_link_ksettings *VAR_1)
{
 struct dsa_port *VAR_2 = FUNC_0(VAR_0);

 return FUNC_1(VAR_2->pl, VAR_1);
}

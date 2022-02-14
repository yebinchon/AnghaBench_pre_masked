
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge_port_group {int eth_addr; struct net_bridge_port* port; } ;
struct net_bridge_port {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (unsigned char const*,int ) ;

__attribute__((used)) static bool FUNC_1(struct net_bridge_port_group *VAR_1,
    struct net_bridge_port *VAR_2,
    const unsigned char *VAR_3)
{
 if (VAR_1->port != VAR_2)
  return 0;

 if (!(VAR_2->flags & VAR_0))
  return 1;

 return FUNC_0(VAR_3, VAR_1->eth_addr);
}

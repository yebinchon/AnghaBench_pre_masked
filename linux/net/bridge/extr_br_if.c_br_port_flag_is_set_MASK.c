
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct net_bridge_port {unsigned long flags; } ;


 struct net_bridge_port* FUNC_0 (struct net_device const*) ;

bool FUNC_1(const struct net_device *VAR_0, unsigned long VAR_1)
{
 struct net_bridge_port *VAR_2;

 VAR_2 = FUNC_0(VAR_0);
 if (!VAR_2)
  return 0;

 return VAR_2->flags & VAR_1;
}

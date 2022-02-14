
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge {unsigned long bridge_forward_delay; unsigned long forward_delay; } ;


 scalar_t__ FUNC_0 (struct net_bridge*) ;

void FUNC_1(struct net_bridge *VAR_0, unsigned long VAR_1)
{
 VAR_0->bridge_forward_delay = VAR_1;
 if (FUNC_0(VAR_0))
  VAR_0->forward_delay = VAR_0->bridge_forward_delay;
}

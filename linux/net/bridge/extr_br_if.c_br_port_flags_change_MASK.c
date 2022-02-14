
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge_port {struct net_bridge* br; } ;
struct net_bridge {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (struct net_bridge*) ;
 int FUNC_1 (struct net_bridge*) ;

void FUNC_2(struct net_bridge_port *VAR_2, unsigned long VAR_3)
{
 struct net_bridge *VAR_4 = VAR_2->br;

 if (VAR_3 & VAR_0)
  FUNC_1(VAR_4);

 if (VAR_3 & VAR_1)
  FUNC_0(VAR_4);
}

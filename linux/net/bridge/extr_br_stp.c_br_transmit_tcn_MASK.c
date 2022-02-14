
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge_port {int dummy; } ;
struct net_bridge {int root_port; } ;


 struct net_bridge_port* FUNC_0 (struct net_bridge*,int ) ;
 int FUNC_1 (struct net_bridge*,char*,int ) ;
 int FUNC_2 (struct net_bridge_port*) ;

void FUNC_3(struct net_bridge *VAR_0)
{
 struct net_bridge_port *VAR_1;

 VAR_1 = FUNC_0(VAR_0, VAR_0->root_port);
 if (VAR_1)
  FUNC_2(VAR_1);
 else
  FUNC_1(VAR_0, "root port %u not found for topology notice\n",
     VAR_0->root_port);
}

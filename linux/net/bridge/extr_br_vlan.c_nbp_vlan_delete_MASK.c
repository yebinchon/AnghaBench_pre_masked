
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct net_bridge_vlan {int dummy; } ;
struct net_bridge_port {int br; TYPE_1__* dev; } ;
struct TYPE_2__ {int dev_addr; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (struct net_bridge_vlan*) ;
 int FUNC_2 (int ,struct net_bridge_port*,int ,int ) ;
 int FUNC_3 (int ,struct net_bridge_port*,int ,int ) ;
 struct net_bridge_vlan* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct net_bridge_port*) ;

int FUNC_6(struct net_bridge_port *VAR_1, u16 VAR_2)
{
 struct net_bridge_vlan *VAR_3;

 FUNC_0();

 VAR_3 = FUNC_4(FUNC_5(VAR_1), VAR_2);
 if (!VAR_3)
  return -VAR_0;
 FUNC_3(VAR_1->br, VAR_1, VAR_1->dev->dev_addr, VAR_2);
 FUNC_2(VAR_1->br, VAR_1, VAR_2, 0);

 return FUNC_1(VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge_port {int br; int dev; } ;


 int FUNC_0 (int ,struct net_bridge_port*) ;
 scalar_t__ FUNC_1 (struct net_bridge_port*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4(struct net_bridge_port *VAR_0)
{




 FUNC_2(VAR_0->dev, -1);
 if (FUNC_1(VAR_0))
  FUNC_3(VAR_0->dev, -1);
 else
  FUNC_0(VAR_0->br, VAR_0);
}

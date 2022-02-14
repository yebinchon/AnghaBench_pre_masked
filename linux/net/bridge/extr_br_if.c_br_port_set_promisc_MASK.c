
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge_port {int flags; int br; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct net_bridge_port*) ;
 scalar_t__ FUNC_1 (struct net_bridge_port*) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void FUNC_3(struct net_bridge_port *VAR_1)
{
 int VAR_2 = 0;

 if (FUNC_1(VAR_1))
  return;

 VAR_2 = FUNC_2(VAR_1->dev, 1);
 if (VAR_2)
  return;

 FUNC_0(VAR_1->br, VAR_1);
 VAR_1->flags |= VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_bridge_port {int flags; TYPE_1__* dev; int br; } ;
struct TYPE_2__ {int priv_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct net_bridge_port*) ;
 int FUNC_1 (struct net_bridge_port*) ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_3(struct net_bridge_port *VAR_2)
{
 int VAR_3;






 if (!FUNC_1(VAR_2) || !(VAR_2->dev->priv_flags & VAR_1))
  return;




 VAR_3 = FUNC_0(VAR_2->br, VAR_2);
 if (VAR_3)
  return;

 FUNC_2(VAR_2->dev, -1);
 VAR_2->flags &= ~VAR_0;
}

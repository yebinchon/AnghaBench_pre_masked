
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_bridge_port {scalar_t__ multicast_router; TYPE_1__* br; int rlist; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct net_bridge_port*,int) ;
 int FUNC_1 (int ,struct net_bridge_port*,int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct net_bridge_port *VAR_3)
{
 if (FUNC_3(&VAR_3->rlist))
  return;
 FUNC_2(&VAR_3->rlist);
 FUNC_1(VAR_3->br->dev, VAR_3, VAR_2);
 FUNC_0(VAR_3, 0);


 if (VAR_3->multicast_router == VAR_0)
  VAR_3->multicast_router = VAR_1;
}

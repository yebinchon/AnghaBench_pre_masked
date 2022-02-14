
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_bridge_port {int dev; TYPE_1__* br; scalar_t__ config_pending; scalar_t__ topology_change_ack; int port_no; int priority; int port_id; } ;
struct TYPE_2__ {int ageing_time; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct net_bridge_port*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct net_bridge_port*,int ) ;
 int FUNC_4 (int ,char*) ;

void FUNC_5(struct net_bridge_port *VAR_1)
{
 int VAR_2;

 VAR_1->port_id = FUNC_2(VAR_1->priority, VAR_1->port_no);
 FUNC_1(VAR_1);
 FUNC_3(VAR_1, VAR_0);
 VAR_1->topology_change_ack = 0;
 VAR_1->config_pending = 0;

 VAR_2 = FUNC_0(VAR_1->dev, VAR_1->br->ageing_time);
 if (VAR_2)
  FUNC_4(VAR_1->dev, "failed to offload ageing time\n");
}

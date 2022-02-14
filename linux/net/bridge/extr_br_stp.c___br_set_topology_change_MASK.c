
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge {scalar_t__ stp_enabled; unsigned char topology_change; int forward_delay; unsigned long bridge_ageing_time; unsigned long ageing_time; int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,unsigned long) ;
 int FUNC_1 (struct net_bridge*,char*,unsigned long) ;
 int FUNC_2 (struct net_bridge*,char*) ;

void FUNC_3(struct net_bridge *VAR_1, unsigned char VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;

 if (VAR_1->stp_enabled == VAR_0 && VAR_1->topology_change != VAR_2) {




  if (VAR_2) {
   VAR_3 = 2 * VAR_1->forward_delay;
   FUNC_1(VAR_1, "decreasing ageing time to %lu\n", VAR_3);
  } else {
   VAR_3 = VAR_1->bridge_ageing_time;
   FUNC_1(VAR_1, "restoring ageing time to %lu\n", VAR_3);
  }

  VAR_4 = FUNC_0(VAR_1->dev, VAR_3);
  if (VAR_4)
   FUNC_2(VAR_1, "error offloading ageing time\n");
  else
   VAR_1->ageing_time = VAR_3;
 }

 VAR_1->topology_change = VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int prio_tc_map; int tc_to_txq; scalar_t__ num_tc; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int ) ;

void FUNC_3(struct net_device *VAR_0)
{



 FUNC_1(VAR_0);


 VAR_0->num_tc = 0;
 FUNC_0(VAR_0->tc_to_txq, 0, sizeof(VAR_0->tc_to_txq));
 FUNC_0(VAR_0->prio_tc_map, 0, sizeof(VAR_0->prio_tc_map));
}

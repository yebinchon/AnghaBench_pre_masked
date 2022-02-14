
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_queue {struct Qdisc* qdisc_sleeping; } ;
struct net_device {unsigned int num_tx_queues; } ;
struct Qdisc {int state; } ;
typedef int spinlock_t ;


 int VAR_0 ;
 struct netdev_queue* FUNC_0 (struct net_device*,unsigned int) ;
 scalar_t__ FUNC_1 (struct Qdisc*) ;
 int * FUNC_2 (struct Qdisc*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static bool FUNC_6(struct net_device *VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_tx_queues; VAR_2++) {
  struct netdev_queue *VAR_3;
  spinlock_t *VAR_4;
  struct Qdisc *VAR_5;
  int VAR_6;

  VAR_3 = FUNC_0(VAR_1, VAR_2);
  VAR_5 = VAR_3->qdisc_sleeping;

  VAR_4 = FUNC_2(VAR_5);
  FUNC_3(VAR_4);

  VAR_6 = (FUNC_1(VAR_5) ||
         FUNC_5(VAR_0, &VAR_5->state));

  FUNC_4(VAR_4);

  if (VAR_6)
   return 1;
 }
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_queue {struct Qdisc* qdisc_sleeping; } ;
struct Qdisc {int dummy; } ;


 struct netdev_queue* FUNC_0 (struct Qdisc*,unsigned long) ;

__attribute__((used)) static struct Qdisc *FUNC_1(struct Qdisc *VAR_0, unsigned long VAR_1)
{
 struct netdev_queue *VAR_2 = FUNC_0(VAR_0, VAR_1);

 return VAR_2->qdisc_sleeping;
}

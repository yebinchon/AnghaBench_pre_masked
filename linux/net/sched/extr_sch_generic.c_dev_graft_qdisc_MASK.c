
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_queue {int qdisc; struct Qdisc* qdisc_sleeping; } ;
struct Qdisc {int dummy; } ;
typedef int spinlock_t ;


 struct Qdisc VAR_0 ;
 int * FUNC_0 (struct Qdisc*) ;
 int FUNC_1 (int ,struct Qdisc*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

struct Qdisc *FUNC_4(struct netdev_queue *VAR_1,
         struct Qdisc *VAR_2)
{
 struct Qdisc *VAR_3 = VAR_1->qdisc_sleeping;
 spinlock_t *VAR_4;

 VAR_4 = FUNC_0(VAR_3);
 FUNC_2(VAR_4);


 if (VAR_2 == ((void*)0))
  VAR_2 = &VAR_0;
 VAR_1->qdisc_sleeping = VAR_2;
 FUNC_1(VAR_1->qdisc, &VAR_0);

 FUNC_3(VAR_4);

 return VAR_3;
}

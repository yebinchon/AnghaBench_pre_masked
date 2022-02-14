
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_queue {struct Qdisc* qdisc_sleeping; } ;
struct gnet_dump {int dummy; } ;
struct Qdisc {int bstats; int running; } ;


 scalar_t__ FUNC_0 (int *,struct gnet_dump*,int *,int *) ;
 struct netdev_queue* FUNC_1 (struct Qdisc*,unsigned long) ;
 scalar_t__ FUNC_2 (struct gnet_dump*,struct Qdisc*) ;

__attribute__((used)) static int FUNC_3(struct Qdisc *VAR_0, unsigned long VAR_1,
          struct gnet_dump *VAR_2)
{
 struct netdev_queue *VAR_3 = FUNC_1(VAR_0, VAR_1);

 VAR_0 = VAR_3->qdisc_sleeping;
 if (FUNC_0(&VAR_0->running, VAR_2, ((void*)0), &VAR_0->bstats) < 0 ||
     FUNC_2(VAR_2, VAR_0) < 0)
  return -1;
 return 0;
}

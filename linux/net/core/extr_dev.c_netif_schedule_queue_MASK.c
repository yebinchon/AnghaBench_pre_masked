
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_queue {int state; int qdisc; } ;
struct Qdisc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct Qdisc*) ;
 struct Qdisc* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

void FUNC_4(struct netdev_queue *VAR_1)
{
 FUNC_2();
 if (!(VAR_1->state & VAR_0)) {
  struct Qdisc *VAR_2 = FUNC_1(VAR_1->qdisc);

  FUNC_0(VAR_2);
 }
 FUNC_3();
}

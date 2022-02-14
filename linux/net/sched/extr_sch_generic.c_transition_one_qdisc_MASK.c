
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_queue {scalar_t__ trans_start; int qdisc; struct Qdisc* qdisc_sleeping; } ;
struct net_device {int dummy; } ;
struct Qdisc {int flags; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,struct Qdisc*) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_2,
     struct netdev_queue *VAR_3,
     void *VAR_4)
{
 struct Qdisc *VAR_5 = VAR_3->qdisc_sleeping;
 int *VAR_6 = VAR_4;

 if (!(VAR_5->flags & VAR_0))
  FUNC_0(VAR_1, &VAR_5->state);

 FUNC_1(VAR_3->qdisc, VAR_5);
 if (VAR_6) {
  VAR_3->trans_start = 0;
  *VAR_6 = 1;
 }
}

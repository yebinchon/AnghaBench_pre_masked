
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ qlen; } ;
struct teql_sched_data {TYPE_3__ q; TYPE_1__* m; } ;
struct sk_buff {int dummy; } ;
struct netdev_queue {int qdisc; } ;
struct net_device {int dummy; } ;
struct TYPE_5__ {scalar_t__ qlen; } ;
struct Qdisc {TYPE_2__ q; } ;
struct TYPE_4__ {struct Qdisc* slaves; int dev; } ;


 struct sk_buff* FUNC_0 (TYPE_3__*) ;
 struct netdev_queue* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct Qdisc*,struct sk_buff*) ;
 struct net_device* FUNC_4 (struct Qdisc*) ;
 struct teql_sched_data* FUNC_5 (struct Qdisc*) ;
 struct Qdisc* FUNC_6 (int ) ;

__attribute__((used)) static struct sk_buff *
FUNC_7(struct Qdisc *VAR_0)
{
 struct teql_sched_data *VAR_1 = FUNC_5(VAR_0);
 struct netdev_queue *VAR_2;
 struct sk_buff *VAR_3;
 struct Qdisc *VAR_4;

 VAR_3 = FUNC_0(&VAR_1->q);
 VAR_2 = FUNC_1(VAR_1->m->dev, 0);
 VAR_4 = FUNC_6(VAR_2->qdisc);

 if (VAR_3 == ((void*)0)) {
  struct net_device *VAR_5 = FUNC_4(VAR_4);
  if (VAR_5) {
   VAR_1->m->slaves = VAR_0;
   FUNC_2(VAR_5);
  }
 } else {
  FUNC_3(VAR_0, VAR_3);
 }
 VAR_0->q.qlen = VAR_1->q.qlen + VAR_4->q.qlen;
 return VAR_3;
}

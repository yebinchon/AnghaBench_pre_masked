
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ qlen; } ;
struct teql_sched_data {TYPE_1__ q; } ;
struct sk_buff {int dummy; } ;
struct net_device {scalar_t__ tx_queue_len; } ;
struct Qdisc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,struct sk_buff*) ;
 struct net_device* FUNC_1 (struct Qdisc*) ;
 int FUNC_2 (struct sk_buff*,struct Qdisc*,struct sk_buff**) ;
 struct teql_sched_data* FUNC_3 (struct Qdisc*) ;

__attribute__((used)) static int
FUNC_4(struct sk_buff *VAR_1, struct Qdisc *VAR_2, struct sk_buff **VAR_3)
{
 struct net_device *VAR_4 = FUNC_1(VAR_2);
 struct teql_sched_data *VAR_5 = FUNC_3(VAR_2);

 if (VAR_5->q.qlen < VAR_4->tx_queue_len) {
  FUNC_0(&VAR_5->q, VAR_1);
  return VAR_0;
 }

 return FUNC_2(VAR_1, VAR_2, VAR_3);
}

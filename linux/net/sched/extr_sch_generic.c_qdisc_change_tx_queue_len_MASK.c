
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_queue {struct Qdisc* qdisc_sleeping; } ;
struct net_device {int tx_queue_len; } ;
struct Qdisc_ops {int (* change_tx_queue_len ) (struct Qdisc*,int ) ;} ;
struct Qdisc {struct Qdisc_ops* ops; } ;


 int FUNC_0 (struct Qdisc*,int ) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_0,
         struct netdev_queue *VAR_1)
{
 struct Qdisc *VAR_2 = VAR_1->qdisc_sleeping;
 const struct Qdisc_ops *VAR_3 = VAR_2->ops;

 if (VAR_3->change_tx_queue_len)
  return VAR_3->change_tx_queue_len(VAR_2, VAR_0->tx_queue_len);
 return 0;
}

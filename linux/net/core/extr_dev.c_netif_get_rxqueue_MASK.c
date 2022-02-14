
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {struct net_device* dev; } ;
struct netdev_rx_queue {int dummy; } ;
struct net_device {int real_num_rx_queues; int name; struct netdev_rx_queue* _rx; } ;


 int FUNC_0 (int,char*,int ,int,int) ;
 int FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static struct netdev_rx_queue *FUNC_4(struct sk_buff *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->dev;
 struct netdev_rx_queue *VAR_2;

 VAR_2 = VAR_1->_rx;

 if (FUNC_2(VAR_0)) {
  u16 VAR_3 = FUNC_1(VAR_0);

  if (FUNC_3(VAR_3 >= VAR_1->real_num_rx_queues)) {
   FUNC_0(VAR_1->real_num_rx_queues > 1,
      "%s received packet on queue %u, but number "
      "of RX queues is %u\n",
      VAR_1->name, VAR_3, VAR_1->real_num_rx_queues);

   return VAR_2;
  }
  VAR_2 += VAR_3;
 }
 return VAR_2;
}

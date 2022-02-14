
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {int sender_cpu; struct net_device* dev; } ;
struct net_device_ops {int (* ndo_select_queue ) (struct net_device*,struct sk_buff*,int *) ;} ;
struct net_device {int real_num_tx_queues; struct net_device_ops* netdev_ops; } ;


 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (struct net_device*,struct sk_buff*,int *) ;
 int FUNC_2 () ;
 int FUNC_3 (struct sk_buff*,int) ;
 int FUNC_4 (struct net_device*,struct sk_buff*,int *) ;

__attribute__((used)) static u16 FUNC_5(struct sk_buff *VAR_0)
{
 struct net_device *VAR_1 = VAR_0->dev;
 const struct net_device_ops *VAR_2 = VAR_1->netdev_ops;
 int VAR_3 = FUNC_2();
 u16 VAR_4;




 FUNC_3(VAR_0, VAR_3 % VAR_1->real_num_tx_queues);
 if (VAR_2->ndo_select_queue) {
  VAR_4 = VAR_2->ndo_select_queue(VAR_1, VAR_0, ((void*)0));
  VAR_4 = FUNC_0(VAR_1, VAR_4);
 } else {
  VAR_4 = FUNC_1(VAR_1, VAR_0, ((void*)0));
 }

 return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sk_buff {int dummy; } ;
struct net_device {int real_num_tx_queues; } ;


 scalar_t__ FUNC_0 () ;

u16 FUNC_1(struct net_device *VAR_0, struct sk_buff *VAR_1,
         struct net_device *VAR_2)
{
 return (u16)FUNC_0() % VAR_0->real_num_tx_queues;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int real_num_rx_queues; int real_num_tx_queues; int queues_kset; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*,int,int ) ;
 int FUNC_2 (struct net_device*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0)
{
 int VAR_1 = 0, VAR_2 = 0;




 VAR_2 = VAR_0->real_num_tx_queues;

 FUNC_1(VAR_0, VAR_1, 0);
 FUNC_2(VAR_0, VAR_2, 0);



}

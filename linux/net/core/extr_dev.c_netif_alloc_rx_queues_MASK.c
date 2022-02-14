
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_rx_queue {int xdp_rxq; struct net_device* dev; } ;
struct net_device {unsigned int num_rx_queues; struct netdev_rx_queue* _rx; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct netdev_rx_queue*) ;
 struct netdev_rx_queue* FUNC_2 (size_t,int) ;
 int FUNC_3 (int *,struct net_device*,unsigned int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_3)
{
 unsigned int VAR_4, VAR_5 = VAR_3->num_rx_queues;
 struct netdev_rx_queue *VAR_6;
 size_t VAR_7 = VAR_5 * sizeof(*VAR_6);
 int VAR_8 = 0;

 FUNC_0(VAR_5 < 1);

 VAR_6 = FUNC_2(VAR_7, VAR_1 | VAR_2);
 if (!VAR_6)
  return -VAR_0;

 VAR_3->_rx = VAR_6;

 for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
  VAR_6[VAR_4].dev = VAR_3;


  VAR_8 = FUNC_3(&VAR_6[VAR_4].xdp_rxq, VAR_3, VAR_4);
  if (VAR_8 < 0)
   goto err_rxq_info;
 }
 return 0;

err_rxq_info:

 while (VAR_4--)
  FUNC_4(&VAR_6[VAR_4].xdp_rxq);
 FUNC_1(VAR_3->_rx);
 VAR_3->_rx = ((void*)0);
 return VAR_8;
}

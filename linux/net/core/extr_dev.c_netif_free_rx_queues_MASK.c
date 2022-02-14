
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {unsigned int num_rx_queues; TYPE_1__* _rx; } ;
struct TYPE_2__ {int xdp_rxq; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0)
{
 unsigned int VAR_1, VAR_2 = VAR_0->num_rx_queues;


 if (!VAR_0->_rx)
  return;

 for (VAR_1 = 0; VAR_1 < VAR_2; VAR_1++)
  FUNC_1(&VAR_0->_rx[VAR_1].xdp_rxq);

 FUNC_0(VAR_0->_rx);
}

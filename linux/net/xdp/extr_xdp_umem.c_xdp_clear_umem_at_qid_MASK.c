
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u16 ;
struct net_device {size_t real_num_rx_queues; size_t real_num_tx_queues; TYPE_2__* _tx; TYPE_1__* _rx; } ;
struct TYPE_4__ {int * umem; } ;
struct TYPE_3__ {int * umem; } ;



__attribute__((used)) static void FUNC_0(struct net_device *VAR_0, u16 VAR_1)
{
 if (VAR_1 < VAR_0->real_num_rx_queues)
  VAR_0->_rx[VAR_1].umem = ((void*)0);
 if (VAR_1 < VAR_0->real_num_tx_queues)
  VAR_0->_tx[VAR_1].umem = ((void*)0);
}

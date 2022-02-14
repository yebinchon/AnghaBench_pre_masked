
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; unsigned int num_tx_queues; int * _tx; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*,int *) ;

int FUNC_3(struct net_device *VAR_1)
{
 bool VAR_2 = VAR_1->flags & VAR_0;
 unsigned int VAR_3;
 int VAR_4 = 0;

 if (VAR_2)
  FUNC_1(VAR_1);

 for (VAR_3 = 0; VAR_3 < VAR_1->num_tx_queues; VAR_3++) {
  VAR_4 = FUNC_2(VAR_1, &VAR_1->_tx[VAR_3]);


  if (VAR_4)
   break;
 }

 if (VAR_2)
  FUNC_0(VAR_1);
 return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netdev_tc_txq {unsigned int offset; unsigned int count; } ;
struct net_device {struct netdev_tc_txq* tc_to_txq; scalar_t__ num_tc; } ;


 int VAR_0 ;

int FUNC_0(struct net_device *VAR_1, unsigned int VAR_2)
{
 if (VAR_1->num_tc) {
  struct netdev_tc_txq *VAR_3 = &VAR_1->tc_to_txq[0];
  int VAR_4;


  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++, VAR_3++) {
   if ((VAR_2 - VAR_3->offset) < VAR_3->count)
    return VAR_4;
  }


  return -1;
 }

 return 0;
}

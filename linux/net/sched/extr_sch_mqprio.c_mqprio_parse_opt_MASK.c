
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tc_mqprio_qopt {int num_tc; int* prio_tc_map; scalar_t__ hw; unsigned int* offset; unsigned int* count; } ;
struct net_device {unsigned int real_num_tx_queues; TYPE_1__* netdev_ops; } ;
struct TYPE_2__ {scalar_t__ ndo_setup_tc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int FUNC_0(struct net_device *VAR_4, struct tc_mqprio_qopt *VAR_5)
{
 int VAR_6, VAR_7;


 if (VAR_5->num_tc > VAR_2)
  return -VAR_0;


 for (VAR_6 = 0; VAR_6 < VAR_1 + 1; VAR_6++) {
  if (VAR_5->prio_tc_map[VAR_6] >= VAR_5->num_tc)
   return -VAR_0;
 }





 if (VAR_5->hw > VAR_3)
  VAR_5->hw = VAR_3;






 if (VAR_5->hw)
  return VAR_4->netdev_ops->ndo_setup_tc ? 0 : -VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_5->num_tc; VAR_6++) {
  unsigned int VAR_8 = VAR_5->offset[VAR_6] + VAR_5->count[VAR_6];




  if (VAR_5->offset[VAR_6] >= VAR_4->real_num_tx_queues ||
      !VAR_5->count[VAR_6] ||
      VAR_8 > VAR_4->real_num_tx_queues)
   return -VAR_0;


  for (VAR_7 = VAR_6 + 1; VAR_7 < VAR_5->num_tc; VAR_7++) {
   if (VAR_8 > VAR_5->offset[VAR_7])
    return -VAR_0;
  }
 }

 return 0;
}

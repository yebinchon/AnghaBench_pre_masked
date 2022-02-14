
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tc_mqprio_qopt {int num_tc; int* prio_tc_map; unsigned int* offset; unsigned int* count; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int num_tx_queues; unsigned int real_num_tx_queues; scalar_t__ num_tc; } ;


 int VAR_0 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_3,
       struct tc_mqprio_qopt *VAR_4,
       struct netlink_ext_ack *VAR_5,
       u32 VAR_6)
{
 int VAR_7, VAR_8;

 if (!VAR_4 && !VAR_3->num_tc) {
  FUNC_0(VAR_5, "'mqprio' configuration is necessary");
  return -VAR_0;
 }




 if (VAR_3->num_tc)
  return 0;


 if (VAR_4->num_tc > VAR_2) {
  FUNC_0(VAR_5, "Number of traffic classes is outside valid range");
  return -VAR_0;
 }


 if (VAR_4->num_tc > VAR_3->num_tx_queues) {
  FUNC_0(VAR_5, "Number of traffic classes is greater than number of HW queues");
  return -VAR_0;
 }


 for (VAR_7 = 0; VAR_7 < VAR_1 + 1; VAR_7++) {
  if (VAR_4->prio_tc_map[VAR_7] >= VAR_4->num_tc) {
   FUNC_0(VAR_5, "Invalid traffic class in priority to traffic class mapping");
   return -VAR_0;
  }
 }

 for (VAR_7 = 0; VAR_7 < VAR_4->num_tc; VAR_7++) {
  unsigned int VAR_9 = VAR_4->offset[VAR_7] + VAR_4->count[VAR_7];




  if (VAR_4->offset[VAR_7] >= VAR_3->num_tx_queues ||
      !VAR_4->count[VAR_7] ||
      VAR_9 > VAR_3->real_num_tx_queues) {
   FUNC_0(VAR_5, "Invalid queue in traffic class to queue mapping");
   return -VAR_0;
  }

  if (FUNC_1(VAR_6))
   continue;


  for (VAR_8 = VAR_7 + 1; VAR_8 < VAR_4->num_tc; VAR_8++) {
   if (VAR_9 > VAR_4->offset[VAR_8]) {
    FUNC_0(VAR_5, "Detected overlap in the traffic class to queue mapping");
    return -VAR_0;
   }
  }
 }

 return 0;
}

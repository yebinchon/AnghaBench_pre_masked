
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tc_mq_qopt_offload {int command; int handle; } ;
struct net_device {TYPE_1__* netdev_ops; } ;
struct Qdisc {int handle; } ;
typedef enum tc_mq_command { ____Placeholder_tc_mq_command } tc_mq_command ;
struct TYPE_2__ {int (* ndo_setup_tc ) (struct net_device*,int ,struct tc_mq_qopt_offload*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct net_device* FUNC_0 (struct Qdisc*) ;
 int FUNC_1 (struct net_device*,int ,struct tc_mq_qopt_offload*) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct Qdisc *VAR_2, enum tc_mq_command VAR_3)
{
 struct net_device *VAR_4 = FUNC_0(VAR_2);
 struct tc_mq_qopt_offload VAR_5 = {
  .command = VAR_3,
  .handle = VAR_2->handle,
 };

 if (!FUNC_2(VAR_4) || !VAR_4->netdev_ops->ndo_setup_tc)
  return -VAR_0;

 return VAR_4->netdev_ops->ndo_setup_tc(VAR_4, VAR_1, &VAR_5);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ chain_index; } ;
struct tc_cls_matchall_offload {int command; TYPE_1__ common; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (struct net_device*,struct tc_cls_matchall_offload*,int) ;
 int FUNC_1 (struct net_device*,struct tc_cls_matchall_offload*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1,
        struct tc_cls_matchall_offload *VAR_2,
        bool VAR_3)
{
 if (VAR_2->common.chain_index)
  return -VAR_0;

 switch (VAR_2->command) {
 case 128:
  return FUNC_0(VAR_1, VAR_2, VAR_3);
 case 129:
  FUNC_1(VAR_1, VAR_2);
  return 0;
 default:
  return -VAR_0;
 }
}

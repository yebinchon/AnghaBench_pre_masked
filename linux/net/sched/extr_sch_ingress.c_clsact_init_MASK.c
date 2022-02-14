
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int miniq_egress; int miniq_ingress; } ;
struct TYPE_2__ {int * chain_head_change_priv; void* chain_head_change; int binder_type; } ;
struct clsact_sched_data {TYPE_1__ egress_block_info; int egress_block; int miniqp_egress; TYPE_1__ ingress_block_info; int ingress_block; int miniqp_ingress; } ;
struct Qdisc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (int *,struct Qdisc*,int *) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 struct net_device* FUNC_3 (struct Qdisc*) ;
 struct clsact_sched_data* FUNC_4 (struct Qdisc*) ;
 int FUNC_5 (int *,struct Qdisc*,TYPE_1__*,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_6(struct Qdisc *VAR_3, struct nlattr *VAR_4,
         struct netlink_ext_ack *VAR_5)
{
 struct clsact_sched_data *VAR_6 = FUNC_4(VAR_3);
 struct net_device *VAR_7 = FUNC_3(VAR_3);
 int VAR_8;

 FUNC_2();
 FUNC_1();

 FUNC_0(&VAR_6->miniqp_ingress, VAR_3, &VAR_7->miniq_ingress);

 VAR_6->ingress_block_info.binder_type = VAR_1;
 VAR_6->ingress_block_info.chain_head_change = VAR_2;
 VAR_6->ingress_block_info.chain_head_change_priv = &VAR_6->miniqp_ingress;

 VAR_8 = FUNC_5(&VAR_6->ingress_block, VAR_3, &VAR_6->ingress_block_info,
    VAR_5);
 if (VAR_8)
  return VAR_8;

 FUNC_0(&VAR_6->miniqp_egress, VAR_3, &VAR_7->miniq_egress);

 VAR_6->egress_block_info.binder_type = VAR_0;
 VAR_6->egress_block_info.chain_head_change = VAR_2;
 VAR_6->egress_block_info.chain_head_change_priv = &VAR_6->miniqp_egress;

 return FUNC_5(&VAR_6->egress_block, VAR_3, &VAR_6->egress_block_info, VAR_5);
}

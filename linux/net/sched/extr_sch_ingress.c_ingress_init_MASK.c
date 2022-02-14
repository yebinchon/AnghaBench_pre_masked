
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int miniq_ingress; } ;
struct TYPE_2__ {int * chain_head_change_priv; int chain_head_change; int binder_type; } ;
struct ingress_sched_data {TYPE_1__ block_info; int block; int miniqp; } ;
struct Qdisc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct Qdisc*,int *) ;
 int FUNC_1 () ;
 struct net_device* FUNC_2 (struct Qdisc*) ;
 struct ingress_sched_data* FUNC_3 (struct Qdisc*) ;
 int FUNC_4 (int *,struct Qdisc*,TYPE_1__*,struct netlink_ext_ack*) ;

__attribute__((used)) static int FUNC_5(struct Qdisc *VAR_2, struct nlattr *VAR_3,
   struct netlink_ext_ack *VAR_4)
{
 struct ingress_sched_data *VAR_5 = FUNC_3(VAR_2);
 struct net_device *VAR_6 = FUNC_2(VAR_2);

 FUNC_1();

 FUNC_0(&VAR_5->miniqp, VAR_2, &VAR_6->miniq_ingress);

 VAR_5->block_info.binder_type = VAR_0;
 VAR_5->block_info.chain_head_change = VAR_1;
 VAR_5->block_info.chain_head_change_priv = &VAR_5->miniqp;

 return FUNC_4(&VAR_5->block, VAR_2, &VAR_5->block_info, VAR_4);
}

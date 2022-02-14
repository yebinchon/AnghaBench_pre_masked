
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcf_block {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct TYPE_2__ {struct tcf_block* block; } ;
struct atm_qdisc_data {TYPE_1__ link; } ;
struct atm_flow_data {struct tcf_block* block; } ;
struct Qdisc {int dummy; } ;


 int FUNC_0 (char*,struct Qdisc*,struct atm_qdisc_data*,struct atm_flow_data*) ;
 struct atm_qdisc_data* FUNC_1 (struct Qdisc*) ;

__attribute__((used)) static struct tcf_block *FUNC_2(struct Qdisc *VAR_0, unsigned long VAR_1,
       struct netlink_ext_ack *VAR_2)
{
 struct atm_qdisc_data *VAR_3 = FUNC_1(VAR_0);
 struct atm_flow_data *VAR_4 = (struct atm_flow_data *)VAR_1;

 FUNC_0("atm_tc_find_tcf(sch %p,[qdisc %p],flow %p)\n", VAR_0, VAR_3, VAR_4);
 return VAR_4 ? VAR_4->block : VAR_3->link.block;
}

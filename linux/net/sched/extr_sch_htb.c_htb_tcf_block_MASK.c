
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_block {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct htb_sched {struct tcf_block* block; } ;
struct htb_class {struct tcf_block* block; } ;
struct Qdisc {int dummy; } ;


 struct htb_sched* FUNC_0 (struct Qdisc*) ;

__attribute__((used)) static struct tcf_block *FUNC_1(struct Qdisc *VAR_0, unsigned long VAR_1,
           struct netlink_ext_ack *VAR_2)
{
 struct htb_sched *VAR_3 = FUNC_0(VAR_0);
 struct htb_class *VAR_4 = (struct htb_class *)VAR_1;

 return VAR_4 ? VAR_4->block : VAR_3->block;
}

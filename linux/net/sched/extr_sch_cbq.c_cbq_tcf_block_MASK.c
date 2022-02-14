
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_block {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct cbq_class {struct tcf_block* block; } ;
struct cbq_sched_data {struct cbq_class link; } ;
struct Qdisc {int dummy; } ;


 struct cbq_sched_data* FUNC_0 (struct Qdisc*) ;

__attribute__((used)) static struct tcf_block *FUNC_1(struct Qdisc *VAR_0, unsigned long VAR_1,
           struct netlink_ext_ack *VAR_2)
{
 struct cbq_sched_data *VAR_3 = FUNC_0(VAR_0);
 struct cbq_class *VAR_4 = (struct cbq_class *)VAR_1;

 if (VAR_4 == ((void*)0))
  VAR_4 = &VAR_3->link;

 return VAR_4->block;
}

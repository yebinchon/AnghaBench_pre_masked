
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_block {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct fq_codel_sched_data {struct tcf_block* block; } ;
struct Qdisc {int dummy; } ;


 struct fq_codel_sched_data* FUNC_0 (struct Qdisc*) ;

__attribute__((used)) static struct tcf_block *FUNC_1(struct Qdisc *VAR_0, unsigned long VAR_1,
         struct netlink_ext_ack *VAR_2)
{
 struct fq_codel_sched_data *VAR_3 = FUNC_0(VAR_0);

 if (VAR_1)
  return ((void*)0);
 return VAR_3->block;
}

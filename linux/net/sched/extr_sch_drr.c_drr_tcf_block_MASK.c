
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_block {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct drr_sched {struct tcf_block* block; } ;
struct Qdisc {int dummy; } ;


 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 struct drr_sched* FUNC_1 (struct Qdisc*) ;

__attribute__((used)) static struct tcf_block *FUNC_2(struct Qdisc *VAR_0, unsigned long VAR_1,
           struct netlink_ext_ack *VAR_2)
{
 struct drr_sched *VAR_3 = FUNC_1(VAR_0);

 if (VAR_1) {
  FUNC_0(VAR_2, "DRR classid must be zero");
  return ((void*)0);
 }

 return VAR_3->block;
}

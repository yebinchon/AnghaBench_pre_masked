
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_block {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct hfsc_class {struct tcf_block* block; } ;
struct hfsc_sched {struct hfsc_class root; } ;
struct Qdisc {int dummy; } ;


 struct hfsc_sched* FUNC_0 (struct Qdisc*) ;

__attribute__((used)) static struct tcf_block *FUNC_1(struct Qdisc *VAR_0, unsigned long VAR_1,
     struct netlink_ext_ack *VAR_2)
{
 struct hfsc_sched *VAR_3 = FUNC_0(VAR_0);
 struct hfsc_class *VAR_4 = (struct hfsc_class *)VAR_1;

 if (VAR_4 == ((void*)0))
  VAR_4 = &VAR_3->root;

 return VAR_4->block;
}

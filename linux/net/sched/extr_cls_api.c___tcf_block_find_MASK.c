
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tcf_block {int refcnt; } ;
struct netlink_ext_ack {int dummy; } ;
struct net {int dummy; } ;
struct Qdisc_class_ops {struct tcf_block* (* tcf_block ) (struct Qdisc*,unsigned long,struct netlink_ext_ack*) ;} ;
struct Qdisc {TYPE_1__* ops; } ;
struct TYPE_2__ {struct Qdisc_class_ops* cl_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct tcf_block* FUNC_0 (int ) ;
 int FUNC_1 (struct netlink_ext_ack*,char*) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 struct tcf_block* FUNC_3 (struct Qdisc*,unsigned long,struct netlink_ext_ack*) ;
 struct tcf_block* FUNC_4 (struct net*,int ) ;
 scalar_t__ FUNC_5 (struct tcf_block*) ;

__attribute__((used)) static struct tcf_block *FUNC_6(struct net *VAR_3, struct Qdisc *VAR_4,
       unsigned long VAR_5, int VAR_6,
       u32 VAR_7,
       struct netlink_ext_ack *VAR_8)
{
 struct tcf_block *VAR_9;

 if (VAR_6 == VAR_2) {
  VAR_9 = FUNC_4(VAR_3, VAR_7);
  if (!VAR_9) {
   FUNC_1(VAR_8, "Block of given index was not found");
   return FUNC_0(-VAR_0);
  }
 } else {
  const struct Qdisc_class_ops *VAR_10 = VAR_4->ops->cl_ops;

  VAR_9 = VAR_10->tcf_block(VAR_4, VAR_5, VAR_8);
  if (!VAR_9)
   return FUNC_0(-VAR_0);

  if (FUNC_5(VAR_9)) {
   FUNC_1(VAR_8, "This filter block is shared. Please use the block index to manipulate the filters");
   return FUNC_0(-VAR_1);
  }







  FUNC_2(&VAR_9->refcnt);
 }

 return VAR_9;
}

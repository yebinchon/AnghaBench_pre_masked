
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcf_block {int dummy; } ;
struct net_device {int dummy; } ;
struct Qdisc_class_ops {struct tcf_block* (* tcf_block ) (struct Qdisc*,int ,int *) ;} ;
struct Qdisc {TYPE_1__* ops; } ;
struct TYPE_4__ {struct Qdisc* qdisc_sleeping; } ;
struct TYPE_3__ {struct Qdisc_class_ops* cl_ops; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct net_device*) ;
 struct tcf_block* FUNC_1 (struct Qdisc*,int ,int *) ;

__attribute__((used)) static struct tcf_block *FUNC_2(struct net_device *VAR_1)
{
 const struct Qdisc_class_ops *VAR_2;
 struct Qdisc *VAR_3;

 if (!FUNC_0(VAR_1))
  return ((void*)0);

 VAR_3 = FUNC_0(VAR_1)->qdisc_sleeping;
 if (!VAR_3)
  return ((void*)0);

 VAR_2 = VAR_3->ops->cl_ops;
 if (!VAR_2)
  return ((void*)0);

 if (!VAR_2->tcf_block)
  return ((void*)0);

 return VAR_2->tcf_block(VAR_3, VAR_0, ((void*)0));
}

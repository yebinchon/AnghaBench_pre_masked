
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tcmsg {int tcm_info; int tcm_handle; int tcm_parent; } ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {int classid; } ;
struct qfq_class {TYPE_3__* agg; TYPE_2__* qdisc; TYPE_1__ common; } ;
struct nlattr {int dummy; } ;
struct Qdisc {int dummy; } ;
struct TYPE_6__ {int lmax; int class_weight; } ;
struct TYPE_5__ {int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct Qdisc *VAR_5, unsigned long VAR_6,
     struct sk_buff *VAR_7, struct tcmsg *VAR_8)
{
 struct qfq_class *VAR_9 = (struct qfq_class *)VAR_6;
 struct nlattr *VAR_10;

 VAR_8->tcm_parent = VAR_4;
 VAR_8->tcm_handle = VAR_9->common.classid;
 VAR_8->tcm_info = VAR_9->qdisc->handle;

 VAR_10 = FUNC_2(VAR_7, VAR_1);
 if (VAR_10 == ((void*)0))
  goto nla_put_failure;
 if (FUNC_3(VAR_7, VAR_3, VAR_9->agg->class_weight) ||
     FUNC_3(VAR_7, VAR_2, VAR_9->agg->lmax))
  goto nla_put_failure;
 return FUNC_1(VAR_7, VAR_10);

nla_put_failure:
 FUNC_0(VAR_7, VAR_10);
 return -VAR_0;
}

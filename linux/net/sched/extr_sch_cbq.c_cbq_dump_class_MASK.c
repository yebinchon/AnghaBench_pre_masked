
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tcmsg {int tcm_info; int tcm_handle; int tcm_parent; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct TYPE_6__ {int classid; } ;
struct cbq_class {TYPE_3__* q; TYPE_2__ common; TYPE_4__* tparent; } ;
struct Qdisc {int dummy; } ;
struct TYPE_5__ {int classid; } ;
struct TYPE_8__ {TYPE_1__ common; } ;
struct TYPE_7__ {int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sk_buff*,struct cbq_class*) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 int FUNC_2 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_3 (struct sk_buff*,int ) ;

__attribute__((used)) static int
FUNC_4(struct Qdisc *VAR_2, unsigned long VAR_3,
        struct sk_buff *VAR_4, struct tcmsg *VAR_5)
{
 struct cbq_class *VAR_6 = (struct cbq_class *)VAR_3;
 struct nlattr *VAR_7;

 if (VAR_6->tparent)
  VAR_5->tcm_parent = VAR_6->tparent->common.classid;
 else
  VAR_5->tcm_parent = VAR_1;
 VAR_5->tcm_handle = VAR_6->common.classid;
 VAR_5->tcm_info = VAR_6->q->handle;

 VAR_7 = FUNC_3(VAR_4, VAR_0);
 if (VAR_7 == ((void*)0))
  goto nla_put_failure;
 if (FUNC_0(VAR_4, VAR_6) < 0)
  goto nla_put_failure;
 return FUNC_2(VAR_4, VAR_7);

nla_put_failure:
 FUNC_1(VAR_4, VAR_7);
 return -1;
}

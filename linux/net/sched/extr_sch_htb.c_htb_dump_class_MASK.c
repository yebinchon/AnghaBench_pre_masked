
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct tcmsg {int tcm_info; int tcm_handle; int tcm_parent; } ;
struct tc_htb_opt {scalar_t__ level; int prio; int quantum; void* cbuffer; int ceil; void* buffer; int rate; } ;
struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct TYPE_12__ {unsigned long long rate_bytes_ps; } ;
struct TYPE_11__ {TYPE_4__* q; } ;
struct TYPE_9__ {int classid; } ;
struct htb_class {TYPE_6__ ceil; TYPE_6__ rate; scalar_t__ level; int prio; int quantum; int cbuffer; int buffer; TYPE_5__ leaf; TYPE_3__ common; TYPE_2__* parent; } ;
struct Qdisc {int dummy; } ;
typedef int opt ;
struct TYPE_10__ {int handle; } ;
struct TYPE_7__ {int classid; } ;
struct TYPE_8__ {TYPE_1__ common; } ;


 void* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct tc_htb_opt*,int ,int) ;
 int FUNC_2 (struct sk_buff*,struct nlattr*) ;
 int FUNC_3 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_4 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int,struct tc_htb_opt*) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,unsigned long long,int ) ;
 int FUNC_7 (int *,TYPE_6__*) ;

__attribute__((used)) static int FUNC_8(struct Qdisc *VAR_6, unsigned long VAR_7,
     struct sk_buff *VAR_8, struct tcmsg *VAR_9)
{
 struct htb_class *VAR_10 = (struct htb_class *)VAR_7;
 struct nlattr *VAR_11;
 struct tc_htb_opt VAR_12;




 VAR_9->tcm_parent = VAR_10->parent ? VAR_10->parent->common.classid : VAR_5;
 VAR_9->tcm_handle = VAR_10->common.classid;
 if (!VAR_10->level && VAR_10->leaf.q)
  VAR_9->tcm_info = VAR_10->leaf.q->handle;

 VAR_11 = FUNC_4(VAR_8, VAR_4);
 if (VAR_11 == ((void*)0))
  goto nla_put_failure;

 FUNC_1(&VAR_12, 0, sizeof(VAR_12));

 FUNC_7(&VAR_12.rate, &VAR_10->rate);
 VAR_12.buffer = FUNC_0(VAR_10->buffer);
 FUNC_7(&VAR_12.ceil, &VAR_10->ceil);
 VAR_12.cbuffer = FUNC_0(VAR_10->cbuffer);
 VAR_12.quantum = VAR_10->quantum;
 VAR_12.prio = VAR_10->prio;
 VAR_12.level = VAR_10->level;
 if (FUNC_5(VAR_8, VAR_2, sizeof(VAR_12), &VAR_12))
  goto nla_put_failure;
 if ((VAR_10->rate.rate_bytes_ps >= (1ULL << 32)) &&
     FUNC_6(VAR_8, VAR_3, VAR_10->rate.rate_bytes_ps,
         VAR_1))
  goto nla_put_failure;
 if ((VAR_10->ceil.rate_bytes_ps >= (1ULL << 32)) &&
     FUNC_6(VAR_8, VAR_0, VAR_10->ceil.rate_bytes_ps,
         VAR_1))
  goto nla_put_failure;

 return FUNC_3(VAR_8, VAR_11);

nla_put_failure:
 FUNC_2(VAR_8, VAR_11);
 return -1;
}

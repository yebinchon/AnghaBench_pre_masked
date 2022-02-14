
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct xt_action_param {TYPE_4__* target; int targinfo; struct nf_hook_state* state; } ;
struct tcf_result {int dummy; } ;
struct TYPE_10__ {int drops; } ;
struct tcf_ipt {int tcf_lock; TYPE_5__ tcf_qstats; TYPE_3__* tcfi_t; int tcf_bstats; int tcf_tm; int tcfi_hook; } ;
struct tc_action {int dummy; } ;
struct sk_buff {int dev; } ;
struct nf_hook_state {int pf; int hook; int in; int net; } ;
struct TYPE_9__ {int (* target ) (struct sk_buff*,struct xt_action_param*) ;} ;
struct TYPE_6__ {TYPE_4__* target; } ;
struct TYPE_7__ {TYPE_1__ kernel; } ;
struct TYPE_8__ {int data; TYPE_2__ u; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int FUNC_0 (int *,struct sk_buff*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct sk_buff*,struct xt_action_param*) ;
 int FUNC_7 (int *) ;
 struct tcf_ipt* FUNC_8 (struct tc_action const*) ;

__attribute__((used)) static int FUNC_9(struct sk_buff *VAR_6, const struct tc_action *VAR_7,
         struct tcf_result *VAR_8)
{
 int VAR_9 = 0, VAR_10 = 0;
 struct tcf_ipt *VAR_11 = FUNC_8(VAR_7);
 struct xt_action_param VAR_12;
 struct nf_hook_state VAR_13 = {
  .net = FUNC_1(VAR_6->dev),
  .in = VAR_6->dev,
  .hook = VAR_11->tcfi_hook,
  .pf = VAR_1,
 };

 if (FUNC_3(VAR_6, VAR_0))
  return VAR_5;

 FUNC_4(&VAR_11->tcf_lock);

 FUNC_7(&VAR_11->tcf_tm);
 FUNC_0(&VAR_11->tcf_bstats, VAR_6);





 VAR_12.state = &VAR_13;
 VAR_12.target = VAR_11->tcfi_t->u.kernel.target;
 VAR_12.targinfo = VAR_11->tcfi_t->data;
 VAR_9 = VAR_12.target->target(VAR_6, &VAR_12);

 switch (VAR_9) {
 case 130:
  VAR_10 = VAR_2;
  break;
 case 129:
  VAR_10 = VAR_4;
  VAR_11->tcf_qstats.drops++;
  break;
 case 128:
  VAR_10 = VAR_3;
  break;
 default:
  FUNC_2("tc filter: Bogus netfilter code %d assume ACCEPT\n",
           VAR_9);
  VAR_10 = VAR_2;
  break;
 }
 FUNC_5(&VAR_11->tcf_lock);
 return VAR_10;

}

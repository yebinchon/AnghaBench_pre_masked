
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int tm ;
struct TYPE_8__ {int name; } ;
struct TYPE_9__ {TYPE_1__ user; } ;
struct xt_entry_target {TYPE_2__ u; scalar_t__ refcnt; scalar_t__ bindcnt; } ;
struct tcf_t {int dummy; } ;
struct tcf_ipt {int tcf_lock; int tcf_tm; int tcfi_tname; int tcfi_hook; int tcf_index; TYPE_7__* tcfi_t; int tcf_refcnt; int tcf_bindcnt; } ;
struct tc_cnt {TYPE_2__ u; scalar_t__ refcnt; scalar_t__ bindcnt; } ;
struct tc_action {int dummy; } ;
struct sk_buff {int len; } ;
struct TYPE_12__ {int target_size; } ;
struct TYPE_11__ {TYPE_3__* target; } ;
struct TYPE_13__ {TYPE_5__ user; TYPE_4__ kernel; } ;
struct TYPE_14__ {TYPE_6__ u; } ;
struct TYPE_10__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct xt_entry_target*) ;
 struct xt_entry_target* FUNC_2 (TYPE_7__*,int,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int,struct xt_entry_target*) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int,struct tcf_t*,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int ,int ) ;
 int FUNC_7 (struct sk_buff*,unsigned char*) ;
 scalar_t__ FUNC_8 (int *) ;
 unsigned char* FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (struct tcf_t*,int *) ;
 struct tcf_ipt* FUNC_14 (struct tc_action*) ;
 scalar_t__ FUNC_15 (int) ;

__attribute__((used)) static int FUNC_16(struct sk_buff *VAR_8, struct tc_action *VAR_9, int VAR_10,
   int VAR_11)
{
 unsigned char *VAR_12 = FUNC_9(VAR_8);
 struct tcf_ipt *VAR_13 = FUNC_14(VAR_9);
 struct xt_entry_target *VAR_14;
 struct tcf_t VAR_15;
 struct tc_cnt VAR_16;






 FUNC_10(&VAR_13->tcf_lock);
 VAR_14 = FUNC_2(VAR_13->tcfi_t, VAR_13->tcfi_t->u.user.target_size, VAR_0);
 if (FUNC_15(!VAR_14))
  goto nla_put_failure;

 VAR_16.bindcnt = FUNC_0(&VAR_13->tcf_bindcnt) - VAR_10;
 VAR_16.refcnt = FUNC_8(&VAR_13->tcf_refcnt) - VAR_11;
 FUNC_12(VAR_14->u.user.name, VAR_13->tcfi_t->u.kernel.target->name);

 if (FUNC_3(VAR_8, VAR_6, VAR_13->tcfi_t->u.user.target_size, VAR_14) ||
     FUNC_6(VAR_8, VAR_3, VAR_13->tcf_index) ||
     FUNC_6(VAR_8, VAR_2, VAR_13->tcfi_hook) ||
     FUNC_3(VAR_8, VAR_1, sizeof(struct tc_cnt), &VAR_16) ||
     FUNC_5(VAR_8, VAR_5, VAR_13->tcfi_tname))
  goto nla_put_failure;

 FUNC_13(&VAR_15, &VAR_13->tcf_tm);
 if (FUNC_4(VAR_8, VAR_7, sizeof(VAR_15), &VAR_15, VAR_4))
  goto nla_put_failure;

 FUNC_11(&VAR_13->tcf_lock);
 FUNC_1(VAR_14);
 return VAR_8->len;

nla_put_failure:
 FUNC_11(&VAR_13->tcf_lock);
 FUNC_7(VAR_8, VAR_12);
 FUNC_1(VAR_14);
 return -1;
}

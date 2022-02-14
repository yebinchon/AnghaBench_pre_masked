
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcmsg {int tcm_handle; } ;
struct tcf_proto {int lock; } ;
struct sk_buff {int len; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;
struct fl_flow_key {int dummy; } ;
struct TYPE_3__ {scalar_t__ classid; } ;
struct cls_fl_filter {int exts; scalar_t__ in_hw_count; scalar_t__ flags; TYPE_2__* mask; struct fl_flow_key key; TYPE_1__ res; int handle; } ;
struct TYPE_4__ {struct fl_flow_key key; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct sk_buff*,struct net*,struct fl_flow_key*,struct fl_flow_key*) ;
 int FUNC_1 (struct tcf_proto*,struct cls_fl_filter*,int) ;
 int FUNC_2 (struct sk_buff*,struct nlattr*) ;
 int FUNC_3 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_4 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (struct sk_buff*,int *) ;
 scalar_t__ FUNC_10 (struct sk_buff*,int *) ;

__attribute__((used)) static int FUNC_11(struct net *VAR_4, struct tcf_proto *VAR_5, void *VAR_6,
     struct sk_buff *VAR_7, struct tcmsg *VAR_8, bool VAR_9)
{
 struct cls_fl_filter *VAR_10 = VAR_6;
 struct nlattr *VAR_11;
 struct fl_flow_key *VAR_12, *VAR_13;
 bool VAR_14;

 if (!VAR_10)
  return VAR_7->len;

 VAR_8->tcm_handle = VAR_10->handle;

 VAR_11 = FUNC_4(VAR_7, VAR_3);
 if (!VAR_11)
  goto nla_put_failure;

 FUNC_6(&VAR_5->lock);

 if (VAR_10->res.classid &&
     FUNC_5(VAR_7, VAR_0, VAR_10->res.classid))
  goto nla_put_failure_locked;

 VAR_12 = &VAR_10->key;
 VAR_13 = &VAR_10->mask->key;
 VAR_14 = FUNC_8(VAR_10->flags);

 if (FUNC_0(VAR_7, VAR_4, VAR_12, VAR_13))
  goto nla_put_failure_locked;

 if (VAR_10->flags && FUNC_5(VAR_7, VAR_1, VAR_10->flags))
  goto nla_put_failure_locked;

 FUNC_7(&VAR_5->lock);

 if (!VAR_14)
  FUNC_1(VAR_5, VAR_10, VAR_9);

 if (FUNC_5(VAR_7, VAR_2, VAR_10->in_hw_count))
  goto nla_put_failure;

 if (FUNC_9(VAR_7, &VAR_10->exts))
  goto nla_put_failure;

 FUNC_3(VAR_7, VAR_11);

 if (FUNC_10(VAR_7, &VAR_10->exts) < 0)
  goto nla_put_failure;

 return VAR_7->len;

nla_put_failure_locked:
 FUNC_7(&VAR_5->lock);
nla_put_failure:
 FUNC_2(VAR_7, VAR_11);
 return -1;
}

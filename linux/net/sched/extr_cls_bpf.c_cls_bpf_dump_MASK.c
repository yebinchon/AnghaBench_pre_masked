
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tcmsg {int tcm_handle; } ;
struct tcf_proto {int dummy; } ;
struct sk_buff {int len; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_2__ {scalar_t__ classid; } ;
struct cls_bpf_prog {int exts; scalar_t__ gen_flags; scalar_t__ exts_integrated; TYPE_1__ res; int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cls_bpf_prog*,struct sk_buff*) ;
 int FUNC_1 (struct cls_bpf_prog*,struct sk_buff*) ;
 scalar_t__ FUNC_2 (struct cls_bpf_prog*) ;
 int FUNC_3 (struct tcf_proto*,struct cls_bpf_prog*) ;
 int FUNC_4 (struct sk_buff*,struct nlattr*) ;
 int FUNC_5 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_6 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_7 (struct sk_buff*,int ,scalar_t__) ;
 scalar_t__ FUNC_8 (struct sk_buff*,int *) ;
 scalar_t__ FUNC_9 (struct sk_buff*,int *) ;

__attribute__((used)) static int FUNC_10(struct net *VAR_5, struct tcf_proto *VAR_6, void *VAR_7,
   struct sk_buff *VAR_8, struct tcmsg *VAR_9, bool VAR_10)
{
 struct cls_bpf_prog *VAR_11 = VAR_7;
 struct nlattr *VAR_12;
 u32 VAR_13 = 0;
 int VAR_14;

 if (VAR_11 == ((void*)0))
  return VAR_8->len;

 VAR_9->tcm_handle = VAR_11->handle;

 FUNC_3(VAR_6, VAR_11);

 VAR_12 = FUNC_6(VAR_8, VAR_4);
 if (VAR_12 == ((void*)0))
  goto nla_put_failure;

 if (VAR_11->res.classid &&
     FUNC_7(VAR_8, VAR_0, VAR_11->res.classid))
  goto nla_put_failure;

 if (FUNC_2(VAR_11))
  VAR_14 = FUNC_1(VAR_11, VAR_8);
 else
  VAR_14 = FUNC_0(VAR_11, VAR_8);
 if (VAR_14)
  goto nla_put_failure;

 if (FUNC_8(VAR_8, &VAR_11->exts) < 0)
  goto nla_put_failure;

 if (VAR_11->exts_integrated)
  VAR_13 |= VAR_3;
 if (VAR_13 && FUNC_7(VAR_8, VAR_1, VAR_13))
  goto nla_put_failure;
 if (VAR_11->gen_flags &&
     FUNC_7(VAR_8, VAR_2, VAR_11->gen_flags))
  goto nla_put_failure;

 FUNC_5(VAR_8, VAR_12);

 if (FUNC_9(VAR_8, &VAR_11->exts) < 0)
  goto nla_put_failure;

 return VAR_8->len;

nla_put_failure:
 FUNC_4(VAR_8, VAR_12);
 return -1;
}

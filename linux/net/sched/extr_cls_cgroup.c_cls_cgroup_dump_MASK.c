
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcmsg {int tcm_handle; } ;
struct tcf_proto {int root; } ;
struct sk_buff {int len; } ;
struct nlattr {int dummy; } ;
struct net {int dummy; } ;
struct cls_cgroup_head {int exts; int ematches; int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int ) ;
 struct cls_cgroup_head* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int *,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int *) ;
 scalar_t__ FUNC_6 (struct sk_buff*,int *) ;

__attribute__((used)) static int FUNC_7(struct net *VAR_2, struct tcf_proto *VAR_3, void *VAR_4,
      struct sk_buff *VAR_5, struct tcmsg *VAR_6, bool VAR_7)
{
 struct cls_cgroup_head *VAR_8 = FUNC_3(VAR_3->root);
 struct nlattr *VAR_9;

 VAR_6->tcm_handle = VAR_8->handle;

 VAR_9 = FUNC_2(VAR_5, VAR_1);
 if (VAR_9 == ((void*)0))
  goto nla_put_failure;

 if (FUNC_5(VAR_5, &VAR_8->exts) < 0 ||
     FUNC_4(VAR_5, &VAR_8->ematches, VAR_0) < 0)
  goto nla_put_failure;

 FUNC_1(VAR_5, VAR_9);

 if (FUNC_6(VAR_5, &VAR_8->exts) < 0)
  goto nla_put_failure;

 return VAR_5->len;

nla_put_failure:
 FUNC_0(VAR_5, VAR_9);
 return -1;
}

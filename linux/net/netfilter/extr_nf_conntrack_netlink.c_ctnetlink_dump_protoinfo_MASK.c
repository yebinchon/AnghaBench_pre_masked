
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct nf_conntrack_l4proto {int (* to_nlattr ) (struct sk_buff*,struct nlattr*,struct nf_conn*) ;} ;
struct nf_conn {int dummy; } ;


 int VAR_0 ;
 struct nf_conntrack_l4proto* FUNC_0 (int ) ;
 int FUNC_1 (struct nf_conn*) ;
 int FUNC_2 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_3 (struct sk_buff*,int ) ;
 int FUNC_4 (struct sk_buff*,struct nlattr*,struct nf_conn*) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_1, struct nf_conn *VAR_2)
{
 const struct nf_conntrack_l4proto *VAR_3;
 struct nlattr *VAR_4;
 int VAR_5;

 VAR_3 = FUNC_0(FUNC_1(VAR_2));
 if (!VAR_3->to_nlattr)
  return 0;

 VAR_4 = FUNC_3(VAR_1, VAR_0);
 if (!VAR_4)
  goto nla_put_failure;

 VAR_5 = VAR_3->to_nlattr(VAR_1, VAR_4, VAR_2);

 FUNC_2(VAR_1, VAR_4);

 return VAR_5;

nla_put_failure:
 return -1;
}

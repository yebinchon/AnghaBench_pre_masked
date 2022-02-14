
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct nf_conntrack_helper {int (* to_nlattr ) (struct sk_buff*,struct nf_conn const*) ;int name; } ;
struct nf_conn_help {int helper; } ;
struct nf_conn {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nf_conn_help* FUNC_0 (struct nf_conn const*) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;
 struct nf_conntrack_helper* FUNC_4 (int ) ;
 int FUNC_5 (struct sk_buff*,struct nf_conn const*) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_2,
       const struct nf_conn *VAR_3)
{
 struct nlattr *VAR_4;
 const struct nf_conn_help *VAR_5 = FUNC_0(VAR_3);
 struct nf_conntrack_helper *VAR_6;

 if (!VAR_5)
  return 0;

 VAR_6 = FUNC_4(VAR_5->helper);
 if (!VAR_6)
  goto out;

 VAR_4 = FUNC_2(VAR_2, VAR_0);
 if (!VAR_4)
  goto nla_put_failure;
 if (FUNC_3(VAR_2, VAR_1, VAR_6->name))
  goto nla_put_failure;

 if (VAR_6->to_nlattr)
  VAR_6->to_nlattr(VAR_2, VAR_3);

 FUNC_1(VAR_2, VAR_4);
out:
 return 0;

nla_put_failure:
 return -1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct nft_expr {int dummy; } ;


 scalar_t__ FUNC_0 (struct sk_buff*,struct nft_expr const*) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,unsigned int) ;

int FUNC_3(struct sk_buff *VAR_0, unsigned int VAR_1,
    const struct nft_expr *VAR_2)
{
 struct nlattr *VAR_3;

 VAR_3 = FUNC_2(VAR_0, VAR_1);
 if (!VAR_3)
  goto nla_put_failure;
 if (FUNC_0(VAR_0, VAR_2) < 0)
  goto nla_put_failure;
 FUNC_1(VAR_0, VAR_3);
 return 0;

nla_put_failure:
 return -1;
}

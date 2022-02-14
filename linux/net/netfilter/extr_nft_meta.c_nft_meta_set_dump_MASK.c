
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nft_meta {int sreg; int key; } ;
struct nft_expr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ) ;
 struct nft_meta* FUNC_2 (struct nft_expr const*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;

int FUNC_4(struct sk_buff *VAR_2, const struct nft_expr *VAR_3)
{
 const struct nft_meta *VAR_4 = FUNC_2(VAR_3);

 if (FUNC_3(VAR_2, VAR_0, FUNC_0(VAR_4->key)))
  goto nla_put_failure;
 if (FUNC_1(VAR_2, VAR_1, VAR_4->sreg))
  goto nla_put_failure;

 return 0;

nla_put_failure:
 return -1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nft_expr {int dummy; } ;
struct nft_byteorder {int size; int len; int op; int dreg; int sreg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ) ;
 struct nft_byteorder* FUNC_2 (struct nft_expr const*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_5, const struct nft_expr *VAR_6)
{
 const struct nft_byteorder *VAR_7 = FUNC_2(VAR_6);

 if (FUNC_1(VAR_5, VAR_4, VAR_7->sreg))
  goto nla_put_failure;
 if (FUNC_1(VAR_5, VAR_0, VAR_7->dreg))
  goto nla_put_failure;
 if (FUNC_3(VAR_5, VAR_2, FUNC_0(VAR_7->op)))
  goto nla_put_failure;
 if (FUNC_3(VAR_5, VAR_1, FUNC_0(VAR_7->len)))
  goto nla_put_failure;
 if (FUNC_3(VAR_5, VAR_3, FUNC_0(VAR_7->size)))
  goto nla_put_failure;
 return 0;

nla_put_failure:
 return -1;
}

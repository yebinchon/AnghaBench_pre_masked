
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nft_symhash {scalar_t__ modulus; scalar_t__ offset; int dreg; } ;
struct nft_expr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ) ;
 struct nft_symhash* FUNC_2 (struct nft_expr const*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_5,
       const struct nft_expr *VAR_6)
{
 const struct nft_symhash *VAR_7 = FUNC_2(VAR_6);

 if (FUNC_1(VAR_5, VAR_0, VAR_7->dreg))
  goto nla_put_failure;
 if (FUNC_3(VAR_5, VAR_1, FUNC_0(VAR_7->modulus)))
  goto nla_put_failure;
 if (VAR_7->offset != 0)
  if (FUNC_3(VAR_5, VAR_2, FUNC_0(VAR_7->offset)))
   goto nla_put_failure;
 if (FUNC_3(VAR_5, VAR_3, FUNC_0(VAR_4)))
  goto nla_put_failure;
 return 0;

nla_put_failure:
 return -1;
}

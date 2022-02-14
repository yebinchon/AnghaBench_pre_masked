
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nft_xt_match_priv {int info; } ;
struct nft_expr {int dummy; } ;


 int FUNC_0 (struct sk_buff*,struct nft_expr const*,int ) ;
 struct nft_xt_match_priv* FUNC_1 (struct nft_expr const*) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_0, const struct nft_expr *VAR_1)
{
 struct nft_xt_match_priv *VAR_2 = FUNC_1(VAR_1);

 return FUNC_0(VAR_0, VAR_1, VAR_2->info);
}

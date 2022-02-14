
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nft_quota {int dummy; } ;
struct nft_expr {int dummy; } ;


 struct nft_quota* FUNC_0 (struct nft_expr const*) ;
 int FUNC_1 (struct sk_buff*,struct nft_quota*,int) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_0, const struct nft_expr *VAR_1)
{
 struct nft_quota *VAR_2 = FUNC_0(VAR_1);

 return FUNC_1(VAR_0, VAR_2, 0);
}

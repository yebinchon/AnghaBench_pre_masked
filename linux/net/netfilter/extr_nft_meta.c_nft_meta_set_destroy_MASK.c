
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nft_meta {scalar_t__ key; } ;
struct nft_expr {int dummy; } ;
struct nft_ctx {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct nft_meta* FUNC_0 (struct nft_expr const*) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;

void FUNC_2(const struct nft_ctx *VAR_2,
     const struct nft_expr *VAR_3)
{
 const struct nft_meta *VAR_4 = FUNC_0(VAR_3);

 if (VAR_4->key == VAR_0)
  FUNC_1(&VAR_1);
}

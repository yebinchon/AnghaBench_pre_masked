
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nft_expr {int dummy; } ;
struct nft_data {int dummy; } ;
struct nft_ctx {int chain; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_1(const struct nft_ctx *VAR_1,
         const struct nft_expr *VAR_2,
         const struct nft_data **VAR_3)
{
 unsigned int VAR_4 = (1 << VAR_0);

 return FUNC_0(VAR_1->chain, VAR_4);
}

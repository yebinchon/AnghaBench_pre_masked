
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nft_expr {int dummy; } ;
struct nft_data {int dummy; } ;
struct nft_ctx {int chain; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;

__attribute__((used)) static int FUNC_1(const struct nft_ctx *VAR_3,
       const struct nft_expr *VAR_4,
       const struct nft_data **VAR_5)
{
 return FUNC_0(VAR_3->chain, (1 << VAR_1) |
          (1 << VAR_2) |
          (1 << VAR_0));
}

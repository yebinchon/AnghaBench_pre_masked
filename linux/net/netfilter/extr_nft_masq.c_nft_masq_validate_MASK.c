
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nft_expr {int dummy; } ;
struct nft_data {int dummy; } ;
struct nft_ctx {int chain; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static int FUNC_2(const struct nft_ctx *VAR_2,
        const struct nft_expr *VAR_3,
        const struct nft_data **VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_2->chain, VAR_0);
 if (VAR_5 < 0)
  return VAR_5;

 return FUNC_1(VAR_2->chain,
            (1 << VAR_1));
}

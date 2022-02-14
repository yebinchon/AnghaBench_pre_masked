
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct nft_expr {int dummy; } ;
struct nft_ctx {int dummy; } ;


 int FUNC_0 (struct nft_ctx const*,struct nft_expr const*,struct nlattr const* const*,int ) ;
 int FUNC_1 (struct nft_expr const*) ;

__attribute__((used)) static int
FUNC_2(const struct nft_ctx *VAR_0, const struct nft_expr *VAR_1,
        const struct nlattr * const VAR_2[])
{
 return FUNC_0(VAR_0, VAR_1, VAR_2, FUNC_1(VAR_1));
}

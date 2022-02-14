
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nft_object {int use; } ;
struct nft_expr {int dummy; } ;
struct nft_ctx {int dummy; } ;


 struct nft_object* FUNC_0 (struct nft_expr const*) ;

__attribute__((used)) static void FUNC_1(const struct nft_ctx *VAR_0,
    const struct nft_expr *VAR_1)
{
 struct nft_object *VAR_2 = FUNC_0(VAR_1);

 VAR_2->use++;
}

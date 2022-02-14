
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nft_expr {int dummy; } ;
struct nft_dynset {TYPE_1__* set; } ;
struct nft_ctx {int dummy; } ;
struct TYPE_2__ {int use; } ;


 struct nft_dynset* FUNC_0 (struct nft_expr const*) ;

__attribute__((used)) static void FUNC_1(const struct nft_ctx *VAR_0,
    const struct nft_expr *VAR_1)
{
 struct nft_dynset *VAR_2 = FUNC_0(VAR_1);

 VAR_2->set->use++;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nft_objref_map {int set; } ;
struct nft_expr {int dummy; } ;
struct nft_ctx {int dummy; } ;


 int FUNC_0 (struct nft_ctx const*,int ) ;
 struct nft_objref_map* FUNC_1 (struct nft_expr const*) ;

__attribute__((used)) static void FUNC_2(const struct nft_ctx *VAR_0,
       const struct nft_expr *VAR_1)
{
 struct nft_objref_map *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_0, VAR_2->set);
}

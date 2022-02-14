
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nft_expr {int dummy; } ;
struct nft_dynset {int set; int * expr; } ;
struct nft_ctx {int dummy; } ;


 int FUNC_0 (struct nft_ctx const*,int ) ;
 int FUNC_1 (struct nft_ctx const*,int *) ;
 struct nft_dynset* FUNC_2 (struct nft_expr const*) ;

__attribute__((used)) static void FUNC_3(const struct nft_ctx *VAR_0,
          const struct nft_expr *VAR_1)
{
 struct nft_dynset *VAR_2 = FUNC_2(VAR_1);

 if (VAR_2->expr != ((void*)0))
  FUNC_1(VAR_0, VAR_2->expr);

 FUNC_0(VAR_0, VAR_2->set);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nft_object {int use; } ;
struct nft_expr {int dummy; } ;
struct nft_ctx {int dummy; } ;
typedef enum nft_trans_phase { ____Placeholder_nft_trans_phase } nft_trans_phase ;


 int VAR_0 ;
 struct nft_object* FUNC_0 (struct nft_expr const*) ;

__attribute__((used)) static void FUNC_1(const struct nft_ctx *VAR_1,
      const struct nft_expr *VAR_2,
      enum nft_trans_phase VAR_3)
{
 struct nft_object *VAR_4 = FUNC_0(VAR_2);

 if (VAR_3 == VAR_0)
  return;

 VAR_4->use--;
}

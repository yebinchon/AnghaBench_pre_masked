
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nft_lookup {int binding; int set; } ;
struct nft_expr {int dummy; } ;
struct nft_ctx {int dummy; } ;
typedef enum nft_trans_phase { ____Placeholder_nft_trans_phase } nft_trans_phase ;


 int FUNC_0 (struct nft_ctx const*,int ,int *,int) ;
 struct nft_lookup* FUNC_1 (struct nft_expr const*) ;

__attribute__((used)) static void FUNC_2(const struct nft_ctx *VAR_0,
      const struct nft_expr *VAR_1,
      enum nft_trans_phase VAR_2)
{
 struct nft_lookup *VAR_3 = FUNC_1(VAR_1);

 FUNC_0(VAR_0, VAR_3->set, &VAR_3->binding, VAR_2);
}

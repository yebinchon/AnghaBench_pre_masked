
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nft_offload_ctx {int dummy; } ;
struct nft_flow_rule {int dummy; } ;
struct nft_expr {int dummy; } ;
struct nft_cmp_expr {int dummy; } ;


 int FUNC_0 (struct nft_offload_ctx*,struct nft_flow_rule*,struct nft_cmp_expr const*) ;
 struct nft_cmp_expr* FUNC_1 (struct nft_expr const*) ;

__attribute__((used)) static int FUNC_2(struct nft_offload_ctx *VAR_0,
      struct nft_flow_rule *VAR_1,
      const struct nft_expr *VAR_2)
{
 const struct nft_cmp_expr *VAR_3 = FUNC_1(VAR_2);

 return FUNC_0(VAR_0, VAR_1, VAR_3);
}

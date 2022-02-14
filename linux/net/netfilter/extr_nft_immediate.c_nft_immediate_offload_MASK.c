
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nft_offload_ctx {TYPE_1__* regs; } ;
struct nft_immediate_expr {size_t dreg; int data; } ;
struct nft_flow_rule {int dummy; } ;
struct nft_expr {int dummy; } ;
struct TYPE_2__ {int data; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 struct nft_immediate_expr* FUNC_1 (struct nft_expr const*) ;
 int FUNC_2 (struct nft_offload_ctx*,struct nft_flow_rule*,struct nft_immediate_expr const*) ;

__attribute__((used)) static int FUNC_3(struct nft_offload_ctx *VAR_1,
     struct nft_flow_rule *VAR_2,
     const struct nft_expr *VAR_3)
{
 const struct nft_immediate_expr *VAR_4 = FUNC_1(VAR_3);

 if (VAR_4->dreg == VAR_0)
  return FUNC_2(VAR_1, VAR_2, VAR_4);

 FUNC_0(&VAR_1->regs[VAR_4->dreg].data, &VAR_4->data, sizeof(VAR_4->data));

 return 0;
}

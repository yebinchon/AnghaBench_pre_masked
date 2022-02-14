
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nft_offload_ctx {TYPE_2__* regs; } ;
struct nft_fwd_netdev {size_t sreg_dev; } ;
struct nft_flow_rule {int dummy; } ;
struct nft_expr {int dummy; } ;
struct TYPE_3__ {int* data; } ;
struct TYPE_4__ {TYPE_1__ data; } ;


 int VAR_0 ;
 struct nft_fwd_netdev* FUNC_0 (struct nft_expr const*) ;
 int FUNC_1 (struct nft_offload_ctx*,struct nft_flow_rule*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct nft_offload_ctx *VAR_1,
      struct nft_flow_rule *VAR_2,
      const struct nft_expr *VAR_3)
{
 const struct nft_fwd_netdev *VAR_4 = FUNC_0(VAR_3);
 int VAR_5 = VAR_1->regs[VAR_4->sreg_dev].data.data[0];

 return FUNC_1(VAR_1, VAR_2, VAR_0, VAR_5);
}

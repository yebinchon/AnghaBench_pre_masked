
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nft_flow_offload {TYPE_1__* flowtable; } ;
struct nft_expr {int dummy; } ;
struct nft_ctx {int family; int net; } ;
struct TYPE_2__ {int use; } ;


 int FUNC_0 (int ,int ) ;
 struct nft_flow_offload* FUNC_1 (struct nft_expr const*) ;

__attribute__((used)) static void FUNC_2(const struct nft_ctx *VAR_0,
         const struct nft_expr *VAR_1)
{
 struct nft_flow_offload *VAR_2 = FUNC_1(VAR_1);

 VAR_2->flowtable->use--;
 FUNC_0(VAR_0->net, VAR_0->family);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nft_payload {int base; } ;
struct nft_offload_ctx {int dummy; } ;
struct nft_flow_rule {int dummy; } ;
struct nft_expr {int dummy; } ;


 int VAR_0 ;



 struct nft_payload* FUNC_0 (struct nft_expr const*) ;
 int FUNC_1 (struct nft_offload_ctx*,struct nft_flow_rule*,struct nft_payload const*) ;
 int FUNC_2 (struct nft_offload_ctx*,struct nft_flow_rule*,struct nft_payload const*) ;
 int FUNC_3 (struct nft_offload_ctx*,struct nft_flow_rule*,struct nft_payload const*) ;

__attribute__((used)) static int FUNC_4(struct nft_offload_ctx *VAR_1,
          struct nft_flow_rule *VAR_2,
          const struct nft_expr *VAR_3)
{
 const struct nft_payload *VAR_4 = FUNC_0(VAR_3);
 int VAR_5;

 switch (VAR_4->base) {
 case 130:
  VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_4);
  break;
 case 129:
  VAR_5 = FUNC_2(VAR_1, VAR_2, VAR_4);
  break;
 case 128:
  VAR_5 = FUNC_3(VAR_1, VAR_2, VAR_4);
  break;
 default:
  VAR_5 = -VAR_0;
  break;
 }
 return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nft_offload_reg {int dummy; } ;
struct nft_offload_ctx {struct nft_offload_reg* regs; } ;
struct nft_meta {size_t dreg; int key; } ;
struct nft_flow_rule {int dummy; } ;
struct nft_expr {int dummy; } ;
typedef int __u8 ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int,struct nft_offload_reg*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct nft_meta* FUNC_1 (struct nft_expr const*) ;
 int FUNC_2 (struct nft_offload_ctx*,int ) ;

__attribute__((used)) static int FUNC_3(struct nft_offload_ctx *VAR_7,
    struct nft_flow_rule *VAR_8,
    const struct nft_expr *VAR_9)
{
 const struct nft_meta *VAR_10 = FUNC_1(VAR_9);
 struct nft_offload_reg *VAR_11 = &VAR_7->regs[VAR_10->dreg];

 switch (VAR_10->key) {
 case 128:
  FUNC_0(VAR_1, VAR_4, VAR_6,
      sizeof(__u16), VAR_11);
  FUNC_2(VAR_7, VAR_2);
  break;
 case 129:
  FUNC_0(VAR_1, VAR_4, VAR_5,
      sizeof(__u8), VAR_11);
  FUNC_2(VAR_7, VAR_3);
  break;
 default:
  return -VAR_0;
 }

 return 0;
}

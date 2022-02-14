
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct nft_offload_reg {int offset; size_t key; int base_offset; int mask; int len; } ;
struct nft_offload_ctx {struct nft_offload_reg* regs; } ;
struct TYPE_3__ {int * offset; int used_keys; } ;
struct TYPE_4__ {TYPE_1__ dissector; int key; int mask; } ;
struct nft_flow_rule {TYPE_2__ match; } ;
struct nft_cmp_expr {size_t sreg; scalar_t__ op; int len; int data; } ;


 int FUNC_0 (size_t) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (struct nft_offload_ctx*,int *,int ) ;

__attribute__((used)) static int FUNC_3(struct nft_offload_ctx *VAR_2,
        struct nft_flow_rule *VAR_3,
        const struct nft_cmp_expr *VAR_4)
{
 struct nft_offload_reg *VAR_5 = &VAR_2->regs[VAR_4->sreg];
 u8 *VAR_6 = (u8 *)&VAR_3->match.mask;
 u8 *VAR_7 = (u8 *)&VAR_3->match.key;

 if (VAR_4->op != VAR_1 || VAR_5->len != VAR_4->len)
  return -VAR_0;

 FUNC_1(VAR_7 + VAR_5->offset, &VAR_4->data, VAR_4->len);
 FUNC_1(VAR_6 + VAR_5->offset, &VAR_5->mask, VAR_4->len);

 VAR_3->match.dissector.used_keys |= FUNC_0(VAR_5->key);
 VAR_3->match.dissector.offset[VAR_5->key] = VAR_5->base_offset;

 FUNC_2(VAR_2, &VAR_4->data, VAR_4->len);

 return 0;
}

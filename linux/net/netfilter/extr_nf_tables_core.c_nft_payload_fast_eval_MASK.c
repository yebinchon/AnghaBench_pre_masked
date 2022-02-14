
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct nft_regs {scalar_t__* data; } ;
struct TYPE_2__ {int thoff; } ;
struct nft_pktinfo {TYPE_1__ xt; int tprot_set; struct sk_buff* skb; } ;
struct nft_payload {size_t dreg; scalar_t__ base; int len; int offset; } ;
struct nft_expr {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct nft_payload* FUNC_0 (struct nft_expr const*) ;
 unsigned char* FUNC_1 (struct sk_buff const*) ;
 unsigned char* FUNC_2 (struct sk_buff const*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static bool FUNC_4(const struct nft_expr *VAR_1,
      struct nft_regs *VAR_2,
      const struct nft_pktinfo *VAR_3)
{
 const struct nft_payload *VAR_4 = FUNC_0(VAR_1);
 const struct sk_buff *VAR_5 = VAR_3->skb;
 u32 *VAR_6 = &VAR_2->data[VAR_4->dreg];
 unsigned char *VAR_7;

 if (VAR_4->base == VAR_0)
  VAR_7 = FUNC_1(VAR_5);
 else {
  if (!VAR_3->tprot_set)
   return 0;
  VAR_7 = FUNC_1(VAR_5) + VAR_3->xt.thoff;
 }

 VAR_7 += VAR_4->offset;

 if (FUNC_3(VAR_7 + VAR_4->len > FUNC_2(VAR_5)))
  return 0;

 *VAR_6 = 0;
 if (VAR_4->len == 2)
  *(u16 *)VAR_6 = *(u16 *)VAR_7;
 else if (VAR_4->len == 4)
  *(u32 *)VAR_6 = *(u32 *)VAR_7;
 else
  *(u8 *)VAR_6 = *(u8 *)VAR_7;
 return 1;
}

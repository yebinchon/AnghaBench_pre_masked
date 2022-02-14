
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef void* u32 ;
struct sk_buff {int nf_trace; void* secmark; int pkt_type; void* priority; void* mark; } ;
struct nft_regs {void** data; } ;
struct nft_pktinfo {struct sk_buff* skb; } ;
struct nft_meta {size_t sreg; int key; } ;
struct nft_expr {int dummy; } ;







 int FUNC_0 (int) ;
 struct nft_meta* FUNC_1 (struct nft_expr const*) ;
 int FUNC_2 (void**) ;
 int FUNC_3 (int ) ;

void FUNC_4(const struct nft_expr *VAR_0,
         struct nft_regs *VAR_1,
         const struct nft_pktinfo *VAR_2)
{
 const struct nft_meta *VAR_3 = FUNC_1(VAR_0);
 struct sk_buff *VAR_4 = VAR_2->skb;
 u32 *VAR_5 = &VAR_1->data[VAR_3->sreg];
 u32 VAR_6 = *VAR_5;
 u8 VAR_7;

 switch (VAR_3->key) {
 case 132:
  VAR_4->mark = VAR_6;
  break;
 case 129:
  VAR_4->priority = VAR_6;
  break;
 case 130:
  VAR_7 = FUNC_2(VAR_5);

  if (VAR_4->pkt_type != VAR_7 &&
      FUNC_3(VAR_7) &&
      FUNC_3(VAR_4->pkt_type))
   VAR_4->pkt_type = VAR_7;
  break;
 case 131:
  VAR_7 = FUNC_2(VAR_5);

  VAR_4->nf_trace = !!VAR_7;
  break;





 default:
  FUNC_0(1);
 }
}

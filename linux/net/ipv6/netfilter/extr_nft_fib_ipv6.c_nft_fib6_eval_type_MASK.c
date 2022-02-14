
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int code; } ;
struct nft_regs {TYPE_1__ verdict; int * data; } ;
struct nft_pktinfo {int skb; } ;
struct nft_fib {size_t dreg; } ;
struct nft_expr {int dummy; } ;
struct ipv6hdr {int dummy; } ;
typedef int _iph ;


 int VAR_0 ;
 int FUNC_0 (struct nft_fib const*,struct nft_pktinfo const*,struct ipv6hdr*) ;
 struct nft_fib* FUNC_1 (struct nft_expr const*) ;
 struct ipv6hdr* FUNC_2 (int ,int,int,struct ipv6hdr*) ;
 int FUNC_3 (int ) ;

void FUNC_4(const struct nft_expr *VAR_1, struct nft_regs *VAR_2,
   const struct nft_pktinfo *VAR_3)
{
 const struct nft_fib *VAR_4 = FUNC_1(VAR_1);
 int VAR_5 = FUNC_3(VAR_3->skb);
 u32 *VAR_6 = &VAR_2->data[VAR_4->dreg];
 struct ipv6hdr *VAR_7, VAR_8;

 VAR_7 = FUNC_2(VAR_3->skb, VAR_5, sizeof(VAR_8), &VAR_8);
 if (!VAR_7) {
  VAR_2->verdict.code = VAR_0;
  return;
 }

 *VAR_6 = FUNC_0(VAR_4, VAR_3, VAR_7);
}

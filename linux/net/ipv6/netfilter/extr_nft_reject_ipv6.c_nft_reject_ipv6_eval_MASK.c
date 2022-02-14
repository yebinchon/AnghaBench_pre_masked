
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nft_reject {int type; int icmp_code; } ;
struct TYPE_2__ {int code; } ;
struct nft_regs {TYPE_1__ verdict; } ;
struct nft_pktinfo {int skb; } ;
struct nft_expr {int dummy; } ;




 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 struct nft_reject* FUNC_2 (struct nft_expr const*) ;
 int FUNC_3 (struct nft_pktinfo const*) ;
 int FUNC_4 (struct nft_pktinfo const*) ;

__attribute__((used)) static void FUNC_5(const struct nft_expr *VAR_1,
     struct nft_regs *VAR_2,
     const struct nft_pktinfo *VAR_3)
{
 struct nft_reject *VAR_4 = FUNC_2(VAR_1);

 switch (VAR_4->type) {
 case 129:
  FUNC_1(FUNC_4(VAR_3), VAR_3->skb, VAR_4->icmp_code,
     FUNC_3(VAR_3));
  break;
 case 128:
  FUNC_0(FUNC_4(VAR_3), VAR_3->skb, FUNC_3(VAR_3));
  break;
 default:
  break;
 }

 VAR_2->verdict.code = VAR_0;
}

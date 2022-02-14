
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nft_reject {int icmp_code; int type; } ;
struct TYPE_2__ {int code; } ;
struct nft_regs {TYPE_1__ verdict; } ;
struct nft_pktinfo {int skb; } ;
struct nft_expr {int dummy; } ;







 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 struct nft_reject* FUNC_4 (struct nft_expr const*) ;
 int FUNC_5 (struct nft_pktinfo const*) ;
 int FUNC_6 (struct nft_pktinfo const*) ;
 int FUNC_7 (struct nft_pktinfo const*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(const struct nft_expr *VAR_1,
     struct nft_regs *VAR_2,
     const struct nft_pktinfo *VAR_3)
{
 struct nft_reject *VAR_4 = FUNC_4(VAR_1);

 switch (FUNC_7(VAR_3)) {
 case 132:
  switch (VAR_4->type) {
  case 129:
   FUNC_2(VAR_3->skb, VAR_4->icmp_code,
     FUNC_5(VAR_3));
   break;
  case 128:
   FUNC_0(FUNC_6(VAR_3), VAR_3->skb, FUNC_5(VAR_3));
   break;
  case 130:
   FUNC_2(VAR_3->skb,
     FUNC_8(VAR_4->icmp_code),
     FUNC_5(VAR_3));
   break;
  }
  break;
 case 131:
  switch (VAR_4->type) {
  case 129:
   FUNC_3(FUNC_6(VAR_3), VAR_3->skb,
      VAR_4->icmp_code, FUNC_5(VAR_3));
   break;
  case 128:
   FUNC_1(FUNC_6(VAR_3), VAR_3->skb, FUNC_5(VAR_3));
   break;
  case 130:
   FUNC_3(FUNC_6(VAR_3), VAR_3->skb,
      FUNC_9(VAR_4->icmp_code),
      FUNC_5(VAR_3));
   break;
  }
  break;
 }

 VAR_2->verdict.code = VAR_0;
}

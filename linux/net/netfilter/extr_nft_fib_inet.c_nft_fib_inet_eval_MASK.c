
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int code; } ;
struct nft_regs {TYPE_1__ verdict; } ;
struct nft_pktinfo {int dummy; } ;
struct nft_fib {int result; } ;
struct nft_expr {int dummy; } ;







 int VAR_0 ;
 struct nft_fib* FUNC_0 (struct nft_expr const*) ;
 void FUNC_1 (struct nft_expr const*,struct nft_regs*,struct nft_pktinfo const*) ;
 void FUNC_2 (struct nft_expr const*,struct nft_regs*,struct nft_pktinfo const*) ;
 void FUNC_3 (struct nft_expr const*,struct nft_regs*,struct nft_pktinfo const*) ;
 void FUNC_4 (struct nft_expr const*,struct nft_regs*,struct nft_pktinfo const*) ;
 int FUNC_5 (struct nft_pktinfo const*) ;

__attribute__((used)) static void FUNC_6(const struct nft_expr *VAR_1,
         struct nft_regs *VAR_2,
         const struct nft_pktinfo *VAR_3)
{
 const struct nft_fib *VAR_4 = FUNC_0(VAR_1);

 switch (FUNC_5(VAR_3)) {
 case 132:
  switch (VAR_4->result) {
  case 129:
  case 128:
   return FUNC_1(VAR_1, VAR_2, VAR_3);
  case 130:
   return FUNC_2(VAR_1, VAR_2, VAR_3);
  }
  break;
 case 131:
  switch (VAR_4->result) {
  case 129:
  case 128:
   return FUNC_3(VAR_1, VAR_2, VAR_3);
  case 130:
   return FUNC_4(VAR_1, VAR_2, VAR_3);
  }
  break;
 }

 VAR_2->verdict.code = VAR_0;
}

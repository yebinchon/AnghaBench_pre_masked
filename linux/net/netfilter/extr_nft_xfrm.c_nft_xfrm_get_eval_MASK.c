
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nft_xfrm {int dir; } ;
struct TYPE_2__ {int code; } ;
struct nft_regs {TYPE_1__ verdict; } ;
struct nft_pktinfo {int dummy; } ;
struct nft_expr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;


 struct nft_xfrm* FUNC_1 (struct nft_expr const*) ;
 int FUNC_2 (struct nft_xfrm const*,struct nft_regs*,struct nft_pktinfo const*) ;
 int FUNC_3 (struct nft_xfrm const*,struct nft_regs*,struct nft_pktinfo const*) ;

__attribute__((used)) static void FUNC_4(const struct nft_expr *VAR_1,
         struct nft_regs *VAR_2,
         const struct nft_pktinfo *VAR_3)
{
 const struct nft_xfrm *VAR_4 = FUNC_1(VAR_1);

 switch (VAR_4->dir) {
 case 129:
  FUNC_2(VAR_4, VAR_2, VAR_3);
  break;
 case 128:
  FUNC_3(VAR_4, VAR_2, VAR_3);
  break;
 default:
  FUNC_0(1);
  VAR_2->verdict.code = VAR_0;
  break;
 }
}

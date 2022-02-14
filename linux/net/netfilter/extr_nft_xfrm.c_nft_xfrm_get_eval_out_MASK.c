
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrm_dst {struct dst_entry* child; } ;
struct nft_xfrm {int spnum; } ;
struct TYPE_2__ {int code; } ;
struct nft_regs {TYPE_1__ verdict; } ;
struct nft_pktinfo {int skb; } ;
struct dst_entry {scalar_t__ xfrm; } ;


 int VAR_0 ;
 int FUNC_0 (struct nft_xfrm const*,struct nft_regs*,scalar_t__) ;
 struct dst_entry* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(const struct nft_xfrm *VAR_1,
      struct nft_regs *VAR_2,
      const struct nft_pktinfo *VAR_3)
{
 const struct dst_entry *VAR_4 = FUNC_1(VAR_3->skb);
 int VAR_5;

 for (VAR_5 = 0; VAR_4 && VAR_4->xfrm;
      VAR_4 = ((const struct xfrm_dst *)VAR_4)->child, VAR_5++) {
  if (VAR_5 < VAR_1->spnum)
   continue;

  FUNC_0(VAR_1, VAR_2, VAR_4->xfrm);
  return;
 }

 VAR_2->verdict.code = VAR_0;
}

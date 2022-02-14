
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrm_state {int dummy; } ;
struct sec_path {size_t len; struct xfrm_state** xvec; } ;
struct nft_xfrm {size_t spnum; } ;
struct TYPE_2__ {int code; } ;
struct nft_regs {TYPE_1__ verdict; } ;
struct nft_pktinfo {int skb; } ;


 int VAR_0 ;
 int FUNC_0 (struct nft_xfrm const*,struct nft_regs*,struct xfrm_state const*) ;
 struct sec_path* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(const struct nft_xfrm *VAR_1,
        struct nft_regs *VAR_2,
        const struct nft_pktinfo *VAR_3)
{
 const struct sec_path *VAR_4 = FUNC_1(VAR_3->skb);
 const struct xfrm_state *VAR_5;

 if (VAR_4 == ((void*)0) || VAR_4->len <= VAR_1->spnum) {
  VAR_2->verdict.code = VAR_0;
  return;
 }

 VAR_5 = VAR_4->xvec[VAR_1->spnum];
 FUNC_0(VAR_1, VAR_2, VAR_5);
}

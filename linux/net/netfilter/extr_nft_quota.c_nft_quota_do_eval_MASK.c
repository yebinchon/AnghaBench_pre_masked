
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int code; } ;
struct nft_regs {TYPE_1__ verdict; } ;
struct nft_quota {int dummy; } ;
struct nft_pktinfo {int skb; } ;


 int VAR_0 ;
 int FUNC_0 (struct nft_quota*,int ) ;
 int FUNC_1 (struct nft_quota*) ;

__attribute__((used)) static inline void FUNC_2(struct nft_quota *VAR_1,
         struct nft_regs *VAR_2,
         const struct nft_pktinfo *VAR_3)
{
 if (FUNC_0(VAR_1, VAR_3->skb) ^ FUNC_1(VAR_1))
  VAR_2->verdict.code = VAR_0;
}

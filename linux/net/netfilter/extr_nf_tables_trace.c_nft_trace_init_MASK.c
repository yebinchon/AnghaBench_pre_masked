
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nft_verdict {int dummy; } ;
struct nft_traceinfo {int trace; int packet_dumped; struct nft_verdict const* verdict; struct nft_pktinfo const* pkt; int basechain; } ;
struct nft_pktinfo {int dummy; } ;
struct nft_chain {int dummy; } ;


 int FUNC_0 (struct nft_chain const*) ;

void FUNC_1(struct nft_traceinfo *VAR_0, const struct nft_pktinfo *VAR_1,
      const struct nft_verdict *VAR_2,
      const struct nft_chain *VAR_3)
{
 VAR_0->basechain = FUNC_0(VAR_3);
 VAR_0->trace = 1;
 VAR_0->packet_dumped = 0;
 VAR_0->pkt = VAR_1;
 VAR_0->verdict = VAR_2;
}

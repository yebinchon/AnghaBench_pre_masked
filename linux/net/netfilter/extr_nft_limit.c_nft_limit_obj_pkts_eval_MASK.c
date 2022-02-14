
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int code; } ;
struct nft_regs {TYPE_1__ verdict; } ;
struct nft_pktinfo {int dummy; } ;
struct nft_object {int dummy; } ;
struct nft_limit_pkts {int cost; int limit; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 struct nft_limit_pkts* FUNC_1 (struct nft_object*) ;

__attribute__((used)) static void FUNC_2(struct nft_object *VAR_1,
        struct nft_regs *VAR_2,
        const struct nft_pktinfo *VAR_3)
{
 struct nft_limit_pkts *VAR_4 = FUNC_1(VAR_1);

 if (FUNC_0(&VAR_4->limit, VAR_4->cost))
  VAR_2->verdict.code = VAR_0;
}

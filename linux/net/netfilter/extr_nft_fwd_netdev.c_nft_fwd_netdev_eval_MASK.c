
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int code; } ;
struct nft_regs {int* data; TYPE_1__ verdict; } ;
struct nft_pktinfo {int dummy; } ;
struct nft_fwd_netdev {size_t sreg_dev; } ;
struct nft_expr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nft_pktinfo const*,int) ;
 struct nft_fwd_netdev* FUNC_1 (struct nft_expr const*) ;

__attribute__((used)) static void FUNC_2(const struct nft_expr *VAR_1,
    struct nft_regs *VAR_2,
    const struct nft_pktinfo *VAR_3)
{
 struct nft_fwd_netdev *VAR_4 = FUNC_1(VAR_1);
 int VAR_5 = VAR_2->data[VAR_4->sreg_dev];

 FUNC_0(VAR_3, VAR_5);
 VAR_2->verdict.code = VAR_0;
}

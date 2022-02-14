
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nft_regs {int* data; } ;
struct nft_pktinfo {int dummy; } ;
struct nft_expr {int dummy; } ;
struct nft_dup_netdev {size_t sreg_dev; } ;


 int FUNC_0 (struct nft_pktinfo const*,int) ;
 struct nft_dup_netdev* FUNC_1 (struct nft_expr const*) ;

__attribute__((used)) static void FUNC_2(const struct nft_expr *VAR_0,
    struct nft_regs *VAR_1,
    const struct nft_pktinfo *VAR_2)
{
 struct nft_dup_netdev *VAR_3 = FUNC_1(VAR_0);
 int VAR_4 = VAR_1->data[VAR_3->sreg_dev];

 FUNC_0(VAR_2, VAR_4);
}

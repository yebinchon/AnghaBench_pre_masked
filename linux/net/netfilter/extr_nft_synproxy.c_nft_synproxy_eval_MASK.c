
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nft_synproxy {int dummy; } ;
struct nft_regs {int dummy; } ;
struct nft_pktinfo {int dummy; } ;
struct nft_expr {int dummy; } ;


 struct nft_synproxy* FUNC_0 (struct nft_expr const*) ;
 int FUNC_1 (struct nft_synproxy const*,struct nft_regs*,struct nft_pktinfo const*) ;

__attribute__((used)) static void FUNC_2(const struct nft_expr *VAR_0,
         struct nft_regs *VAR_1,
         const struct nft_pktinfo *VAR_2)
{
 const struct nft_synproxy *VAR_3 = FUNC_0(VAR_0);

 FUNC_1(VAR_3, VAR_1, VAR_2);
}

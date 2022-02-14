
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nft_regs {int dummy; } ;
struct nft_pktinfo {int dummy; } ;
struct nft_expr {int dummy; } ;
struct nft_counter_percpu_priv {int dummy; } ;


 int FUNC_0 (struct nft_counter_percpu_priv*,struct nft_regs*,struct nft_pktinfo const*) ;
 struct nft_counter_percpu_priv* FUNC_1 (struct nft_expr const*) ;

__attribute__((used)) static void FUNC_2(const struct nft_expr *VAR_0,
        struct nft_regs *VAR_1,
        const struct nft_pktinfo *VAR_2)
{
 struct nft_counter_percpu_priv *VAR_3 = FUNC_1(VAR_0);

 FUNC_0(VAR_3, VAR_1, VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nft_regs {int * data; } ;
struct nft_pktinfo {int dummy; } ;
struct nft_immediate_expr {size_t dreg; int dlen; int data; } ;
struct nft_expr {int dummy; } ;


 int FUNC_0 (int *,int *,int ) ;
 struct nft_immediate_expr* FUNC_1 (struct nft_expr const*) ;

void FUNC_2(const struct nft_expr *VAR_0,
   struct nft_regs *VAR_1,
   const struct nft_pktinfo *VAR_2)
{
 const struct nft_immediate_expr *VAR_3 = FUNC_1(VAR_0);

 FUNC_0(&VAR_1->data[VAR_3->dreg], &VAR_3->data, VAR_3->dlen);
}

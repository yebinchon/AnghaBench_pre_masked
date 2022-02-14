
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nft_immediate_expr {int dreg; int data; } ;
struct nft_expr {int dummy; } ;
struct nft_ctx {int dummy; } ;


 void FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 struct nft_immediate_expr* FUNC_2 (struct nft_expr const*) ;

__attribute__((used)) static void FUNC_3(const struct nft_ctx *VAR_0,
       const struct nft_expr *VAR_1)
{
 const struct nft_immediate_expr *VAR_2 = FUNC_2(VAR_1);

 return FUNC_0(&VAR_2->data, FUNC_1(VAR_2->dreg));
}

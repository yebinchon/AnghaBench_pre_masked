
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xt_target {int me; } ;
struct nft_expr_ops {struct xt_target* data; } ;


 int FUNC_0 (struct nft_expr_ops const*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(const struct nft_expr_ops *VAR_0)
{
 struct xt_target *VAR_1 = VAR_0->data;

 FUNC_1(VAR_1->me);
 FUNC_0(VAR_0);
}

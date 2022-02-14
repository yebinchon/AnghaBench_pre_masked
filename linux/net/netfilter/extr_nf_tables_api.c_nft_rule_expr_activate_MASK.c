
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nft_rule {int dummy; } ;
struct nft_expr {TYPE_1__* ops; } ;
struct nft_ctx {int dummy; } ;
struct TYPE_2__ {int (* activate ) (struct nft_ctx const*,struct nft_expr*) ;} ;


 struct nft_expr* FUNC_0 (struct nft_rule*) ;
 struct nft_expr* FUNC_1 (struct nft_rule*) ;
 struct nft_expr* FUNC_2 (struct nft_expr*) ;
 int FUNC_3 (struct nft_ctx const*,struct nft_expr*) ;

__attribute__((used)) static void FUNC_4(const struct nft_ctx *VAR_0,
       struct nft_rule *VAR_1)
{
 struct nft_expr *VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 while (VAR_2 != FUNC_1(VAR_1) && VAR_2->ops) {
  if (VAR_2->ops->activate)
   VAR_2->ops->activate(VAR_0, VAR_2);

  VAR_2 = FUNC_2(VAR_2);
 }
}

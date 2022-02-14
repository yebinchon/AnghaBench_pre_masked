
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nft_expr_type {int owner; } ;
struct nft_expr {TYPE_1__* ops; } ;
struct nft_ctx {int dummy; } ;
struct TYPE_2__ {int (* destroy ) (struct nft_ctx const*,struct nft_expr*) ;struct nft_expr_type* type; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct nft_ctx const*,struct nft_expr*) ;

__attribute__((used)) static void FUNC_2(const struct nft_ctx *VAR_0,
       struct nft_expr *VAR_1)
{
 const struct nft_expr_type *VAR_2 = VAR_1->ops->type;

 if (VAR_1->ops->destroy)
  VAR_1->ops->destroy(VAR_0, VAR_1);
 FUNC_0(VAR_2->owner);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nft_set_ext {int dummy; } ;
struct nft_set {int dtype; TYPE_1__* table; int net; } ;
struct nft_expr {TYPE_3__* ops; } ;
struct nft_ctx {int family; int net; } ;
struct TYPE_8__ {int use; } ;
struct TYPE_7__ {TYPE_2__* type; int (* destroy_clone ) (struct nft_ctx*,struct nft_expr*) ;} ;
struct TYPE_6__ {int owner; } ;
struct TYPE_5__ {int family; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nft_ctx*,struct nft_expr*) ;
 int FUNC_3 (int ,int ) ;
 struct nft_set_ext* FUNC_4 (struct nft_set const*,void*) ;
 int FUNC_5 (struct nft_set_ext*) ;
 scalar_t__ FUNC_6 (struct nft_set_ext*,int ) ;
 struct nft_expr* FUNC_7 (struct nft_set_ext*) ;
 int FUNC_8 (struct nft_set_ext*) ;
 TYPE_4__** FUNC_9 (struct nft_set_ext*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct nft_ctx*,struct nft_expr*) ;

void FUNC_12(const struct nft_set *VAR_4, void *VAR_5,
     bool VAR_6)
{
 struct nft_set_ext *VAR_7 = FUNC_4(VAR_4, VAR_5);
 struct nft_ctx VAR_8 = {
  .net = FUNC_10(&VAR_4->net),
  .family = VAR_4->table->family,
 };

 FUNC_3(FUNC_8(VAR_7), VAR_0);
 if (FUNC_6(VAR_7, VAR_1))
  FUNC_3(FUNC_5(VAR_7), VAR_4->dtype);
 if (VAR_6 && FUNC_6(VAR_7, VAR_2)) {
  struct nft_expr *VAR_9 = FUNC_7(VAR_7);

  if (VAR_9->ops->destroy_clone) {
   VAR_9->ops->destroy_clone(&VAR_8, VAR_9);
   FUNC_1(VAR_9->ops->type->owner);
  } else {
   FUNC_2(&VAR_8, VAR_9);
  }
 }
 if (FUNC_6(VAR_7, VAR_3))
  (*FUNC_9(VAR_7))->use--;
 FUNC_0(VAR_5);
}

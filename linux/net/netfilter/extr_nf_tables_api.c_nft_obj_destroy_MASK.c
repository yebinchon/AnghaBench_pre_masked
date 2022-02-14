
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {struct nft_object* name; } ;
struct nft_object {TYPE_3__ key; TYPE_2__* ops; } ;
struct nft_ctx {int dummy; } ;
struct TYPE_5__ {TYPE_1__* type; int (* destroy ) (struct nft_ctx const*,struct nft_object*) ;} ;
struct TYPE_4__ {int owner; } ;


 int FUNC_0 (struct nft_object*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nft_ctx const*,struct nft_object*) ;

__attribute__((used)) static void FUNC_3(const struct nft_ctx *VAR_0, struct nft_object *VAR_1)
{
 if (VAR_1->ops->destroy)
  VAR_1->ops->destroy(VAR_0, VAR_1);

 FUNC_1(VAR_1->ops->type->owner);
 FUNC_0(VAR_1->key.name);
 FUNC_0(VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nlattr {int dummy; } ;
struct nft_expr_info {TYPE_2__* ops; } ;
struct nft_expr {int dummy; } ;
struct nft_ctx {int dummy; } ;
struct module {int dummy; } ;
struct TYPE_4__ {TYPE_1__* type; int size; } ;
struct TYPE_3__ {int (* release_ops ) (TYPE_2__*) ;struct module* owner; } ;


 int VAR_0 ;
 struct nft_expr* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct nft_expr*) ;
 struct nft_expr* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct module*) ;
 int FUNC_4 (struct nft_ctx const*,struct nlattr const*,struct nft_expr_info*) ;
 int FUNC_5 (struct nft_ctx const*,struct nft_expr_info*,struct nft_expr*) ;
 int FUNC_6 (TYPE_2__*) ;

struct nft_expr *FUNC_7(const struct nft_ctx *VAR_2,
          const struct nlattr *VAR_3)
{
 struct nft_expr_info VAR_4;
 struct nft_expr *VAR_5;
 struct module *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_4(VAR_2, VAR_3, &VAR_4);
 if (VAR_7 < 0)
  goto err1;

 VAR_7 = -VAR_0;
 VAR_5 = FUNC_2(VAR_4.ops->size, VAR_1);
 if (VAR_5 == ((void*)0))
  goto err2;

 VAR_7 = FUNC_5(VAR_2, &VAR_4, VAR_5);
 if (VAR_7 < 0)
  goto err3;

 return VAR_5;
err3:
 FUNC_1(VAR_5);
err2:
 VAR_6 = VAR_4.ops->type->owner;
 if (VAR_4.ops->type->release_ops)
  VAR_4.ops->type->release_ops(VAR_4.ops);

 FUNC_3(VAR_6);
err1:
 return FUNC_0(VAR_7);
}

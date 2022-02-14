
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct TYPE_4__ {int name; } ;
struct nft_object {TYPE_3__* ops; TYPE_1__ key; } ;
struct nft_expr {int dummy; } ;
struct TYPE_6__ {TYPE_2__* type; } ;
struct TYPE_5__ {int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct nft_object* FUNC_1 (struct nft_expr const*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_2, const struct nft_expr *VAR_3)
{
 const struct nft_object *VAR_4 = FUNC_1(VAR_3);

 if (FUNC_3(VAR_2, VAR_0, VAR_4->key.name) ||
     FUNC_2(VAR_2, VAR_1,
    FUNC_0(VAR_4->ops->type->type)))
  goto nla_put_failure;

 return 0;

nla_put_failure:
 return -1;
}

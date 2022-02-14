
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct nlattr {int dummy; } ;
struct nft_expr {TYPE_2__* ops; } ;
struct TYPE_4__ {scalar_t__ (* dump ) (struct sk_buff*,struct nft_expr const*) ;TYPE_1__* type; } ;
struct TYPE_3__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_1 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,struct nft_expr const*) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_2,
        const struct nft_expr *VAR_3)
{
 if (FUNC_2(VAR_2, VAR_1, VAR_3->ops->type->name))
  goto nla_put_failure;

 if (VAR_3->ops->dump) {
  struct nlattr *VAR_4 = FUNC_1(VAR_2,
           VAR_0);
  if (VAR_4 == ((void*)0))
   goto nla_put_failure;
  if (VAR_3->ops->dump(VAR_2, VAR_3) < 0)
   goto nla_put_failure;
  FUNC_0(VAR_2, VAR_4);
 }

 return VAR_2->len;

nla_put_failure:
 return -1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct nft_object {TYPE_1__* ops; } ;
struct TYPE_2__ {scalar_t__ (* dump ) (struct sk_buff*,struct nft_object*,int) ;} ;


 int FUNC_0 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_1 (struct sk_buff*,unsigned int) ;
 scalar_t__ FUNC_2 (struct sk_buff*,struct nft_object*,int) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_0, unsigned int VAR_1,
      struct nft_object *VAR_2, bool VAR_3)
{
 struct nlattr *VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_1);
 if (!VAR_4)
  goto nla_put_failure;
 if (VAR_2->ops->dump(VAR_0, VAR_2, VAR_3) < 0)
  goto nla_put_failure;
 FUNC_0(VAR_0, VAR_4);
 return 0;

nla_put_failure:
 return -1;
}

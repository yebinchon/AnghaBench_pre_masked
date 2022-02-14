
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xt_target {int usersize; int targetsize; int revision; int name; } ;
struct sk_buff {int dummy; } ;
struct nft_expr {TYPE_1__* ops; } ;
struct TYPE_2__ {struct xt_target* data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (struct nft_expr const*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,void*,int ,int ) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_3, const struct nft_expr *VAR_4)
{
 const struct xt_target *VAR_5 = VAR_4->ops->data;
 void *VAR_6 = FUNC_1(VAR_4);

 if (FUNC_4(VAR_3, VAR_1, VAR_5->name) ||
     FUNC_3(VAR_3, VAR_2, FUNC_0(VAR_5->revision)) ||
     FUNC_2(VAR_3, VAR_0, VAR_6,
        VAR_5->targetsize, VAR_5->usersize))
  goto nla_put_failure;

 return 0;

nla_put_failure:
 return -1;
}

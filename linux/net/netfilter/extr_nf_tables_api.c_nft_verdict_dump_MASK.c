
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct nft_verdict {int code; TYPE_1__* chain; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_2 (struct sk_buff*,int) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;
 int FUNC_4 (struct sk_buff*,int ,int ) ;

int FUNC_5(struct sk_buff *VAR_2, int VAR_3, const struct nft_verdict *VAR_4)
{
 struct nlattr *VAR_5;

 VAR_5 = FUNC_2(VAR_2, VAR_3);
 if (!VAR_5)
  goto nla_put_failure;

 if (FUNC_3(VAR_2, VAR_1, FUNC_0(VAR_4->code)))
  goto nla_put_failure;

 switch (VAR_4->code) {
 case 128:
 case 129:
  if (FUNC_4(VAR_2, VAR_0,
       VAR_4->chain->name))
   goto nla_put_failure;
 }
 FUNC_1(VAR_2, VAR_5);
 return 0;

nla_put_failure:
 return -1;
}

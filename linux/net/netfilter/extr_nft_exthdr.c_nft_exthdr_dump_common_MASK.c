
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nft_exthdr {int op; int flags; int len; int offset; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_5, const struct nft_exthdr *VAR_6)
{
 if (FUNC_2(VAR_5, VAR_4, VAR_6->type))
  goto nla_put_failure;
 if (FUNC_1(VAR_5, VAR_2, FUNC_0(VAR_6->offset)))
  goto nla_put_failure;
 if (FUNC_1(VAR_5, VAR_1, FUNC_0(VAR_6->len)))
  goto nla_put_failure;
 if (FUNC_1(VAR_5, VAR_0, FUNC_0(VAR_6->flags)))
  goto nla_put_failure;
 if (FUNC_1(VAR_5, VAR_3, FUNC_0(VAR_6->op)))
  goto nla_put_failure;
 return 0;

nla_put_failure:
 return -1;
}

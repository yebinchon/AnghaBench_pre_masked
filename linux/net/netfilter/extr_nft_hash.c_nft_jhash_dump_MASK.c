
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nft_jhash {scalar_t__ len; scalar_t__ modulus; scalar_t__ seed; scalar_t__ offset; int autogen_seed; int dreg; int sreg; } ;
struct nft_expr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ) ;
 struct nft_jhash* FUNC_2 (struct nft_expr const*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_8,
     const struct nft_expr *VAR_9)
{
 const struct nft_jhash *VAR_10 = FUNC_2(VAR_9);

 if (FUNC_1(VAR_8, VAR_5, VAR_10->sreg))
  goto nla_put_failure;
 if (FUNC_1(VAR_8, VAR_0, VAR_10->dreg))
  goto nla_put_failure;
 if (FUNC_3(VAR_8, VAR_1, FUNC_0(VAR_10->len)))
  goto nla_put_failure;
 if (FUNC_3(VAR_8, VAR_2, FUNC_0(VAR_10->modulus)))
  goto nla_put_failure;
 if (!VAR_10->autogen_seed &&
     FUNC_3(VAR_8, VAR_4, FUNC_0(VAR_10->seed)))
  goto nla_put_failure;
 if (VAR_10->offset != 0)
  if (FUNC_3(VAR_8, VAR_3, FUNC_0(VAR_10->offset)))
   goto nla_put_failure;
 if (FUNC_3(VAR_8, VAR_6, FUNC_0(VAR_7)))
  goto nla_put_failure;
 return 0;

nla_put_failure:
 return -1;
}

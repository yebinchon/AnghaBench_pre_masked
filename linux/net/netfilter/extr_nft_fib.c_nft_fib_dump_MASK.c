
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nft_fib {int flags; int result; int dreg; } ;
struct nft_expr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ) ;
 struct nft_fib* FUNC_2 (struct nft_expr const*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;

int FUNC_4(struct sk_buff *VAR_3, const struct nft_expr *VAR_4)
{
 const struct nft_fib *VAR_5 = FUNC_2(VAR_4);

 if (FUNC_1(VAR_3, VAR_0, VAR_5->dreg))
  return -1;

 if (FUNC_3(VAR_3, VAR_2, FUNC_0(VAR_5->result)))
  return -1;

 if (FUNC_3(VAR_3, VAR_1, FUNC_0(VAR_5->flags)))
  return -1;

 return 0;
}

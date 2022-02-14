
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nft_expr {int dummy; } ;
struct nft_cmp_expr {int len; int data; int op; int sreg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int *,int ,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ) ;
 struct nft_cmp_expr* FUNC_3 (struct nft_expr const*) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_4, const struct nft_expr *VAR_5)
{
 const struct nft_cmp_expr *VAR_6 = FUNC_3(VAR_5);

 if (FUNC_2(VAR_4, VAR_2, VAR_6->sreg))
  goto nla_put_failure;
 if (FUNC_4(VAR_4, VAR_1, FUNC_0(VAR_6->op)))
  goto nla_put_failure;

 if (FUNC_1(VAR_4, VAR_0, &VAR_6->data,
     VAR_3, VAR_6->len) < 0)
  goto nla_put_failure;
 return 0;

nla_put_failure:
 return -1;
}

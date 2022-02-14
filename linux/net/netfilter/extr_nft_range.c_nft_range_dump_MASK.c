
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nft_range_expr {int len; int data_to; int data_from; int op; int sreg; } ;
struct nft_expr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int *,int ,int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ) ;
 struct nft_range_expr* FUNC_3 (struct nft_expr const*) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_5, const struct nft_expr *VAR_6)
{
 const struct nft_range_expr *VAR_7 = FUNC_3(VAR_6);

 if (FUNC_2(VAR_5, VAR_2, VAR_7->sreg))
  goto nla_put_failure;
 if (FUNC_4(VAR_5, VAR_1, FUNC_0(VAR_7->op)))
  goto nla_put_failure;

 if (FUNC_1(VAR_5, VAR_0, &VAR_7->data_from,
     VAR_4, VAR_7->len) < 0 ||
     FUNC_1(VAR_5, VAR_3, &VAR_7->data_to,
     VAR_4, VAR_7->len) < 0)
  goto nla_put_failure;
 return 0;

nla_put_failure:
 return -1;
}

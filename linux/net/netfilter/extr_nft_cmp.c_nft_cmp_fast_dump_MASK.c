
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nft_expr {int dummy; } ;
struct nft_data {int * data; } ;
struct nft_cmp_fast_expr {int len; int data; int sreg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,struct nft_data*,int ,int) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ) ;
 struct nft_cmp_fast_expr* FUNC_3 (struct nft_expr const*) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_6, const struct nft_expr *VAR_7)
{
 const struct nft_cmp_fast_expr *VAR_8 = FUNC_3(VAR_7);
 struct nft_data VAR_9;

 if (FUNC_2(VAR_6, VAR_3, VAR_8->sreg))
  goto nla_put_failure;
 if (FUNC_4(VAR_6, VAR_2, FUNC_0(VAR_4)))
  goto nla_put_failure;

 VAR_9.data[0] = VAR_8->data;
 if (FUNC_1(VAR_6, VAR_1, &VAR_9,
     VAR_5, VAR_8->len / VAR_0) < 0)
  goto nla_put_failure;
 return 0;

nla_put_failure:
 return -1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nft_immediate_expr {int dlen; int dreg; int data; } ;
struct nft_expr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*,int ,int *,int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ) ;
 struct nft_immediate_expr* FUNC_3 (struct nft_expr const*) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_2, const struct nft_expr *VAR_3)
{
 const struct nft_immediate_expr *VAR_4 = FUNC_3(VAR_3);

 if (FUNC_2(VAR_2, VAR_1, VAR_4->dreg))
  goto nla_put_failure;

 return FUNC_0(VAR_2, VAR_0, &VAR_4->data,
        FUNC_1(VAR_4->dreg), VAR_4->dlen);

nla_put_failure:
 return -1;
}

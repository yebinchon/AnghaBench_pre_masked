
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nft_payload {int len; int offset; int base; int dreg; } ;
struct nft_expr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ) ;
 struct nft_payload* FUNC_2 (struct nft_expr const*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_4, const struct nft_expr *VAR_5)
{
 const struct nft_payload *VAR_6 = FUNC_2(VAR_5);

 if (FUNC_1(VAR_4, VAR_1, VAR_6->dreg) ||
     FUNC_3(VAR_4, VAR_0, FUNC_0(VAR_6->base)) ||
     FUNC_3(VAR_4, VAR_3, FUNC_0(VAR_6->offset)) ||
     FUNC_3(VAR_4, VAR_2, FUNC_0(VAR_6->len)))
  goto nla_put_failure;
 return 0;

nla_put_failure:
 return -1;
}

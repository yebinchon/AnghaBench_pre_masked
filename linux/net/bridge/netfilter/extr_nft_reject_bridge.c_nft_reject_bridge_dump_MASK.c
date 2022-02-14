
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nft_reject {int type; int icmp_code; } ;
struct nft_expr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int) ;
 struct nft_reject* FUNC_1 (struct nft_expr const*) ;
 scalar_t__ FUNC_2 (struct sk_buff*,int ,int ) ;
 int FUNC_3 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct sk_buff *VAR_2,
      const struct nft_expr *VAR_3)
{
 const struct nft_reject *VAR_4 = FUNC_1(VAR_3);

 if (FUNC_2(VAR_2, VAR_1, FUNC_0(VAR_4->type)))
  goto nla_put_failure;

 switch (VAR_4->type) {
 case 128:
 case 129:
  if (FUNC_3(VAR_2, VAR_0, VAR_4->icmp_code))
   goto nla_put_failure;
  break;
 default:
  break;
 }

 return 0;

nla_put_failure:
 return -1;
}

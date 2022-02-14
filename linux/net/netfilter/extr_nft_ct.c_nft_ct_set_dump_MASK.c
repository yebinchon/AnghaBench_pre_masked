
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nft_expr {int dummy; } ;
struct nft_ct {int key; int dir; int sreg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int ) ;
 struct nft_ct* FUNC_2 (struct nft_expr const*) ;
 scalar_t__ FUNC_3 (struct sk_buff*,int ,int ) ;
 int FUNC_4 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct sk_buff *VAR_4, const struct nft_expr *VAR_5)
{
 const struct nft_ct *VAR_6 = FUNC_2(VAR_5);

 if (FUNC_1(VAR_4, VAR_3, VAR_6->sreg))
  goto nla_put_failure;
 if (FUNC_3(VAR_4, VAR_2, FUNC_0(VAR_6->key)))
  goto nla_put_failure;

 switch (VAR_6->key) {
 case 128:
  if (VAR_6->dir < VAR_0 &&
      FUNC_4(VAR_4, VAR_1, VAR_6->dir))
   goto nla_put_failure;
  break;
 default:
  break;
 }

 return 0;

nla_put_failure:
 return -1;
}

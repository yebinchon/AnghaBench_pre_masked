
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nft_expr {int dummy; } ;
struct nft_dup_netdev {int sreg_dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int ,int ) ;
 struct nft_dup_netdev* FUNC_1 (struct nft_expr const*) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_1, const struct nft_expr *VAR_2)
{
 struct nft_dup_netdev *VAR_3 = FUNC_1(VAR_2);

 if (FUNC_0(VAR_1, VAR_0, VAR_3->sreg_dev))
  goto nla_put_failure;

 return 0;

nla_put_failure:
 return -1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nft_expr {int dummy; } ;
struct nft_dup_ipv4 {scalar_t__ sreg_dev; scalar_t__ sreg_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int ,scalar_t__) ;
 struct nft_dup_ipv4* FUNC_1 (struct nft_expr const*) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_2, const struct nft_expr *VAR_3)
{
 struct nft_dup_ipv4 *VAR_4 = FUNC_1(VAR_3);

 if (FUNC_0(VAR_2, VAR_0, VAR_4->sreg_addr))
  goto nla_put_failure;
 if (VAR_4->sreg_dev &&
     FUNC_0(VAR_2, VAR_1, VAR_4->sreg_dev))
  goto nla_put_failure;

 return 0;

nla_put_failure:
 return -1;
}

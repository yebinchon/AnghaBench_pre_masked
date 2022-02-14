
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nft_limit_pkts {int limit; } ;
struct nft_expr {int dummy; } ;


 int VAR_0 ;
 struct nft_limit_pkts* FUNC_0 (struct nft_expr const*) ;
 int FUNC_1 (struct sk_buff*,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_1, const struct nft_expr *VAR_2)
{
 const struct nft_limit_pkts *VAR_3 = FUNC_0(VAR_2);

 return FUNC_1(VAR_1, &VAR_3->limit, VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nft_exthdr {int sreg; } ;
struct nft_expr {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*,int ,int ) ;
 struct nft_exthdr* FUNC_1 (struct nft_expr const*) ;
 int FUNC_2 (struct sk_buff*,struct nft_exthdr const*) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_1, const struct nft_expr *VAR_2)
{
 const struct nft_exthdr *VAR_3 = FUNC_1(VAR_2);

 if (FUNC_0(VAR_1, VAR_0, VAR_3->sreg))
  return -1;

 return FUNC_2(VAR_1, VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nft_regs {int* data; } ;
struct nft_pktinfo {int skb; } ;
struct nft_expr {int dummy; } ;
struct nft_dup_ipv6 {size_t sreg_addr; int sreg_dev; } ;
struct in6_addr {int dummy; } ;


 int FUNC_0 (int ,int ,int ,struct in6_addr*,int) ;
 struct nft_dup_ipv6* FUNC_1 (struct nft_expr const*) ;
 int FUNC_2 (struct nft_pktinfo const*) ;
 int FUNC_3 (struct nft_pktinfo const*) ;

__attribute__((used)) static void FUNC_4(const struct nft_expr *VAR_0,
         struct nft_regs *VAR_1,
         const struct nft_pktinfo *VAR_2)
{
 struct nft_dup_ipv6 *VAR_3 = FUNC_1(VAR_0);
 struct in6_addr *VAR_4 = (struct in6_addr *)&VAR_1->data[VAR_3->sreg_addr];
 int VAR_5 = VAR_3->sreg_dev ? VAR_1->data[VAR_3->sreg_dev] : -1;

 FUNC_0(FUNC_3(VAR_2), VAR_2->skb, FUNC_2(VAR_2), VAR_4, VAR_5);
}

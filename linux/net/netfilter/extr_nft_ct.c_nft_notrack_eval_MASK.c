
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nft_regs {int dummy; } ;
struct nft_pktinfo {struct sk_buff* skb; } ;
struct nft_expr {int dummy; } ;
struct nf_conn {int dummy; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;


 int VAR_0 ;
 struct nf_conn* FUNC_0 (struct sk_buff*,int*) ;
 int FUNC_1 (struct sk_buff*,struct nf_conn*,int) ;

__attribute__((used)) static void FUNC_2(const struct nft_expr *VAR_1,
        struct nft_regs *VAR_2,
        const struct nft_pktinfo *VAR_3)
{
 struct sk_buff *VAR_4 = VAR_3->skb;
 enum ip_conntrack_info VAR_5;
 struct nf_conn *VAR_6;

 VAR_6 = FUNC_0(VAR_3->skb, &VAR_5);

 if (VAR_6 || VAR_5 == VAR_0)
  return;

 FUNC_1(VAR_4, VAR_6, VAR_0);
}

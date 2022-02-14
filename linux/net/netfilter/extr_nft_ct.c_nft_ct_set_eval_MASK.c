
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct sk_buff {int dummy; } ;
struct nft_regs {void** data; } ;
struct nft_pktinfo {struct sk_buff* skb; } ;
struct nft_expr {int dummy; } ;
struct nft_ct {size_t sreg; int key; } ;
struct nf_conntrack_ecache {void* ctmask; } ;
struct nf_conn {void* mark; void* secmark; } ;
typedef enum ip_conntrack_info { ____Placeholder_ip_conntrack_info } ip_conntrack_info ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int VAR_3 ;
 int FUNC_0 (struct nf_conn*,void**,void**,int) ;
 int FUNC_1 (int ,struct nf_conn*) ;
 int FUNC_2 (struct nf_conn*,void*,int ,int ) ;
 struct nf_conntrack_ecache* FUNC_3 (struct nf_conn*) ;
 struct nf_conn* FUNC_4 (struct sk_buff*,int*) ;
 int FUNC_5 (struct nf_conn*) ;
 scalar_t__ FUNC_6 (struct nf_conn*) ;
 struct nft_ct* FUNC_7 (struct nft_expr const*) ;

__attribute__((used)) static void FUNC_8(const struct nft_expr *VAR_4,
       struct nft_regs *VAR_5,
       const struct nft_pktinfo *VAR_6)
{
 const struct nft_ct *VAR_7 = FUNC_7(VAR_4);
 struct sk_buff *VAR_8 = VAR_6->skb;



 enum ip_conntrack_info VAR_9;
 struct nf_conn *VAR_10;

 VAR_10 = FUNC_4(VAR_8, &VAR_9);
 if (VAR_10 == ((void*)0) || FUNC_6(VAR_10))
  return;

 switch (VAR_7->key) {
 default:
  break;
 }
}

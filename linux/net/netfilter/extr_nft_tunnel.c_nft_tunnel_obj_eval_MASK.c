
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nft_tunnel_obj {scalar_t__ md; } ;
struct nft_regs {int dummy; } ;
struct nft_pktinfo {struct sk_buff* skb; } ;
struct nft_object {int dummy; } ;
struct dst_entry {int dummy; } ;


 int FUNC_0 (struct dst_entry*) ;
 struct nft_tunnel_obj* FUNC_1 (struct nft_object*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,struct dst_entry*) ;

__attribute__((used)) static inline void FUNC_4(struct nft_object *VAR_0,
           struct nft_regs *VAR_1,
           const struct nft_pktinfo *VAR_2)
{
 struct nft_tunnel_obj *VAR_3 = FUNC_1(VAR_0);
 struct sk_buff *VAR_4 = VAR_2->skb;

 FUNC_2(VAR_4);
 FUNC_0((struct dst_entry *) VAR_3->md);
 FUNC_3(VAR_4, (struct dst_entry *) VAR_3->md);
}

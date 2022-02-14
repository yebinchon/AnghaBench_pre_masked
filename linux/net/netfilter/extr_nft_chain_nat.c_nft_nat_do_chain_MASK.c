
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nft_pktinfo {int dummy; } ;
struct nf_hook_state {int pf; } ;




 unsigned int FUNC_0 (struct nft_pktinfo*,void*) ;
 int FUNC_1 (struct nft_pktinfo*,struct sk_buff*,struct nf_hook_state const*) ;
 int FUNC_2 (struct nft_pktinfo*,struct sk_buff*) ;
 int FUNC_3 (struct nft_pktinfo*,struct sk_buff*) ;

__attribute__((used)) static unsigned int FUNC_4(void *VAR_0, struct sk_buff *VAR_1,
         const struct nf_hook_state *VAR_2)
{
 struct nft_pktinfo VAR_3;

 FUNC_1(&VAR_3, VAR_1, VAR_2);

 switch (VAR_2->pf) {
 default:
  break;
 }

 return FUNC_0(&VAR_3, VAR_0);
}

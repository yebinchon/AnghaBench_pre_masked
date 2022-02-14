
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ len; } ;
struct iphdr {int frag_off; } ;
struct ip_frag_state {int DF; unsigned int hlen; unsigned int ll_rs; unsigned int mtu; unsigned int ptr; int offset; int not_last_frag; scalar_t__ left; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 struct iphdr* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int) ;

void FUNC_3(struct sk_buff *VAR_2, unsigned int VAR_3,
    unsigned int VAR_4, unsigned int VAR_5, bool VAR_6,
    struct ip_frag_state *VAR_7)
{
 struct iphdr *VAR_8 = FUNC_1(VAR_2);

 VAR_7->DF = VAR_6;
 VAR_7->hlen = VAR_3;
 VAR_7->ll_rs = VAR_4;
 VAR_7->mtu = VAR_5;

 VAR_7->left = VAR_2->len - VAR_3;
 VAR_7->ptr = VAR_3;

 VAR_7->offset = (FUNC_2(VAR_8->frag_off) & VAR_1) << 3;
 VAR_7->not_last_frag = VAR_8->frag_off & FUNC_0(VAR_0);
}

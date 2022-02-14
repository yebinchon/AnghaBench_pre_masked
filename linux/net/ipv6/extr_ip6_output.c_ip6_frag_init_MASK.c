
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {scalar_t__ len; } ;
struct ip6_frag_state {unsigned int hlen; unsigned int mtu; unsigned int ptr; int hroom; unsigned short troom; scalar_t__ offset; scalar_t__ left; int frag_id; int nexthdr; int * prevhdr; } ;
typedef int __be32 ;



void FUNC_0(struct sk_buff *VAR_0, unsigned int VAR_1, unsigned int VAR_2,
     unsigned short VAR_3, int VAR_4, u8 *VAR_5,
     u8 VAR_6, __be32 VAR_7, struct ip6_frag_state *VAR_8)
{
 VAR_8->prevhdr = VAR_5;
 VAR_8->nexthdr = VAR_6;
 VAR_8->frag_id = VAR_7;

 VAR_8->hlen = VAR_1;
 VAR_8->mtu = VAR_2;

 VAR_8->left = VAR_0->len - VAR_1;
 VAR_8->ptr = VAR_1;

 VAR_8->hroom = VAR_4;
 VAR_8->troom = VAR_3;

 VAR_8->offset = 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tcf_pkt_info {unsigned char* ptr; int nexthdr; } ;
struct tcf_ematch {scalar_t__ data; } ;
struct tc_u32_key {int offmask; int val; int mask; int off; } ;
struct sk_buff {int dummy; } ;
typedef int __be32 ;


 unsigned char* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,unsigned char const*,int) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_0, struct tcf_ematch *VAR_1,
   struct tcf_pkt_info *VAR_2)
{
 struct tc_u32_key *VAR_3 = (struct tc_u32_key *) VAR_1->data;
 const unsigned char *VAR_4 = FUNC_0(VAR_0);

 if (VAR_2) {
  if (VAR_2->ptr)
   VAR_4 = VAR_2->ptr;
  VAR_4 += (VAR_2->nexthdr & VAR_3->offmask);
 }

 VAR_4 += VAR_3->off;

 if (!FUNC_1(VAR_0, VAR_4, sizeof(u32)))
  return 0;

 return !(((*(__be32 *) VAR_4) ^ VAR_3->val) & VAR_3->mask);
}

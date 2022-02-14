
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct skb_shared_info {unsigned int gso_type; scalar_t__ gso_segs; } ;
struct sk_buff {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct skb_shared_info*,int) ;
 struct skb_shared_info* FUNC_1 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_1, unsigned int VAR_2,
      int VAR_3)
{
 struct skb_shared_info *VAR_4 = FUNC_1(VAR_1);

 VAR_2 |= VAR_0;
 VAR_4->gso_type |= VAR_2;
 FUNC_0(VAR_4, VAR_3);
 VAR_4->gso_segs = 0;
 return 0;
}

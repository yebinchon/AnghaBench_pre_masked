
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int ip_summed; int len; int csum; } ;
struct iphdr {int daddr; int saddr; } ;
typedef int __sum16 ;




 int FUNC_0 (struct sk_buff*,unsigned int) ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;
 struct iphdr* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*,unsigned int,unsigned int,int ) ;

__attribute__((used)) static __sum16 FUNC_4(struct sk_buff *VAR_0, unsigned int VAR_1,
          unsigned int VAR_2, unsigned int VAR_3,
          u8 VAR_4)
{
 const struct iphdr *VAR_5 = FUNC_2(VAR_0);
 __sum16 VAR_6 = 0;

 switch (VAR_0->ip_summed) {
 case 129:
  if (VAR_3 == VAR_0->len - VAR_2)
   return FUNC_3(VAR_0, VAR_1, VAR_2, VAR_4);

 case 128:
  VAR_0->csum = FUNC_1(VAR_5->saddr, VAR_5->daddr, VAR_4,
            VAR_0->len - VAR_2, 0);
  VAR_0->ip_summed = 128;
  return FUNC_0(VAR_0, VAR_2 + VAR_3);
 }
 return VAR_6;
}

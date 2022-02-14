
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct iphdr {int protocol; } ;
typedef int __be32 ;




 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,unsigned int,int ,int ) ;
 int FUNC_1 (struct sk_buff*,unsigned int,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_1, struct iphdr *VAR_2,
      unsigned int VAR_3, __be32 VAR_4,
      __be32 VAR_5)
{
 switch (VAR_2->protocol) {
 case 129:
  if (FUNC_0(VAR_1, VAR_3, VAR_4, VAR_5) < 0)
   return VAR_0;
  break;
 case 128:
  if (FUNC_1(VAR_1, VAR_3, VAR_4, VAR_5) < 0)
   return VAR_0;
  break;
 }

 return 0;
}

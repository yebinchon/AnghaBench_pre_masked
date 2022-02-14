
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
typedef int __be16 ;




 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,unsigned int,int ,int ) ;
 int FUNC_1 (struct sk_buff*,unsigned int,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_1, unsigned int VAR_2,
       u8 VAR_3, __be16 VAR_4, __be16 VAR_5)
{
 switch (VAR_3) {
 case 129:
  if (FUNC_0(VAR_1, VAR_2, VAR_4, VAR_5) < 0)
   return VAR_0;
  break;
 case 128:
  if (FUNC_1(VAR_1, VAR_2, VAR_4, VAR_5) < 0)
   return VAR_0;
  break;
 }

 return 0;
}

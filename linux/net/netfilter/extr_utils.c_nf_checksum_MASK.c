
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
typedef int __sum16 ;




 int FUNC_0 (struct sk_buff*,unsigned int,unsigned int,int ) ;
 int FUNC_1 (struct sk_buff*,unsigned int,unsigned int,int ) ;

__sum16 FUNC_2(struct sk_buff *VAR_0, unsigned int VAR_1,
      unsigned int VAR_2, u8 VAR_3,
      unsigned short VAR_4)
{
 __sum16 VAR_5 = 0;

 switch (VAR_4) {
 case 129:
  VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
  break;
 case 128:
  VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
  break;
 }

 return VAR_5;
}

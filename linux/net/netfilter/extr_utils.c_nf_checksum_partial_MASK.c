
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
typedef int __sum16 ;




 int FUNC_0 (struct sk_buff*,unsigned int,unsigned int,unsigned int,int ) ;
 int FUNC_1 (struct sk_buff*,unsigned int,unsigned int,unsigned int,int ) ;

__sum16 FUNC_2(struct sk_buff *VAR_0, unsigned int VAR_1,
       unsigned int VAR_2, unsigned int VAR_3,
       u8 VAR_4, unsigned short VAR_5)
{
 __sum16 VAR_6 = 0;

 switch (VAR_5) {
 case 129:
  VAR_6 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3,
           VAR_4);
  break;
 case 128:
  VAR_6 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3,
            VAR_4);
  break;
 }

 return VAR_6;
}

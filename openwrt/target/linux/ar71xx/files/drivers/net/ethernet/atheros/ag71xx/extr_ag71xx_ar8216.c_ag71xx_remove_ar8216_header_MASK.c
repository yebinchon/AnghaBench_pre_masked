
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int* data; } ;
struct ag71xx {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int FUNC_0 (struct sk_buff*,int ) ;

int FUNC_1(struct ag71xx *VAR_3, struct sk_buff *VAR_4,
    int VAR_5)
{
 u8 VAR_6;

 VAR_6 = VAR_4->data[1] & VAR_1;
 switch (VAR_6) {
 case 128:
  break;

 default:
  return -VAR_2;
 }

 FUNC_0(VAR_4, VAR_0);
 return 0;
}

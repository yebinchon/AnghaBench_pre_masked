
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;


 struct sk_buff* FUNC_0 (struct sk_buff_head*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct net*,struct sk_buff*,int ,int ) ;

int FUNC_5(struct net *VAR_0, struct sk_buff_head *VAR_1)
{
 struct sk_buff *VAR_2;
 u32 VAR_3, VAR_4;

 while ((VAR_2 = FUNC_0(VAR_1))) {
  VAR_3 = FUNC_3(FUNC_1(VAR_2));
  VAR_4 = FUNC_2(FUNC_1(VAR_2));
  FUNC_4(VAR_0, VAR_2, VAR_4, VAR_3);
 }
 return 0;
}

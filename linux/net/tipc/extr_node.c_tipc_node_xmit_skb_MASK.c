
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;


 int FUNC_0 (struct sk_buff_head*) ;
 int FUNC_1 (struct sk_buff_head*,struct sk_buff*) ;
 int FUNC_2 (struct net*,struct sk_buff_head*,int ,int ) ;

int FUNC_3(struct net *VAR_0, struct sk_buff *VAR_1, u32 VAR_2,
         u32 VAR_3)
{
 struct sk_buff_head VAR_4;

 FUNC_0(&VAR_4);
 FUNC_1(&VAR_4, VAR_1);
 FUNC_2(VAR_0, &VAR_4, VAR_2, VAR_3);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct tipc_link {int dummy; } ;
struct sk_buff_head {int dummy; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff_head*) ;
 int FUNC_1 (struct sk_buff_head*) ;
 struct tipc_link* FUNC_2 (struct net*) ;
 int FUNC_3 (struct net*) ;
 int FUNC_4 (struct net*) ;
 int FUNC_5 (struct net*,struct sk_buff_head*) ;
 scalar_t__ FUNC_6 (struct tipc_link*) ;
 int FUNC_7 (struct tipc_link*,struct sk_buff_head*,struct sk_buff_head*) ;

__attribute__((used)) static int FUNC_8(struct net *VAR_1, struct sk_buff_head *VAR_2,
      u16 *VAR_3)
{
 struct tipc_link *VAR_4 = FUNC_2(VAR_1);
 struct sk_buff_head VAR_5;
 int VAR_6 = 0;

 FUNC_0(&VAR_5);
 FUNC_3(VAR_1);
 if (FUNC_6(VAR_4))
  VAR_6 = FUNC_7(VAR_4, VAR_2, &VAR_5);
 FUNC_4(VAR_1);
 FUNC_5(VAR_1, &VAR_5);
 FUNC_1(VAR_2);
 if (VAR_6 == -VAR_0) {
  *VAR_3 = 1;
  VAR_6 = 0;
 }
 return VAR_6;
}

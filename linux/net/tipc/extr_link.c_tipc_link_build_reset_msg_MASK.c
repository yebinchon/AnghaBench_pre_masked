
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_link {scalar_t__ state; } ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int) ;
 struct sk_buff* FUNC_2 (struct sk_buff_head*) ;
 int FUNC_3 (struct tipc_link*,int,int ,int ,int ,int ,int ,struct sk_buff_head*) ;

void FUNC_4(struct tipc_link *VAR_4, struct sk_buff_head *VAR_5)
{
 int VAR_6 = VAR_3;
 struct sk_buff *VAR_7;

 if (VAR_4->state == VAR_1)
  VAR_6 = VAR_0;

 FUNC_3(VAR_4, VAR_6, 0, 0, 0, 0, 0, VAR_5);


 VAR_7 = FUNC_2(VAR_5);
 if (VAR_7 && (VAR_4->state == VAR_2))
  FUNC_1(FUNC_0(VAR_7), 1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_link {int priority; } ;
struct sk_buff_head {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct tipc_link*,int ,int ,int ,int ,int ,int ,struct sk_buff_head*) ;

void FUNC_1(struct tipc_link *VAR_1, u32 VAR_2,
   struct sk_buff_head *VAR_3)
{
 VAR_1->priority = VAR_2;
 FUNC_0(VAR_1, VAR_0, 0, 0, 0, 0, VAR_2, VAR_3);
}

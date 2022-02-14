
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff_head {int dummy; } ;
struct tipc_link {int drop_point; int * failover_reasm_skb; struct sk_buff_head failover_deferdq; } ;


 int FUNC_0 (struct sk_buff_head*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct sk_buff_head*) ;
 int FUNC_3 (struct sk_buff_head*) ;
 int FUNC_4 (struct tipc_link*,struct sk_buff_head*) ;
 scalar_t__ FUNC_5 (int) ;

void FUNC_6(struct tipc_link *VAR_0, struct tipc_link *VAR_1,
    struct sk_buff_head *VAR_2)
{
 struct sk_buff_head *VAR_3 = &VAR_1->failover_deferdq;

 FUNC_4(VAR_1, VAR_2);







 VAR_1->drop_point = 1;
 VAR_1->failover_reasm_skb = ((void*)0);


 if (FUNC_5(!FUNC_2(VAR_3))) {
  FUNC_1("Link failover deferdq not empty: %d!\n",
   FUNC_3(VAR_3));
  FUNC_0(VAR_3);
 }
}

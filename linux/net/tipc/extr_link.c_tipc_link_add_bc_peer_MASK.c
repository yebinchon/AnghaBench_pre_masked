
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_link {int state; scalar_t__ snd_nxt; scalar_t__ acked; int ackers; struct tipc_link* bc_rcvlink; } ;
struct sk_buff_head {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct tipc_link*,struct sk_buff_head*) ;

void FUNC_1(struct tipc_link *VAR_1,
      struct tipc_link *VAR_2,
      struct sk_buff_head *VAR_3)
{
 struct tipc_link *VAR_4 = VAR_2->bc_rcvlink;

 VAR_1->ackers++;
 VAR_4->acked = VAR_1->snd_nxt - 1;
 VAR_1->state = VAR_0;
 FUNC_0(VAR_2, VAR_3);
}

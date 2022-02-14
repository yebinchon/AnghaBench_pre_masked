
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct tipc_link {int bc_peer_is_up; void* state; int ackers; scalar_t__ snd_nxt; } ;
struct sk_buff_head {int dummy; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff_head*) ;
 int FUNC_1 (struct tipc_link*,scalar_t__,struct sk_buff_head*) ;
 int FUNC_2 (struct tipc_link*) ;
 int FUNC_3 (struct tipc_link*,int ,char*) ;

void FUNC_4(struct tipc_link *VAR_3,
         struct tipc_link *VAR_4,
         struct sk_buff_head *VAR_5)
{
 u16 VAR_6 = VAR_3->snd_nxt - 1;

 VAR_3->ackers--;
 VAR_4->bc_peer_is_up = 1;
 VAR_4->state = VAR_0;
 FUNC_1(VAR_4, VAR_6, VAR_5);
 FUNC_3(VAR_4, VAR_2, "bclink removed!");
 FUNC_2(VAR_4);
 VAR_4->state = VAR_1;
 if (!VAR_3->ackers) {
  FUNC_3(VAR_3, VAR_2, "zero ackers!");
  FUNC_2(VAR_3);
  VAR_3->state = VAR_1;
  FUNC_0(VAR_5);
 }
}

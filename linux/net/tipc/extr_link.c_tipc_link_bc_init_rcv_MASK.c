
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u16 ;
struct tipc_msg {int dummy; } ;
struct tipc_link {int peer_caps; void* rcv_nxt; int state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct tipc_link*) ;
 void* FUNC_1 (struct tipc_msg*) ;
 scalar_t__ FUNC_2 (struct tipc_msg*) ;
 int FUNC_3 (struct tipc_msg*) ;
 scalar_t__ FUNC_4 (struct tipc_msg*) ;

void FUNC_5(struct tipc_link *VAR_5, struct tipc_msg *VAR_6)
{
 int VAR_7 = FUNC_3(VAR_6);
 u16 VAR_8 = FUNC_1(VAR_6);

 if (FUNC_0(VAR_5))
  return;

 if (FUNC_4(VAR_6) == VAR_1) {
  VAR_5->rcv_nxt = VAR_8;
  VAR_5->state = VAR_2;
  return;
 }

 if (VAR_5->peer_caps & VAR_4)
  return;

 if (FUNC_2(VAR_6))
  return;


 if ((VAR_7 == VAR_3) || (VAR_7 == VAR_0))
  VAR_5->rcv_nxt = VAR_8;
}

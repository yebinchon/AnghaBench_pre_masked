
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct tipc_msg {int dummy; } ;
struct tipc_link {int peer_caps; int rcv_nxt_state; int in_session; int peer_session; } ;



 scalar_t__ VAR_0 ;


 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct tipc_link*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct tipc_msg*) ;
 int FUNC_4 (struct tipc_msg*) ;
 int FUNC_5 (struct tipc_msg*) ;
 int FUNC_6 (struct tipc_msg*) ;
 scalar_t__ FUNC_7 (struct tipc_msg*) ;

bool FUNC_8(struct tipc_link *VAR_2, struct tipc_msg *VAR_3)
{
 u16 VAR_4 = VAR_2->peer_session;
 u16 VAR_5 = FUNC_5(VAR_3);
 int VAR_6 = FUNC_6(VAR_3);

 if (FUNC_7(VAR_3) != VAR_0)
  return 1;

 switch (VAR_6) {
 case 129:
  if (!VAR_2->in_session)
   return 1;

  return FUNC_2(VAR_5, VAR_4);
 case 130:
  if (!VAR_2->in_session)
   return 1;

  return !FUNC_0(VAR_5, VAR_4);
 case 128:

  if (!VAR_2->in_session)
   return 0;
  if (VAR_5 != VAR_4)
   return 0;

  if (!FUNC_1(VAR_2) && FUNC_3(VAR_3))
   return 0;
  if (!(VAR_2->peer_caps & VAR_1))
   return 1;

  return !FUNC_0(FUNC_4(VAR_3), VAR_2->rcv_nxt_state);
 default:
  return 0;
 }
}

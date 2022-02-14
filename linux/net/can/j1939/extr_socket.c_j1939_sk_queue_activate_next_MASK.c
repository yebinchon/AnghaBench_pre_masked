
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct j1939_sock {int sk_session_queue_lock; } ;
struct j1939_session {int sk; } ;


 struct j1939_sock* FUNC_0 (int ) ;
 int FUNC_1 (struct j1939_session*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct j1939_session *VAR_0)
{
 struct j1939_sock *VAR_1;

 if (!VAR_0->sk)
  return;

 VAR_1 = FUNC_0(VAR_0->sk);

 FUNC_2(&VAR_1->sk_session_queue_lock);
 FUNC_1(VAR_0);
 FUNC_3(&VAR_1->sk_session_queue_lock);
}

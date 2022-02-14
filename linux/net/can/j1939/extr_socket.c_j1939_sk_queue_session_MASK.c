
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct j1939_sock {int sk; int sk_session_queue_lock; int sk_session_queue; } ;
struct j1939_session {int sk_session_queue_entry; int sk; } ;


 int FUNC_0 (struct j1939_session*) ;
 struct j1939_sock* FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static bool FUNC_7(struct j1939_session *VAR_0)
{
 struct j1939_sock *VAR_1 = FUNC_1(VAR_0->sk);
 bool VAR_2;

 FUNC_5(&VAR_1->sk_session_queue_lock);
 VAR_2 = FUNC_4(&VAR_1->sk_session_queue);
 FUNC_0(VAR_0);
 FUNC_3(&VAR_0->sk_session_queue_entry, &VAR_1->sk_session_queue);
 FUNC_6(&VAR_1->sk_session_queue_lock);
 FUNC_2(&VAR_1->sk);

 return VAR_2;
}

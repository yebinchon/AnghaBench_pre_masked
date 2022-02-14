
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {struct l2tp_session* sk_user_data; int sk_write_queue; int sk_receive_queue; } ;
struct l2tp_session {scalar_t__ magic; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct l2tp_session*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_1)
{
 struct l2tp_session *VAR_2 = VAR_1->sk_user_data;

 FUNC_2(&VAR_1->sk_receive_queue);
 FUNC_2(&VAR_1->sk_write_queue);

 if (VAR_2) {
  VAR_1->sk_user_data = ((void*)0);
  FUNC_0(VAR_2->magic != VAR_0);
  FUNC_1(VAR_2);
 }
}

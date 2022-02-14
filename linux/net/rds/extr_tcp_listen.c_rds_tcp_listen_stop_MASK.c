
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct work_struct {int dummy; } ;
struct socket {struct sock* sk; } ;
struct sock {int sk_callback_lock; int * sk_user_data; int * sk_data_ready; } ;


 int FUNC_0 (struct work_struct*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct sock*) ;
 int VAR_0 ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct socket*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct socket *VAR_1, struct work_struct *VAR_2)
{
 struct sock *VAR_3;

 if (!VAR_1)
  return;

 VAR_3 = VAR_1->sk;


 FUNC_2(VAR_3);
 FUNC_5(&VAR_3->sk_callback_lock);
 if (VAR_3->sk_user_data) {
  VAR_3->sk_data_ready = VAR_3->sk_user_data;
  VAR_3->sk_user_data = ((void*)0);
 }
 FUNC_6(&VAR_3->sk_callback_lock);
 FUNC_3(VAR_3);


 FUNC_1(VAR_0);
 FUNC_0(VAR_2);
 FUNC_4(VAR_1);
}

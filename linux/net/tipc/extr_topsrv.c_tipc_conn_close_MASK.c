
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tipc_conn {TYPE_1__* sock; int flags; } ;
struct sock {int sk_callback_lock; int * sk_user_data; } ;
struct TYPE_2__ {struct sock* sk; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tipc_conn*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct tipc_conn*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct tipc_conn *VAR_2)
{
 struct sock *VAR_3 = VAR_2->sock->sk;
 bool VAR_4 = 0;

 FUNC_4(&VAR_3->sk_callback_lock);
 VAR_4 = FUNC_2(VAR_0, &VAR_2->flags);

 if (VAR_4) {
  VAR_3->sk_user_data = ((void*)0);
  FUNC_3(VAR_2, ((void*)0));
 }
 FUNC_5(&VAR_3->sk_callback_lock);


 if (!VAR_4)
  return;


 FUNC_1(VAR_2->sock, VAR_1);

 FUNC_0(VAR_2);
}

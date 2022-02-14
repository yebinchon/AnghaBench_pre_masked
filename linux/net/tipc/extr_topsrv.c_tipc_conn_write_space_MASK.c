
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tipc_conn {int swork; TYPE_1__* server; } ;
struct sock {int sk_callback_lock; struct tipc_conn* sk_user_data; } ;
struct TYPE_2__ {int send_wq; } ;


 int FUNC_0 (struct tipc_conn*) ;
 int FUNC_1 (struct tipc_conn*) ;
 scalar_t__ FUNC_2 (struct tipc_conn*) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct sock *VAR_0)
{
 struct tipc_conn *VAR_1;

 FUNC_4(&VAR_0->sk_callback_lock);
 VAR_1 = VAR_0->sk_user_data;
 if (FUNC_2(VAR_1)) {
  FUNC_0(VAR_1);
  if (!FUNC_3(VAR_1->server->send_wq, &VAR_1->swork))
   FUNC_1(VAR_1);
 }
 FUNC_5(&VAR_0->sk_callback_lock);
}

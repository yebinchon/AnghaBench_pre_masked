
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_topsrv {int awork; int rcv_wq; scalar_t__ listener; } ;
struct sock {int sk_callback_lock; struct tipc_topsrv* sk_user_data; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_0)
{
 struct tipc_topsrv *VAR_1;

 FUNC_1(&VAR_0->sk_callback_lock);
 VAR_1 = VAR_0->sk_user_data;
 if (VAR_1->listener)
  FUNC_0(VAR_1->rcv_wq, &VAR_1->awork);
 FUNC_2(&VAR_0->sk_callback_lock);
}

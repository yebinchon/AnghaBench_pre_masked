
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct iucv_sock {struct sock* parent; int accept_q_lock; int accept_q; } ;


 struct iucv_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void FUNC_6(struct sock *VAR_0)
{
 unsigned long VAR_1;
 struct iucv_sock *VAR_2 = FUNC_0(FUNC_0(VAR_0)->parent);

 FUNC_4(&VAR_2->accept_q_lock, VAR_1);
 FUNC_1(&FUNC_0(VAR_0)->accept_q);
 FUNC_5(&VAR_2->accept_q_lock, VAR_1);
 FUNC_2(FUNC_0(VAR_0)->parent);
 FUNC_0(VAR_0)->parent = ((void*)0);
 FUNC_3(VAR_0);
}

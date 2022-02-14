
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsock_sock {int accept_queue; } ;
struct sock {int dummy; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct sock*) ;
 struct vsock_sock* FUNC_2 (struct sock*) ;

void FUNC_3(struct sock *VAR_0, struct sock *VAR_1)
{
 struct vsock_sock *VAR_2;
 struct vsock_sock *VAR_3;

 VAR_2 = FUNC_2(VAR_0);
 VAR_3 = FUNC_2(VAR_1);

 FUNC_1(VAR_1);
 FUNC_1(VAR_0);
 FUNC_0(&VAR_3->accept_queue, &VAR_2->accept_queue);
}

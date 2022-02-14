
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsock_sock {int accept_queue; } ;
struct sock {int dummy; } ;


 int FUNC_0 (int *) ;
 struct vsock_sock* FUNC_1 (struct sock*) ;

__attribute__((used)) static bool FUNC_2(struct sock *VAR_0)
{
 struct vsock_sock *VAR_1 = FUNC_1(VAR_0);
 return FUNC_0(&VAR_1->accept_queue);
}

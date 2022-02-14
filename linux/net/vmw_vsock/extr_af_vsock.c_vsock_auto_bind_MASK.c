
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsock_sock {int local_addr; } ;
struct sockaddr_vm {int dummy; } ;
struct sock {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sock*,struct sockaddr_vm*) ;
 struct sock* FUNC_1 (struct vsock_sock*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct sockaddr_vm*,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct vsock_sock *VAR_2)
{
 struct sock *VAR_3 = FUNC_1(VAR_2);
 struct sockaddr_vm VAR_4;

 if (FUNC_2(&VAR_2->local_addr))
  return 0;
 FUNC_3(&VAR_4, VAR_0, VAR_1);
 return FUNC_0(VAR_3, &VAR_4);
}

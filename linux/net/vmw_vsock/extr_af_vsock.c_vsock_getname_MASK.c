
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_vm {int dummy; } ;
struct vsock_sock {struct sockaddr_vm local_addr; struct sockaddr_vm remote_addr; } ;
struct socket {scalar_t__ state; struct sock* sk; } ;
struct sockaddr {int dummy; } ;
struct sock {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sockaddr*,struct sockaddr_vm*,int) ;
 int FUNC_3 (struct sock*) ;
 struct vsock_sock* FUNC_4 (struct sock*) ;

__attribute__((used)) static int FUNC_5(struct socket *VAR_3,
    struct sockaddr *VAR_4, int VAR_5)
{
 int VAR_6;
 struct sock *VAR_7;
 struct vsock_sock *VAR_8;
 struct sockaddr_vm *VAR_9;

 VAR_7 = VAR_3->sk;
 VAR_8 = FUNC_4(VAR_7);
 VAR_6 = 0;

 FUNC_1(VAR_7);

 if (VAR_5) {
  if (VAR_3->state != VAR_2) {
   VAR_6 = -VAR_1;
   goto out;
  }
  VAR_9 = &VAR_8->remote_addr;
 } else {
  VAR_9 = &VAR_8->local_addr;
 }

 if (!VAR_9) {
  VAR_6 = -VAR_0;
  goto out;
 }






 FUNC_0(sizeof(*VAR_9) > 128);
 FUNC_2(VAR_4, VAR_9, sizeof(*VAR_9));
 VAR_6 = sizeof(*VAR_9);

out:
 FUNC_3(VAR_7);
 return VAR_6;
}

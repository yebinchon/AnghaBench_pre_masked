
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct vsock_sock {int local_addr; } ;
struct sockaddr_vm {scalar_t__ svm_cid; } ;
struct sock {TYPE_1__* sk_socket; } ;
struct TYPE_4__ {scalar_t__ (* get_local_cid ) () ;} ;
struct TYPE_3__ {int type; } ;


 int VAR_0 ;
 int VAR_1 ;


 scalar_t__ VAR_2 ;
 int FUNC_0 (struct vsock_sock*,struct sockaddr_vm*) ;
 int FUNC_1 (struct vsock_sock*,struct sockaddr_vm*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 () ;
 TYPE_2__* VAR_3 ;
 scalar_t__ FUNC_5 (int *) ;
 struct vsock_sock* FUNC_6 (struct sock*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_7(struct sock *VAR_5, struct sockaddr_vm *VAR_6)
{
 struct vsock_sock *VAR_7 = FUNC_6(VAR_5);
 u32 VAR_8;
 int VAR_9;


 if (FUNC_5(&VAR_7->local_addr))
  return -VAR_1;






 VAR_8 = VAR_3->get_local_cid();
 if (VAR_6->svm_cid != VAR_8 && VAR_6->svm_cid != VAR_2)
  return -VAR_0;

 switch (VAR_5->sk_socket->type) {
 case 128:
  FUNC_2(&VAR_4);
  VAR_9 = FUNC_1(VAR_7, VAR_6);
  FUNC_3(&VAR_4);
  break;

 case 129:
  VAR_9 = FUNC_0(VAR_7, VAR_6);
  break;

 default:
  VAR_9 = -VAR_1;
  break;
 }

 return VAR_9;
}

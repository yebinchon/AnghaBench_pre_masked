
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vsock_transport_recv_notify_data {int dummy; } ;
struct vsock_sock {int sk; } ;
struct vmci_transport_recv_notify_data {int dummy; } ;
typedef int ssize_t ;
struct TYPE_4__ {TYPE_1__* notify_ops; } ;
struct TYPE_3__ {int (* recv_post_dequeue ) (int *,size_t,int ,int,struct vmci_transport_recv_notify_data*) ;} ;


 int FUNC_0 (int *,size_t,int ,int,struct vmci_transport_recv_notify_data*) ;
 TYPE_2__* FUNC_1 (struct vsock_sock*) ;

__attribute__((used)) static int FUNC_2(
 struct vsock_sock *VAR_0,
 size_t VAR_1,
 ssize_t VAR_2,
 bool VAR_3,
 struct vsock_transport_recv_notify_data *VAR_4)
{
 return FUNC_1(VAR_0)->notify_ops->recv_post_dequeue(
   &VAR_0->sk, VAR_1, VAR_2, VAR_3,
   (struct vmci_transport_recv_notify_data *)VAR_4);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vsock_transport_send_notify_data {int dummy; } ;
struct vsock_sock {int sk; } ;
struct vmci_transport_send_notify_data {int dummy; } ;
struct TYPE_4__ {TYPE_1__* notify_ops; } ;
struct TYPE_3__ {int (* send_init ) (int *,struct vmci_transport_send_notify_data*) ;} ;


 int FUNC_0 (int *,struct vmci_transport_send_notify_data*) ;
 TYPE_2__* FUNC_1 (struct vsock_sock*) ;

__attribute__((used)) static int FUNC_2(
 struct vsock_sock *VAR_0,
 struct vsock_transport_send_notify_data *VAR_1)
{
 return FUNC_1(VAR_0)->notify_ops->send_init(
   &VAR_0->sk,
   (struct vmci_transport_send_notify_data *)VAR_1);
}

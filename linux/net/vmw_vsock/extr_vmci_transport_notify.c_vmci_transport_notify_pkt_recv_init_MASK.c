
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsock_sock {int dummy; } ;
struct vmci_transport_recv_notify_data {int notify_on_block; scalar_t__ produce_tail; scalar_t__ consume_head; } ;
struct sock {int dummy; } ;


 size_t FUNC_0 (struct vsock_sock*,int ) ;
 struct vsock_sock* FUNC_1 (struct sock*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_2(
   struct sock *VAR_2,
   size_t VAR_3,
   struct vmci_transport_recv_notify_data *VAR_4)
{
 struct vsock_sock *VAR_5 = FUNC_1(VAR_2);
 return 0;
}

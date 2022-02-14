
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vsock_sock {int dummy; } ;
struct vmci_transport_recv_notify_data {scalar_t__ consume_head; } ;
struct sock {int dummy; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_2__ {scalar_t__ consume_size; } ;


 int FUNC_0 (struct vsock_sock*,int ) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (struct vsock_sock*) ;
 int FUNC_2 (struct sock*) ;
 struct vsock_sock* FUNC_3 (struct sock*) ;

__attribute__((used)) static int
FUNC_4(
    struct sock *VAR_1,
    size_t VAR_2,
    ssize_t VAR_3,
    bool VAR_4,
    struct vmci_transport_recv_notify_data *VAR_5)
{
 struct vsock_sock *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_3(VAR_1);
 VAR_7 = 0;

 if (VAR_4) {
  VAR_7 = FUNC_2(VAR_1);
  if (VAR_7 < 0)
   return VAR_7;

 }
 return VAR_7;
}

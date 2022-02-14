
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vsock_sock {int sent_request; int ignore_connecting_rst; } ;
struct vmci_transport_packet {int dummy; } ;
struct sock {int dummy; } ;
struct TYPE_2__ {int queue_pair_size; } ;


 TYPE_1__* FUNC_0 (struct vsock_sock*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct sock*,int ) ;
 struct vsock_sock* FUNC_3 (struct sock*) ;

__attribute__((used)) static int
FUNC_4(struct sock *VAR_0,
           struct vmci_transport_packet *VAR_1)
{
 int VAR_2 = 0;
 struct vsock_sock *VAR_3 = FUNC_3(VAR_0);

 if (VAR_3->sent_request) {
  VAR_3->sent_request = 0;
  VAR_3->ignore_connecting_rst = 1;

  VAR_2 = FUNC_2(
   VAR_0, FUNC_0(VAR_3)->queue_pair_size);
  if (VAR_2 < 0)
   VAR_2 = FUNC_1(VAR_2);
  else
   VAR_2 = 0;

 }

 return VAR_2;
}

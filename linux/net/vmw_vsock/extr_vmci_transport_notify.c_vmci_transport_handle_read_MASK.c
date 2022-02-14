
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vsock_sock {int dummy; } ;
struct vmci_transport_packet {int dummy; } ;
struct sockaddr_vm {int dummy; } ;
struct sock {int (* sk_write_space ) (struct sock*) ;} ;


 int FUNC_0 (struct vsock_sock*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct sock*) ;
 struct vsock_sock* FUNC_2 (struct sock*) ;

__attribute__((used)) static void
FUNC_3(struct sock *VAR_1,
      struct vmci_transport_packet *VAR_2,
      bool VAR_3,
      struct sockaddr_vm *VAR_4, struct sockaddr_vm *VAR_5)
{







 VAR_1->sk_write_space(VAR_1);
}

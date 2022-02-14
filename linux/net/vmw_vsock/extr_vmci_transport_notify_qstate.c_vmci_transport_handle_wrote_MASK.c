
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmci_transport_packet {int dummy; } ;
struct sockaddr_vm {int dummy; } ;
struct sock {int (* sk_data_ready ) (struct sock*) ;} ;


 int FUNC_0 (struct sock*) ;

__attribute__((used)) static void
FUNC_1(struct sock *VAR_0,
       struct vmci_transport_packet *VAR_1,
       bool VAR_2,
       struct sockaddr_vm *VAR_3, struct sockaddr_vm *VAR_4)
{
 VAR_0->sk_data_ready(VAR_0);
}

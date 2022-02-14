
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmci_transport_packet {int type; } ;
struct sockaddr_vm {int dummy; } ;
struct sock {int dummy; } ;




 int FUNC_0 (struct sock*,struct vmci_transport_packet*,int,struct sockaddr_vm*,struct sockaddr_vm*) ;
 int FUNC_1 (struct sock*,struct vmci_transport_packet*,int,struct sockaddr_vm*,struct sockaddr_vm*) ;

__attribute__((used)) static void
FUNC_2(
    struct sock *VAR_0,
    struct vmci_transport_packet *VAR_1,
    bool VAR_2,
    struct sockaddr_vm *VAR_3,
    struct sockaddr_vm *VAR_4, bool *VAR_5)
{
 bool VAR_6 = 0;

 switch (VAR_1->type) {
 case 128:
  FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
  VAR_6 = 1;
  break;
 case 129:
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
  VAR_6 = 1;
  break;
 }

 if (VAR_5)
  *VAR_5 = VAR_6;
}

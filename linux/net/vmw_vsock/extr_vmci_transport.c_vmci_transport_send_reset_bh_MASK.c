
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmci_transport_packet {scalar_t__ type; } ;
struct sockaddr_vm {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sockaddr_vm*,struct sockaddr_vm*,scalar_t__,int ,int ,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct sockaddr_vm *VAR_2,
     struct sockaddr_vm *VAR_3,
     struct vmci_transport_packet *VAR_4)
{
 if (VAR_4->type == VAR_1)
  return 0;
 return FUNC_0(
     VAR_2, VAR_3,
     VAR_1, 0,
     0, ((void*)0), VAR_0);
}

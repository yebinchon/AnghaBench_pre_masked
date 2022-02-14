
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct vmci_transport_waiting_info {int dummy; } ;
struct vmci_transport_packet {int dg; } ;
struct vmci_handle {int dummy; } ;
struct sockaddr_vm {int dummy; } ;
typedef enum vmci_transport_packet_type { ____Placeholder_vmci_transport_packet_type } vmci_transport_packet_type ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct vmci_transport_packet*,struct sockaddr_vm*,struct sockaddr_vm*,int,int ,int ,struct vmci_transport_waiting_info*,int ,struct vmci_handle) ;

__attribute__((used)) static int
FUNC_3(struct vmci_transport_packet *VAR_0,
      struct sockaddr_vm *VAR_1,
      struct sockaddr_vm *VAR_2,
      enum vmci_transport_packet_type VAR_3,
      u64 VAR_4,
      u64 VAR_5,
      struct vmci_transport_waiting_info *VAR_6,
      u16 VAR_7,
      struct vmci_handle VAR_8,
      bool VAR_9)
{
 int VAR_10;

 FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
       VAR_7, VAR_8);
 VAR_10 = FUNC_0(&VAR_0->dg);
 if (VAR_9 && (VAR_10 < 0))
  return FUNC_1(VAR_10);

 return VAR_10;
}

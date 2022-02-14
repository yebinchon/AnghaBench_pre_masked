
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct vmci_transport_waiting_info {int dummy; } ;
struct vmci_transport_packet {int dummy; } ;
struct vmci_handle {int dummy; } ;
struct sockaddr_vm {int dummy; } ;
typedef enum vmci_transport_packet_type { ____Placeholder_vmci_transport_packet_type } vmci_transport_packet_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vmci_transport_packet*,struct sockaddr_vm*,struct sockaddr_vm*,int,int ,int ,struct vmci_transport_waiting_info*,int ,struct vmci_handle,int) ;
 int FUNC_1 (struct vmci_transport_packet*) ;
 struct vmci_transport_packet* FUNC_2 (int,int ) ;

__attribute__((used)) static int
FUNC_3(struct sockaddr_vm *VAR_2,
          struct sockaddr_vm *VAR_3,
          enum vmci_transport_packet_type VAR_4,
          u64 VAR_5,
          u64 VAR_6,
          struct vmci_transport_waiting_info *VAR_7,
          u16 VAR_8,
          struct vmci_handle VAR_9)
{
 struct vmci_transport_packet *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_2(sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_11 = FUNC_0(VAR_10, VAR_2, VAR_3, VAR_4, VAR_5,
      VAR_6, VAR_7, VAR_8, VAR_9,
      1);
 FUNC_1(VAR_10);

 return VAR_11;
}

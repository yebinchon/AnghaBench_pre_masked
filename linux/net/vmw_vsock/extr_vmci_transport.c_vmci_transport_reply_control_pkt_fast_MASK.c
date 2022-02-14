
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct vmci_transport_waiting_info {int dummy; } ;
struct vmci_transport_packet {scalar_t__ type; } ;
struct vmci_handle {int dummy; } ;
struct sockaddr_vm {int dummy; } ;
typedef enum vmci_transport_packet_type { ____Placeholder_vmci_transport_packet_type } vmci_transport_packet_type ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct vmci_transport_packet*,struct sockaddr_vm*,struct sockaddr_vm*,int,int ,int ,struct vmci_transport_waiting_info*,int ,struct vmci_handle,int) ;
 int FUNC_1 (struct vmci_transport_packet*,struct sockaddr_vm*,struct sockaddr_vm*) ;

__attribute__((used)) static int
FUNC_2(struct vmci_transport_packet *VAR_2,
          enum vmci_transport_packet_type VAR_3,
          u64 VAR_4,
          u64 VAR_5,
          struct vmci_transport_waiting_info *VAR_6,
          struct vmci_handle VAR_7)
{
 struct vmci_transport_packet VAR_8;
 struct sockaddr_vm VAR_9, VAR_10;

 if (VAR_2->type == VAR_0) {
  return 0;
 } else {
  FUNC_1(VAR_2, &VAR_9, &VAR_10);
  return FUNC_0(&VAR_8, &VAR_9, &VAR_10,
        VAR_3,
        VAR_4, VAR_5, VAR_6,
        VAR_1,
        VAR_7, 1);
 }
}

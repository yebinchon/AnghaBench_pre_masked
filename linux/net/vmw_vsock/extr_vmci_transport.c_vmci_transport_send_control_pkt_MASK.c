
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u16 ;
struct vsock_sock {int remote_addr; int local_addr; } ;
struct vmci_transport_waiting_info {int dummy; } ;
struct vmci_handle {int dummy; } ;
struct sock {int dummy; } ;
typedef enum vmci_transport_packet_type { ____Placeholder_vmci_transport_packet_type } vmci_transport_packet_type ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int,int ,int ,struct vmci_transport_waiting_info*,int ,struct vmci_handle) ;
 int FUNC_1 (int *) ;
 struct vsock_sock* FUNC_2 (struct sock*) ;

__attribute__((used)) static int
FUNC_3(struct sock *VAR_1,
    enum vmci_transport_packet_type VAR_2,
    u64 VAR_3,
    u64 VAR_4,
    struct vmci_transport_waiting_info *VAR_5,
    u16 VAR_6,
    struct vmci_handle VAR_7)
{
 struct vsock_sock *VAR_8;

 VAR_8 = FUNC_2(VAR_1);

 if (!FUNC_1(&VAR_8->local_addr))
  return -VAR_0;

 if (!FUNC_1(&VAR_8->remote_addr))
  return -VAR_0;

 return FUNC_0(&VAR_8->local_addr,
           &VAR_8->remote_addr,
           VAR_2, VAR_3, VAR_4,
           VAR_5, VAR_6, VAR_7);
}

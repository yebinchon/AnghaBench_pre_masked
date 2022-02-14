
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sockaddr_vm {int dummy; } ;
struct vsock_sock {struct sockaddr_vm local_addr; struct sockaddr_vm remote_addr; } ;
struct TYPE_3__ {int context; } ;
struct TYPE_4__ {TYPE_1__ src; } ;
struct vmci_transport_packet {scalar_t__ type; int src_port; TYPE_2__ dg; } ;
struct sock {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sockaddr_vm*,struct sockaddr_vm*,scalar_t__,int ,int ,int *,int ,int ) ;
 scalar_t__ FUNC_1 (struct sockaddr_vm*) ;
 int FUNC_2 (struct sockaddr_vm*,int ,int ) ;
 struct vsock_sock* FUNC_3 (struct sock*) ;

__attribute__((used)) static int FUNC_4(struct sock *VAR_4,
         struct vmci_transport_packet *VAR_5)
{
 struct sockaddr_vm *VAR_6;
 struct sockaddr_vm VAR_7;
 struct vsock_sock *VAR_8;

 if (VAR_5->type == VAR_2)
  return 0;

 VAR_8 = FUNC_3(VAR_4);

 if (!FUNC_1(&VAR_8->local_addr))
  return -VAR_0;

 if (FUNC_1(&VAR_8->remote_addr)) {
  VAR_6 = &VAR_8->remote_addr;
 } else {
  FUNC_2(&VAR_7, VAR_5->dg.src.context,
    VAR_5->src_port);
  VAR_6 = &VAR_7;
 }
 return FUNC_0(&VAR_8->local_addr, VAR_6,
          VAR_2,
          0, 0, ((void*)0), VAR_3,
          VAR_1);
}

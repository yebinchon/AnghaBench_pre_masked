
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vsock_sock {int peer_shutdown; } ;
struct TYPE_4__ {int mode; } ;
struct vmci_transport_packet {int type; TYPE_1__ u; } ;
struct sock {int (* sk_state_change ) (struct sock*) ;int sk_state; } ;
struct TYPE_6__ {TYPE_2__* notify_ops; } ;
struct TYPE_5__ {int (* handle_notify_pkt ) (struct sock*,struct vmci_transport_packet*,int,int *,int *,int*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int FUNC_0 (struct sock*,int ) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,struct vmci_transport_packet*,int,int *,int *,int*) ;
 TYPE_3__* FUNC_4 (struct vsock_sock*) ;
 struct vsock_sock* FUNC_5 (struct sock*) ;
 int FUNC_6 (struct vsock_sock*) ;

__attribute__((used)) static int FUNC_7(struct sock *VAR_4,
      struct vmci_transport_packet *VAR_5)
{
 struct vsock_sock *VAR_6;
 bool VAR_7 = 0;
 switch (VAR_5->type) {
 case 128:
  if (VAR_5->u.mode) {
   VAR_6 = FUNC_5(VAR_4);

   VAR_6->peer_shutdown |= VAR_5->u.mode;
   VAR_4->sk_state_change(VAR_4);
  }
  break;

 case 129:
  VAR_6 = FUNC_5(VAR_4);
  FUNC_0(VAR_4, VAR_2);
  VAR_6->peer_shutdown = VAR_1;
  if (FUNC_6(VAR_6) <= 0)
   VAR_4->sk_state = VAR_3;

  VAR_4->sk_state_change(VAR_4);
  break;

 default:
  VAR_6 = FUNC_5(VAR_4);
  FUNC_4(VAR_6)->notify_ops->handle_notify_pkt(
    VAR_4, VAR_5, 0, ((void*)0), ((void*)0),
    &VAR_7);
  if (!VAR_7)
   return -VAR_0;

  break;
 }

 return 0;
}

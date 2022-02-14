
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int svm_port; int svm_cid; } ;
struct vsock_sock {int ignore_connecting_rst; TYPE_5__ remote_addr; } ;
struct TYPE_9__ {int context; } ;
struct TYPE_10__ {TYPE_3__ src; } ;
struct TYPE_8__ {int size; int handle; } ;
struct vmci_transport_packet {int type; int src_port; TYPE_4__ dg; TYPE_2__ u; } ;
struct sock {int sk_err; int (* sk_error_report ) (struct sock*) ;int sk_state; int (* sk_state_change ) (struct sock*) ;TYPE_1__* sk_socket; } ;
struct TYPE_12__ {int detach_sub_id; int consume_size; int produce_size; int qpair; int qp_handle; } ;
struct TYPE_7__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;





 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 TYPE_6__* FUNC_4 (struct vsock_sock*) ;
 int FUNC_5 (struct sock*,struct vmci_transport_packet*) ;
 int FUNC_6 (struct sock*,struct vmci_transport_packet*) ;
 int FUNC_7 (struct sock*,struct vmci_transport_packet*) ;
 int FUNC_8 (struct vsock_sock*) ;
 struct vsock_sock* FUNC_9 (struct sock*) ;

__attribute__((used)) static int
FUNC_10(struct sock *VAR_7,
          struct vmci_transport_packet *VAR_8)
{
 struct vsock_sock *VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_9 = FUNC_9(VAR_7);

 switch (VAR_8->type) {
 case 132:
  if (FUNC_3(VAR_8->u.handle) ||
      !FUNC_2(VAR_8->u.handle,
       FUNC_4(VAR_9)->qp_handle)) {
   VAR_11 = VAR_2;
   VAR_10 = -VAR_1;
   goto destroy;
  }






  VAR_7->sk_state = VAR_5;
  VAR_7->sk_socket->state = VAR_3;
  FUNC_8(VAR_9);
  VAR_7->sk_state_change(VAR_7);

  break;
 case 130:
 case 129:
  if (VAR_8->u.size == 0
      || VAR_8->dg.src.context != VAR_9->remote_addr.svm_cid
      || VAR_8->src_port != VAR_9->remote_addr.svm_port
      || !FUNC_3(FUNC_4(VAR_9)->qp_handle)
      || FUNC_4(VAR_9)->qpair
      || FUNC_4(VAR_9)->produce_size != 0
      || FUNC_4(VAR_9)->consume_size != 0
      || FUNC_4(VAR_9)->detach_sub_id != VAR_6) {
   VAR_11 = VAR_2;
   VAR_10 = -VAR_1;

   goto destroy;
  }

  VAR_10 = FUNC_6(VAR_7, VAR_8);
  if (VAR_10) {
   VAR_11 = -VAR_10;
   goto destroy;
  }

  break;
 case 131:
  VAR_10 = FUNC_5(VAR_7, VAR_8);
  if (VAR_10) {
   VAR_11 = -VAR_10;
   goto destroy;
  }

  break;
 case 128:
  if (VAR_9->ignore_connecting_rst) {
   VAR_9->ignore_connecting_rst = 0;
  } else {
   VAR_11 = VAR_0;
   VAR_10 = 0;
   goto destroy;
  }

  break;
 default:

  VAR_11 = VAR_2;
  VAR_10 = -VAR_1;
  goto destroy;
 }

 return 0;

destroy:
 FUNC_7(VAR_7, VAR_8);

 VAR_7->sk_state = VAR_4;
 VAR_7->sk_err = VAR_11;
 VAR_7->sk_error_report(VAR_7);
 return VAR_10;
}

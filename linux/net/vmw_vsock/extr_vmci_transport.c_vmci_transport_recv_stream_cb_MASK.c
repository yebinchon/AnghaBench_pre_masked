
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int svm_cid; } ;
struct vsock_sock {TYPE_5__ local_addr; } ;
struct vmci_transport_recv_pkt_info {int work; int pkt; struct sock* sk; } ;
struct TYPE_10__ {int context; } ;
struct TYPE_9__ {int context; } ;
struct TYPE_11__ {TYPE_3__ src; TYPE_2__ dst; } ;
struct vmci_transport_packet {scalar_t__ type; TYPE_4__ dg; int dst_port; int src_port; } ;
struct TYPE_8__ {scalar_t__ resource; int context; } ;
struct vmci_datagram {TYPE_1__ src; } ;
struct sockaddr_vm {int svm_cid; } ;
struct sock {scalar_t__ sk_state; } ;
struct TYPE_14__ {TYPE_6__* notify_ops; } ;
struct TYPE_13__ {int (* handle_notify_pkt ) (struct sock*,struct vmci_transport_packet*,int,struct sockaddr_vm*,struct sockaddr_vm*,int*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct vmci_datagram*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 struct vmci_transport_recv_pkt_info* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,struct vmci_transport_packet*,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 (struct sock*,struct vmci_transport_packet*,int,struct sockaddr_vm*,struct sockaddr_vm*,int*) ;
 TYPE_7__* FUNC_11 (struct vsock_sock*) ;
 int FUNC_12 (struct vsock_sock*,int ) ;
 scalar_t__ FUNC_13 (int ) ;
 int VAR_8 ;
 int FUNC_14 (struct sockaddr_vm*,struct sockaddr_vm*) ;
 scalar_t__ FUNC_15 (struct sockaddr_vm*,struct sockaddr_vm*,struct vmci_transport_packet*) ;
 int FUNC_16 (int ,int) ;
 int FUNC_17 (struct sockaddr_vm*,int ,int ) ;
 struct sock* FUNC_18 (struct sockaddr_vm*) ;
 struct sock* FUNC_19 (struct sockaddr_vm*,struct sockaddr_vm*) ;
 struct vsock_sock* FUNC_20 (struct sock*) ;

__attribute__((used)) static int FUNC_21(void *VAR_9, struct vmci_datagram *VAR_10)
{
 struct sock *VAR_11;
 struct sockaddr_vm VAR_12;
 struct sockaddr_vm VAR_13;
 struct vmci_transport_packet *VAR_14;
 struct vsock_sock *VAR_15;
 bool VAR_16;
 int VAR_17;

 VAR_11 = ((void*)0);
 VAR_17 = VAR_6;
 VAR_16 = 0;





 if (!FUNC_16(VAR_10->src.context, -1)
     || FUNC_13(VAR_10->src.context) != VAR_10->src.resource)
  return VAR_4;

 if (FUNC_1(VAR_10) < sizeof(*VAR_14))

  return VAR_2;

 VAR_14 = (struct vmci_transport_packet *)VAR_10;





 FUNC_17(&VAR_13, VAR_14->dg.src.context, VAR_14->src_port);
 FUNC_17(&VAR_12, VAR_14->dg.dst.context, VAR_14->dst_port);

 VAR_11 = FUNC_19(&VAR_13, &VAR_12);
 if (!VAR_11) {
  VAR_11 = FUNC_18(&VAR_12);
  if (!VAR_11) {
   if (FUNC_15(&VAR_12, &VAR_13, VAR_14) < 0)
    FUNC_6("unable to send reset\n");

   VAR_17 = VAR_3;
   goto out;
  }
 }





 if (VAR_14->type >= VAR_7) {
  FUNC_14(&VAR_12, &VAR_13);
  VAR_17 = VAR_2;
  goto out;
 }
 VAR_15 = FUNC_20(VAR_11);
 if (!FUNC_12(VAR_15, VAR_14->dg.src.context)) {
  VAR_17 = VAR_4;
  goto out;
 }






 FUNC_2(VAR_11);

 if (!FUNC_8(VAR_11)) {

  VAR_15->local_addr.svm_cid = VAR_12.svm_cid;

  if (VAR_11->sk_state == VAR_1)
   FUNC_11(VAR_15)->notify_ops->handle_notify_pkt(
     VAR_11, VAR_14, 1, &VAR_12, &VAR_13,
     &VAR_16);
 }

 FUNC_3(VAR_11);

 if (!VAR_16) {
  struct vmci_transport_recv_pkt_info *VAR_18;

  VAR_18 = FUNC_4(sizeof(*VAR_18), VAR_0);
  if (!VAR_18) {
   if (FUNC_15(&VAR_12, &VAR_13, VAR_14) < 0)
    FUNC_6("unable to send reset\n");

   VAR_17 = VAR_5;
   goto out;
  }

  VAR_18->sk = VAR_11;
  FUNC_5(&VAR_18->pkt, VAR_14, sizeof(VAR_18->pkt));
  FUNC_0(&VAR_18->work, VAR_8);

  FUNC_7(&VAR_18->work);





  VAR_11 = ((void*)0);
 }

out:
 if (VAR_11)
  FUNC_9(VAR_11);

 return VAR_17;
}

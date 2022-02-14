
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_12__ {scalar_t__ svm_cid; } ;
struct TYPE_9__ {scalar_t__ svm_cid; } ;
struct vsock_sock {TYPE_5__ remote_addr; TYPE_2__ local_addr; } ;
struct TYPE_10__ {int context; } ;
struct TYPE_11__ {TYPE_3__ src; } ;
struct vmci_handle {int dummy; } ;
struct TYPE_8__ {struct vmci_handle handle; } ;
struct vmci_transport_packet {int type; TYPE_4__ dg; TYPE_1__ u; } ;
struct vmci_qp {int dummy; } ;
struct sock {int sk_err; int sk_state; int (* sk_data_ready ) (struct sock*) ;} ;
struct TYPE_13__ {struct vmci_qp* qpair; struct vmci_handle qp_handle; int consume_size; int produce_size; int detach_sub_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

 int VAR_9 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (int ,int ,TYPE_6__*,int *) ;
 int FUNC_4 (struct vmci_handle) ;
 TYPE_6__* FUNC_5 (struct vsock_sock*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct vsock_sock*,scalar_t__) ;
 int VAR_10 ;
 int FUNC_8 (struct vmci_qp**,struct vmci_handle*,int ,int ,int ,int ,int ) ;
 int FUNC_9 (struct sock*,struct vmci_handle) ;
 int FUNC_10 (struct sock*,struct vmci_transport_packet*) ;
 int FUNC_11 (struct sock*,struct sock*) ;
 int FUNC_12 (struct vsock_sock*) ;
 int FUNC_13 (struct vsock_sock*) ;
 int FUNC_14 (struct sock*,struct sock*) ;
 struct vsock_sock* FUNC_15 (struct sock*) ;

__attribute__((used)) static int
FUNC_16(struct sock *VAR_11,
          struct sock *VAR_12,
          struct vmci_transport_packet *VAR_13)
{
 struct vsock_sock *VAR_14;
 struct vmci_handle VAR_15;
 struct vmci_qp *VAR_16;
 bool VAR_17;
 u32 VAR_18;
 u32 VAR_19;
 int VAR_20;
 int VAR_21;

 VAR_14 = FUNC_15(VAR_12);
 VAR_19 = VAR_5;

 switch (VAR_13->type) {
 case 128:
  if (FUNC_4(VAR_13->u.handle)) {
   FUNC_10(VAR_12, VAR_13);
   VAR_21 = VAR_1;
   VAR_20 = -VAR_0;
   goto destroy;
  }
  break;
 default:

  FUNC_10(VAR_12, VAR_13);
  VAR_21 = VAR_1;
  VAR_20 = VAR_13->type == VAR_9 ? 0 : -VAR_0;
  goto destroy;
 }
 VAR_20 = FUNC_3(VAR_4,
       VAR_10,
       FUNC_5(VAR_14), &VAR_19);
 if (VAR_20 < VAR_8) {
  FUNC_10(VAR_12, VAR_13);
  VAR_20 = FUNC_6(VAR_20);
  VAR_21 = -VAR_20;
  goto destroy;
 }

 FUNC_5(VAR_14)->detach_sub_id = VAR_19;


 VAR_15 = VAR_13->u.handle;




 VAR_17 =
     VAR_14->remote_addr.svm_cid == VAR_14->local_addr.svm_cid;
 VAR_18 = VAR_6;
 VAR_18 |= VAR_17 ? VAR_7 : 0;

 VAR_20 = FUNC_8(
     &VAR_16,
     &VAR_15,
     FUNC_5(VAR_14)->produce_size,
     FUNC_5(VAR_14)->consume_size,
     VAR_13->dg.src.context,
     VAR_18,
     FUNC_7(
      VAR_14,
      VAR_14->remote_addr.svm_cid));
 if (VAR_20 < 0) {
  FUNC_10(VAR_12, VAR_13);
  VAR_21 = -VAR_20;
  goto destroy;
 }

 FUNC_5(VAR_14)->qp_handle = VAR_15;
 FUNC_5(VAR_14)->qpair = VAR_16;
 VAR_12->sk_state = VAR_3;

 FUNC_12(VAR_14);


 VAR_20 = FUNC_9(VAR_12, VAR_15);
 if (VAR_20 < 0) {
  FUNC_13(VAR_14);
  FUNC_0("Could not send attach\n");
  FUNC_10(VAR_12, VAR_13);
  VAR_20 = FUNC_6(VAR_20);
  VAR_21 = -VAR_20;
  goto destroy;
 }





 FUNC_14(VAR_11, VAR_12);
 FUNC_11(VAR_11, VAR_12);




 VAR_11->sk_data_ready(VAR_11);

 return 0;

destroy:
 VAR_12->sk_err = VAR_21;
 VAR_12->sk_state = VAR_2;







 FUNC_1(VAR_12);

 return VAR_20;
}

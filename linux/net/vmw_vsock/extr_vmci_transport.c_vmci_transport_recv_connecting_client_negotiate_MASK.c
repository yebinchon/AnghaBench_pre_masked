
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_12__ {scalar_t__ svm_cid; } ;
struct TYPE_11__ {scalar_t__ svm_cid; } ;
struct vsock_sock {int sent_request; int ignore_connecting_rst; TYPE_4__ remote_addr; TYPE_3__ local_addr; } ;
struct TYPE_13__ {scalar_t__ size; } ;
struct TYPE_9__ {scalar_t__ context; } ;
struct TYPE_10__ {TYPE_1__ dst; } ;
struct vmci_transport_packet {scalar_t__ type; TYPE_5__ u; int proto; TYPE_2__ dg; } ;
struct vmci_qp {int dummy; } ;
struct vmci_handle {int dummy; } ;
struct sock {int dummy; } ;
struct TYPE_15__ {scalar_t__ queue_pair_min_size; scalar_t__ queue_pair_max_size; scalar_t__ produce_size; scalar_t__ consume_size; TYPE_6__* notify_ops; scalar_t__ detach_sub_id; struct vmci_qp* qpair; struct vmci_handle qp_handle; } ;
struct TYPE_14__ {int (* process_negotiate ) (struct sock*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct vmci_handle VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (int ,int ,TYPE_7__*,scalar_t__*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct vmci_handle) ;
 int FUNC_4 (struct vmci_qp**) ;
 TYPE_7__* FUNC_5 (struct vsock_sock*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct vsock_sock*,scalar_t__) ;
 scalar_t__ FUNC_8 (int*) ;
 int VAR_10 ;
 int FUNC_9 (struct sock*,int *,int) ;
 int FUNC_10 (struct vmci_qp**,struct vmci_handle*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int ) ;
 int FUNC_11 (struct sock*,struct vmci_handle) ;
 struct vsock_sock* FUNC_12 (struct sock*) ;

__attribute__((used)) static int FUNC_13(
     struct sock *VAR_11,
     struct vmci_transport_packet *VAR_12)
{
 int VAR_13;
 struct vsock_sock *VAR_14;
 struct vmci_handle VAR_15;
 struct vmci_qp *VAR_16;
 u32 VAR_17;
 bool VAR_18;
 u32 VAR_19;
 bool VAR_20 = 1;
 bool VAR_21;
 u16 VAR_22;

 VAR_14 = FUNC_12(VAR_11);
 VAR_15 = VAR_3;
 VAR_17 = VAR_4;




 VAR_14->sent_request = 0;
 VAR_14->ignore_connecting_rst = 0;


 if (VAR_12->u.size < FUNC_5(VAR_14)->queue_pair_min_size ||
     VAR_12->u.size > FUNC_5(VAR_14)->queue_pair_max_size) {
  VAR_13 = -VAR_0;
  goto destroy;
 }



 if (VAR_14->local_addr.svm_cid == VAR_1)
  VAR_14->local_addr.svm_cid = VAR_12->dg.dst.context;





 if (FUNC_8(&VAR_21)) {
  VAR_20 = VAR_21;
 } else {
  if (VAR_12->type == VAR_7)
   VAR_20 = 1;
  else if (VAR_12->type == VAR_8)
   VAR_20 = 0;

 }

 if (VAR_20)
  VAR_22 = VAR_9;
 else
  VAR_22 = VAR_12->proto;

 if (!FUNC_9(VAR_11, &VAR_22, VAR_20)) {
  VAR_13 = -VAR_0;
  goto destroy;
 }







 VAR_13 = FUNC_1(VAR_2,
       VAR_10,
       FUNC_5(VAR_14), &VAR_17);
 if (VAR_13 < VAR_6) {
  VAR_13 = FUNC_6(VAR_13);
  goto destroy;
 }


 VAR_15 = VAR_3;
 VAR_18 = VAR_14->remote_addr.svm_cid == VAR_14->local_addr.svm_cid;
 VAR_19 = VAR_18 ? VAR_5 : 0;

 VAR_13 = FUNC_10(&VAR_16,
           &VAR_15,
           VAR_12->u.size,
           VAR_12->u.size,
           VAR_14->remote_addr.svm_cid,
           VAR_19,
           FUNC_7(
        VAR_14,
        VAR_14->
        remote_addr.svm_cid));
 if (VAR_13 < 0)
  goto destroy;

 VAR_13 = FUNC_11(VAR_11, VAR_15);
 if (VAR_13 < 0) {
  VAR_13 = FUNC_6(VAR_13);
  goto destroy;
 }

 FUNC_5(VAR_14)->qp_handle = VAR_15;
 FUNC_5(VAR_14)->qpair = VAR_16;

 FUNC_5(VAR_14)->produce_size = FUNC_5(VAR_14)->consume_size =
  VAR_12->u.size;

 FUNC_5(VAR_14)->detach_sub_id = VAR_17;

 FUNC_5(VAR_14)->notify_ops->process_negotiate(VAR_11);

 return 0;

destroy:
 if (VAR_17 != VAR_4)
  FUNC_2(VAR_17);

 if (!FUNC_3(VAR_15))
  FUNC_4(&VAR_16);

 return VAR_13;
}

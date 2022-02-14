
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


typedef void* u64 ;
typedef int u16 ;
struct TYPE_13__ {int svm_cid; } ;
struct vsock_sock {int pending_work; struct sock* listener; TYPE_6__ remote_addr; TYPE_6__ local_addr; } ;
struct TYPE_11__ {scalar_t__ size; } ;
struct TYPE_9__ {int context; } ;
struct TYPE_8__ {int context; } ;
struct TYPE_10__ {TYPE_2__ src; TYPE_1__ dst; } ;
struct vmci_transport_packet {scalar_t__ type; int proto; TYPE_4__ u; int src_port; TYPE_3__ dg; int dst_port; } ;
struct sock {int sk_state; scalar_t__ sk_ack_backlog; scalar_t__ sk_max_ack_backlog; int sk_type; } ;
struct TYPE_14__ {scalar_t__ queue_pair_min_size; scalar_t__ queue_pair_max_size; TYPE_5__* notify_ops; void* queue_pair_size; void* consume_size; void* produce_size; } ;
struct TYPE_12__ {int (* process_request ) (struct sock*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 struct sock* FUNC_0 (int ,int *,struct sock*,int ,int ,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*) ;
 TYPE_7__* FUNC_9 (struct vsock_sock*) ;
 int FUNC_10 (int) ;
 struct sock* FUNC_11 (struct sock*,struct vmci_transport_packet*) ;
 int FUNC_12 () ;
 scalar_t__ FUNC_13 (int*) ;
 scalar_t__ FUNC_14 (struct sock*,int*,int) ;
 int FUNC_15 (struct sock*,struct sock*,struct vmci_transport_packet*) ;
 int FUNC_16 (struct sock*) ;
 int FUNC_17 (struct vmci_transport_packet*) ;
 int FUNC_18 (struct sock*,void*) ;
 int FUNC_19 (struct sock*,void*,int) ;
 int FUNC_20 (struct sock*,struct vmci_transport_packet*) ;
 int FUNC_21 (struct sock*,struct sock*) ;
 int FUNC_22 (TYPE_6__*,int ,int ) ;
 int FUNC_23 (struct sock*,struct sock*) ;
 struct vsock_sock* FUNC_24 (struct sock*) ;

__attribute__((used)) static int FUNC_25(struct sock *VAR_8,
          struct vmci_transport_packet *VAR_9)
{
 struct sock *VAR_10;
 struct vsock_sock *VAR_11;
 int VAR_12;
 u64 VAR_13;
 bool VAR_14 = 0;
 bool VAR_15 = 0;

 VAR_12 = 0;
 VAR_10 = FUNC_11(VAR_8, VAR_9);
 if (VAR_10) {
  FUNC_2(VAR_10);


  FUNC_24(VAR_10)->local_addr.svm_cid = VAR_9->dg.dst.context;

  switch (VAR_10->sk_state) {
  case 128:
   VAR_12 = FUNC_15(VAR_8,
            VAR_10,
            VAR_9);
   break;
  default:
   FUNC_20(VAR_10, VAR_9);
   VAR_12 = -VAR_1;
  }

  if (VAR_12 < 0)
   FUNC_23(VAR_8, VAR_10);

  FUNC_3(VAR_10);
  FUNC_16(VAR_10);

  return VAR_12;
 }





 if (!(VAR_9->type == VAR_5 ||
       VAR_9->type == VAR_6)) {
  FUNC_17(VAR_9);
  return -VAR_1;
 }

 if (VAR_9->u.size == 0) {
  FUNC_17(VAR_9);
  return -VAR_1;
 }





 if (VAR_8->sk_ack_backlog >= VAR_8->sk_max_ack_backlog) {
  FUNC_17(VAR_9);
  return -VAR_0;
 }

 VAR_10 = FUNC_0(FUNC_6(VAR_8), ((void*)0), VAR_8, VAR_3,
     VAR_8->sk_type, 0);
 if (!VAR_10) {
  FUNC_20(VAR_8, VAR_9);
  return -VAR_2;
 }

 VAR_11 = FUNC_24(VAR_10);

 FUNC_22(&VAR_11->local_addr, VAR_9->dg.dst.context,
   VAR_9->dst_port);
 FUNC_22(&VAR_11->remote_addr, VAR_9->dg.src.context,
   VAR_9->src_port);




 if (VAR_9->u.size >= FUNC_9(VAR_11)->queue_pair_min_size &&
     VAR_9->u.size <= FUNC_9(VAR_11)->queue_pair_max_size) {
  VAR_13 = VAR_9->u.size;
 } else {
  VAR_13 = FUNC_9(VAR_11)->queue_pair_size;
 }




 if (FUNC_13(&VAR_15)) {
  VAR_14 = VAR_15;
 } else {
  if (VAR_9->type == VAR_5)
   VAR_14 = 1;
  else if (VAR_9->type == VAR_6)
   VAR_14 = 0;

 }

 if (VAR_14) {

  u16 VAR_16 = VAR_7;
  if (FUNC_14(
   VAR_10, &VAR_16, 1))
   VAR_12 = FUNC_18(VAR_10, VAR_13);
  else
   VAR_12 = -VAR_1;

 } else {

  int VAR_17 = VAR_9->proto;
  int VAR_18;
  u16 VAR_19 = 0;





  VAR_17 &= FUNC_12();




  VAR_18 = FUNC_1(VAR_17);
  if (VAR_18) {
   VAR_19 = (1 << (VAR_18 - 1));
   if (FUNC_14(
    VAR_10, &VAR_19, 0))
    VAR_12 = FUNC_19(VAR_10,
       VAR_13,
       VAR_19);
   else
    VAR_12 = -VAR_1;

  } else {
   VAR_12 = -VAR_1;
  }
 }

 if (VAR_12 < 0) {
  FUNC_20(VAR_8, VAR_9);
  FUNC_7(VAR_10);
  VAR_12 = FUNC_10(VAR_12);
  goto out;
 }

 FUNC_21(VAR_8, VAR_10);
 VAR_8->sk_ack_backlog++;

 VAR_10->sk_state = 128;
 FUNC_9(VAR_11)->produce_size =
  FUNC_9(VAR_11)->consume_size = VAR_13;
 FUNC_9(VAR_11)->queue_pair_size = VAR_13;

 FUNC_9(VAR_11)->notify_ops->process_request(VAR_10);
 VAR_11->listener = VAR_8;
 FUNC_5(VAR_8);
 FUNC_5(VAR_10);
 FUNC_4(&VAR_11->pending_work, VAR_4);

out:
 return VAR_12;
}

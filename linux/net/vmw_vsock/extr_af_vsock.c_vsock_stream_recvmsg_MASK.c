
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vsock_transport_recv_notify_data {int dummy; } ;
struct vsock_sock {int peer_shutdown; } ;
struct socket {struct sock* sk; } ;
struct sock {scalar_t__ sk_state; int sk_shutdown; scalar_t__ sk_err; } ;
struct msghdr {int dummy; } ;
typedef size_t ssize_t ;
typedef scalar_t__ s64 ;
struct TYPE_2__ {size_t (* stream_rcvhiwat ) (struct vsock_sock*) ;int (* notify_recv_init ) (struct vsock_sock*,size_t,struct vsock_transport_recv_notify_data*) ;int (* notify_recv_pre_block ) (struct vsock_sock*,size_t,struct vsock_transport_recv_notify_data*) ;int (* notify_recv_pre_dequeue ) (struct vsock_sock*,size_t,struct vsock_transport_recv_notify_data*) ;size_t (* stream_dequeue ) (struct vsock_sock*,struct msghdr*,size_t,int) ;int (* notify_recv_post_dequeue ) (struct vsock_sock*,size_t,size_t,int,struct vsock_transport_recv_notify_data*) ;} ;


 int FUNC_0 (int ) ;
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
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (int ,int *,int ) ;
 int FUNC_4 (struct sock*) ;
 long FUNC_5 (long) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct sock*) ;
 scalar_t__ FUNC_8 (struct sock*,int ) ;
 int FUNC_9 (long) ;
 size_t FUNC_10 (struct sock*,int,size_t) ;
 long FUNC_11 (struct sock*,int) ;
 size_t FUNC_12 (struct vsock_sock*) ;
 int FUNC_13 (struct vsock_sock*,size_t,struct vsock_transport_recv_notify_data*) ;
 int FUNC_14 (struct vsock_sock*,size_t,struct vsock_transport_recv_notify_data*) ;
 int FUNC_15 (struct vsock_sock*,size_t,struct vsock_transport_recv_notify_data*) ;
 size_t FUNC_16 (struct vsock_sock*,struct msghdr*,size_t,int) ;
 int FUNC_17 (struct vsock_sock*,size_t,size_t,int,struct vsock_transport_recv_notify_data*) ;
 TYPE_1__* VAR_14 ;
 struct vsock_sock* FUNC_18 (struct sock*) ;
 scalar_t__ FUNC_19 (struct vsock_sock*) ;
 int VAR_15 ;

__attribute__((used)) static int
FUNC_20(struct socket *VAR_16, struct msghdr *VAR_17, size_t VAR_18,
       int VAR_19)
{
 struct sock *VAR_20;
 struct vsock_sock *VAR_21;
 int VAR_22;
 size_t VAR_23;
 ssize_t VAR_24;
 long VAR_25;
 struct vsock_transport_recv_notify_data VAR_26;

 FUNC_0(VAR_15);

 VAR_20 = VAR_16->sk;
 VAR_21 = FUNC_18(VAR_20);
 VAR_22 = 0;

 FUNC_2(VAR_20);

 if (VAR_20->sk_state != VAR_12) {





  if (FUNC_8(VAR_20, VAR_10))
   VAR_22 = 0;
  else
   VAR_22 = -VAR_2;

  goto out;
 }

 if (VAR_19 & VAR_5) {
  VAR_22 = -VAR_3;
  goto out;
 }





 if (VAR_20->sk_shutdown & VAR_8) {
  VAR_22 = 0;
  goto out;
 }




 if (!VAR_18) {
  VAR_22 = 0;
  goto out;
 }







 VAR_23 = FUNC_10(VAR_20, VAR_19 & VAR_7, VAR_18);
 if (VAR_23 >= VAR_14->stream_rcvhiwat(VAR_21)) {
  VAR_22 = -VAR_1;
  goto out;
 }
 VAR_25 = FUNC_11(VAR_20, VAR_19 & VAR_4);
 VAR_24 = 0;

 VAR_22 = VAR_14->notify_recv_init(VAR_21, VAR_23, &VAR_26);
 if (VAR_22 < 0)
  goto out;


 while (1) {
  s64 VAR_27;

  FUNC_3(FUNC_7(VAR_20), &VAR_15, VAR_11);
  VAR_27 = FUNC_19(VAR_21);

  if (VAR_27 == 0) {
   if (VAR_20->sk_err != 0 ||
       (VAR_20->sk_shutdown & VAR_8) ||
       (VAR_21->peer_shutdown & VAR_9)) {
    FUNC_1(FUNC_7(VAR_20), &VAR_15);
    break;
   }

   if (VAR_25 == 0) {
    VAR_22 = -VAR_0;
    FUNC_1(FUNC_7(VAR_20), &VAR_15);
    break;
   }

   VAR_22 = VAR_14->notify_recv_pre_block(
     VAR_21, VAR_23, &VAR_26);
   if (VAR_22 < 0) {
    FUNC_1(FUNC_7(VAR_20), &VAR_15);
    break;
   }
   FUNC_4(VAR_20);
   VAR_25 = FUNC_5(VAR_25);
   FUNC_2(VAR_20);

   if (FUNC_6(VAR_13)) {
    VAR_22 = FUNC_9(VAR_25);
    FUNC_1(FUNC_7(VAR_20), &VAR_15);
    break;
   } else if (VAR_25 == 0) {
    VAR_22 = -VAR_0;
    FUNC_1(FUNC_7(VAR_20), &VAR_15);
    break;
   }
  } else {
   ssize_t VAR_28;

   FUNC_1(FUNC_7(VAR_20), &VAR_15);

   if (VAR_27 < 0) {





    VAR_22 = -VAR_1;
    goto out;
   }

   VAR_22 = VAR_14->notify_recv_pre_dequeue(
     VAR_21, VAR_23, &VAR_26);
   if (VAR_22 < 0)
    break;

   VAR_28 = VAR_14->stream_dequeue(
     VAR_21, VAR_17,
     VAR_18 - VAR_24, VAR_19);
   if (VAR_28 < 0) {
    VAR_22 = -VAR_1;
    break;
   }

   VAR_24 += VAR_28;

   VAR_22 = VAR_14->notify_recv_post_dequeue(
     VAR_21, VAR_23, VAR_28,
     !(VAR_19 & VAR_6), &VAR_26);
   if (VAR_22 < 0)
    goto out;

   if (VAR_28 >= VAR_23 || VAR_19 & VAR_6)
    break;

   VAR_23 -= VAR_28;
  }
 }

 if (VAR_20->sk_err)
  VAR_22 = -VAR_20->sk_err;
 else if (VAR_20->sk_shutdown & VAR_8)
  VAR_22 = 0;

 if (VAR_24 > 0)
  VAR_22 = VAR_24;

out:
 FUNC_4(VAR_20);
 return VAR_22;
}

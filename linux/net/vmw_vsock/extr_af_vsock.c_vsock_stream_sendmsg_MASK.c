
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vsock_transport_send_notify_data {int dummy; } ;
struct vsock_sock {int peer_shutdown; int remote_addr; int local_addr; } ;
struct socket {struct sock* sk; } ;
struct sock {scalar_t__ sk_state; int sk_shutdown; int sk_err; } ;
struct msghdr {int msg_flags; scalar_t__ msg_namelen; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int (* notify_send_init ) (struct vsock_sock*,struct vsock_transport_send_notify_data*) ;int (* notify_send_pre_block ) (struct vsock_sock*,struct vsock_transport_send_notify_data*) ;int (* notify_send_pre_enqueue ) (struct vsock_sock*,struct vsock_transport_send_notify_data*) ;size_t (* stream_enqueue ) (struct vsock_sock*,struct msghdr*,size_t) ;int (* notify_send_post_enqueue ) (struct vsock_sock*,size_t,struct vsock_transport_send_notify_data*) ;} ;


 int FUNC_0 (int ,int ) ;
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
 int FUNC_1 (int ,int *) ;
 int VAR_13 ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (long) ;
 long FUNC_8 (struct sock*,int) ;
 int FUNC_9 (struct vsock_sock*,struct vsock_transport_send_notify_data*) ;
 int FUNC_10 (struct vsock_sock*,struct vsock_transport_send_notify_data*) ;
 int FUNC_11 (struct vsock_sock*,struct vsock_transport_send_notify_data*) ;
 size_t FUNC_12 (struct vsock_sock*,struct msghdr*,size_t) ;
 int FUNC_13 (struct vsock_sock*,size_t,struct vsock_transport_send_notify_data*) ;
 TYPE_1__* VAR_14 ;
 int FUNC_14 (int *) ;
 struct vsock_sock* FUNC_15 (struct sock*) ;
 scalar_t__ FUNC_16 (struct vsock_sock*) ;
 int VAR_15 ;
 long FUNC_17 (int *,int ,long) ;
 int VAR_16 ;

__attribute__((used)) static int FUNC_18(struct socket *VAR_17, struct msghdr *VAR_18,
    size_t VAR_19)
{
 struct sock *VAR_20;
 struct vsock_sock *VAR_21;
 ssize_t VAR_22;
 long VAR_23;
 int VAR_24;
 struct vsock_transport_send_notify_data VAR_25;
 FUNC_0(VAR_15, VAR_16);

 VAR_20 = VAR_17->sk;
 VAR_21 = FUNC_15(VAR_20);
 VAR_22 = 0;
 VAR_24 = 0;

 if (VAR_18->msg_flags & VAR_8)
  return -VAR_5;

 FUNC_2(VAR_20);


 if (VAR_18->msg_namelen) {
  VAR_24 = VAR_20->sk_state == VAR_12 ? -VAR_2 : -VAR_5;
  goto out;
 }


 if (VAR_20->sk_shutdown & VAR_10 ||
     VAR_21->peer_shutdown & VAR_9) {
  VAR_24 = -VAR_6;
  goto out;
 }

 if (VAR_20->sk_state != VAR_12 ||
     !FUNC_14(&VAR_21->local_addr)) {
  VAR_24 = -VAR_4;
  goto out;
 }

 if (!FUNC_14(&VAR_21->remote_addr)) {
  VAR_24 = -VAR_1;
  goto out;
 }


 VAR_23 = FUNC_8(VAR_20, VAR_18->msg_flags & VAR_7);

 VAR_24 = VAR_14->notify_send_init(VAR_21, &VAR_25);
 if (VAR_24 < 0)
  goto out;

 while (VAR_22 < VAR_19) {
  ssize_t VAR_26;

  FUNC_1(FUNC_6(VAR_20), &VAR_15);
  while (FUNC_16(VAR_21) == 0 &&
         VAR_20->sk_err == 0 &&
         !(VAR_20->sk_shutdown & VAR_10) &&
         !(VAR_21->peer_shutdown & VAR_9)) {


   if (VAR_23 == 0) {
    VAR_24 = -VAR_0;
    FUNC_4(FUNC_6(VAR_20), &VAR_15);
    goto out_err;
   }

   VAR_24 = VAR_14->notify_send_pre_block(VAR_21, &VAR_25);
   if (VAR_24 < 0) {
    FUNC_4(FUNC_6(VAR_20), &VAR_15);
    goto out_err;
   }

   FUNC_3(VAR_20);
   VAR_23 = FUNC_17(&VAR_15, VAR_11, VAR_23);
   FUNC_2(VAR_20);
   if (FUNC_5(VAR_13)) {
    VAR_24 = FUNC_7(VAR_23);
    FUNC_4(FUNC_6(VAR_20), &VAR_15);
    goto out_err;
   } else if (VAR_23 == 0) {
    VAR_24 = -VAR_0;
    FUNC_4(FUNC_6(VAR_20), &VAR_15);
    goto out_err;
   }
  }
  FUNC_4(FUNC_6(VAR_20), &VAR_15);





  if (VAR_20->sk_err) {
   VAR_24 = -VAR_20->sk_err;
   goto out_err;
  } else if ((VAR_20->sk_shutdown & VAR_10) ||
      (VAR_21->peer_shutdown & VAR_9)) {
   VAR_24 = -VAR_6;
   goto out_err;
  }

  VAR_24 = VAR_14->notify_send_pre_enqueue(VAR_21, &VAR_25);
  if (VAR_24 < 0)
   goto out_err;







  VAR_26 = VAR_14->stream_enqueue(
    VAR_21, VAR_18,
    VAR_19 - VAR_22);
  if (VAR_26 < 0) {
   VAR_24 = -VAR_3;
   goto out_err;
  }

  VAR_22 += VAR_26;

  VAR_24 = VAR_14->notify_send_post_enqueue(
    VAR_21, VAR_26, &VAR_25);
  if (VAR_24 < 0)
   goto out_err;

 }

out_err:
 if (VAR_22 > 0)
  VAR_24 = VAR_22;
out:
 FUNC_3(VAR_20);
 return VAR_24;
}

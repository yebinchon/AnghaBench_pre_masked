
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vsock_sock {int peer_shutdown; } ;
struct socket {scalar_t__ type; struct sock* sk; } ;
struct sock {int sk_shutdown; scalar_t__ sk_state; int sk_receive_queue; scalar_t__ sk_err; } ;
struct file {int dummy; } ;
typedef int poll_table ;
typedef int __poll_t ;
struct TYPE_2__ {int (* notify_poll_in ) (struct vsock_sock*,int,int*) ;int (* notify_poll_out ) (struct vsock_sock*,int,int*) ;scalar_t__ (* stream_is_active ) (struct vsock_sock*) ;} ;


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
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct file*,int ,int *) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct vsock_sock*) ;
 int FUNC_6 (struct vsock_sock*,int,int*) ;
 int FUNC_7 (struct vsock_sock*,int,int*) ;
 TYPE_1__* VAR_17 ;
 int FUNC_8 (struct sock*) ;
 struct vsock_sock* FUNC_9 (struct sock*) ;

__attribute__((used)) static __poll_t FUNC_10(struct file *VAR_18, struct socket *VAR_19,
          poll_table *VAR_20)
{
 struct sock *VAR_21;
 __poll_t VAR_22;
 struct vsock_sock *VAR_23;

 VAR_21 = VAR_19->sk;
 VAR_23 = FUNC_9(VAR_21);

 FUNC_1(VAR_18, FUNC_3(VAR_21), VAR_20);
 VAR_22 = 0;

 if (VAR_21->sk_err)

  VAR_22 |= VAR_0;




 if ((VAR_21->sk_shutdown == VAR_10) ||
     ((VAR_21->sk_shutdown & VAR_9) &&
      (VAR_23->peer_shutdown & VAR_9))) {
  VAR_22 |= VAR_1;
 }

 if (VAR_21->sk_shutdown & VAR_8 ||
     VAR_23->peer_shutdown & VAR_9) {
  VAR_22 |= VAR_4;
 }

 if (VAR_19->type == VAR_11) {




  if (!FUNC_4(&VAR_21->sk_receive_queue) ||
      (VAR_21->sk_shutdown & VAR_8)) {
   VAR_22 |= VAR_2 | VAR_5;
  }

  if (!(VAR_21->sk_shutdown & VAR_9))
   VAR_22 |= VAR_3 | VAR_7 | VAR_6;

 } else if (VAR_19->type == VAR_12) {
  FUNC_0(VAR_21);




  if (VAR_21->sk_state == VAR_16
      && !FUNC_8(VAR_21))
   VAR_22 |= VAR_2 | VAR_5;


  if (VAR_17->stream_is_active(VAR_23) &&
      !(VAR_21->sk_shutdown & VAR_8)) {
   bool VAR_24 = 0;
   int VAR_25 = VAR_17->notify_poll_in(
     VAR_23, 1, &VAR_24);
   if (VAR_25 < 0) {
    VAR_22 |= VAR_0;
   } else {
    if (VAR_24)
     VAR_22 |= VAR_2 | VAR_5;

   }
  }





  if (VAR_21->sk_shutdown & VAR_8 ||
      VAR_23->peer_shutdown & VAR_9) {
   VAR_22 |= VAR_2 | VAR_5;
  }


  if (VAR_21->sk_state == VAR_15) {
   if (!(VAR_21->sk_shutdown & VAR_9)) {
    bool VAR_26 = 0;
    int VAR_27 = VAR_17->notify_poll_out(
      VAR_23, 1, &VAR_26);
    if (VAR_27 < 0) {
     VAR_22 |= VAR_0;
    } else {
     if (VAR_26)



      VAR_22 |= VAR_3 | VAR_7;

    }
   }
  }





  if (VAR_21->sk_state == VAR_13 || VAR_21->sk_state == VAR_14) {
   if (!(VAR_21->sk_shutdown & VAR_9))
    VAR_22 |= VAR_3 | VAR_7;

  }

  FUNC_2(VAR_21);
 }

 return VAR_22;
}

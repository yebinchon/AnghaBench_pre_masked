
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tcp_sock {int urg_data; int copied_seq; int urg_seq; int fastopen_rsk; } ;
struct socket {struct sock* sk; } ;
struct sock {int sk_shutdown; int sk_error_queue; scalar_t__ sk_err; TYPE_1__* sk_socket; } ;
struct file {int dummy; } ;
typedef int poll_table ;
typedef int __poll_t ;
struct TYPE_4__ {scalar_t__ defer_connect; } ;
struct TYPE_3__ {int flags; } ;


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
 scalar_t__ FUNC_0 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_1 (struct sock*) ;
 TYPE_2__* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ,struct sock*) ;
 scalar_t__ FUNC_7 (struct sock*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (struct sock*,int ) ;
 int FUNC_12 (struct file*,struct socket*,int *) ;
 int FUNC_13 (struct sock*,int ,int ) ;
 struct tcp_sock* FUNC_14 (struct sock*) ;
 scalar_t__ FUNC_15 (struct tcp_sock const*,int,struct sock*) ;

__poll_t FUNC_16(struct file *VAR_20, struct socket *VAR_21, poll_table *VAR_22)
{
 __poll_t VAR_23;
 struct sock *VAR_24 = VAR_21->sk;
 const struct tcp_sock *VAR_25 = FUNC_14(VAR_24);
 int VAR_26;

 FUNC_12(VAR_20, VAR_21, VAR_22);

 VAR_26 = FUNC_3(VAR_24);
 if (VAR_26 == VAR_16)
  return FUNC_1(VAR_24);






 VAR_23 = 0;
 if (VAR_24->sk_shutdown == VAR_11 || VAR_26 == VAR_15)
  VAR_23 |= VAR_1;
 if (VAR_24->sk_shutdown & VAR_9)
  VAR_23 |= VAR_2 | VAR_6 | VAR_5;


 if (VAR_26 != VAR_18 &&
     (VAR_26 != VAR_17 || FUNC_4(VAR_25->fastopen_rsk))) {
  int VAR_27 = FUNC_13(VAR_24, 0, VAR_8);

  if (FUNC_0(VAR_25->urg_seq) == FUNC_0(VAR_25->copied_seq) &&
      !FUNC_11(VAR_24, VAR_14) &&
      VAR_25->urg_data)
   VAR_27++;

  if (FUNC_15(VAR_25, VAR_27, VAR_24))
   VAR_23 |= VAR_2 | VAR_6;

  if (!(VAR_24->sk_shutdown & VAR_10)) {
   if (FUNC_7(VAR_24)) {
    VAR_23 |= VAR_3 | VAR_7;
   } else {
    FUNC_6(VAR_12, VAR_24);
    FUNC_5(VAR_13, &VAR_24->sk_socket->flags);






    FUNC_9();
    if (FUNC_7(VAR_24))
     VAR_23 |= VAR_3 | VAR_7;
   }
  } else
   VAR_23 |= VAR_3 | VAR_7;

  if (VAR_25->urg_data & VAR_19)
   VAR_23 |= VAR_4;
 } else if (VAR_26 == VAR_18 && FUNC_2(VAR_24)->defer_connect) {




  VAR_23 |= VAR_3 | VAR_7;
 }

 FUNC_10();
 if (VAR_24->sk_err || !FUNC_8(&VAR_24->sk_error_queue))
  VAR_23 |= VAR_0;

 return VAR_23;
}

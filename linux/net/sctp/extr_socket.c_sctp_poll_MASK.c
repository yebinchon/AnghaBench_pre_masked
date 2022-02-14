
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {int sk_shutdown; int sk_receive_queue; int sk_error_queue; scalar_t__ sk_err; } ;
struct sctp_sock {TYPE_1__* ep; } ;
struct file {int dummy; } ;
typedef int poll_table ;
typedef int __poll_t ;
struct TYPE_2__ {int asocs; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct file*,int ,int *) ;
 struct sctp_sock* FUNC_2 (struct sock*) ;
 scalar_t__ FUNC_3 (struct sock*,int ) ;
 scalar_t__ FUNC_4 (struct sock*,int ) ;
 scalar_t__ FUNC_5 (struct sock*) ;
 int FUNC_6 (int ,struct sock*) ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (struct sock*,int ) ;
 int FUNC_10 (struct sock*) ;

__poll_t FUNC_11(struct file *VAR_16, struct socket *VAR_17, poll_table *VAR_18)
{
 struct sock *VAR_19 = VAR_17->sk;
 struct sctp_sock *VAR_20 = FUNC_2(VAR_19);
 __poll_t VAR_21;

 FUNC_1(VAR_16, FUNC_7(VAR_19), VAR_18);

 FUNC_10(VAR_19);




 if (FUNC_4(VAR_19, VAR_14) && FUNC_3(VAR_19, VAR_9))
  return (!FUNC_0(&VAR_20->ep->asocs)) ?
   (VAR_3 | VAR_7) : 0;

 VAR_21 = 0;


 if (VAR_19->sk_err || !FUNC_8(&VAR_19->sk_error_queue))
  VAR_21 |= VAR_1 |
   (FUNC_9(VAR_19, VAR_13) ? VAR_5 : 0);
 if (VAR_19->sk_shutdown & VAR_10)
  VAR_21 |= VAR_6 | VAR_3 | VAR_7;
 if (VAR_19->sk_shutdown == VAR_11)
  VAR_21 |= VAR_2;


 if (!FUNC_8(&VAR_19->sk_receive_queue))
  VAR_21 |= VAR_3 | VAR_7;


 if (!FUNC_4(VAR_19, VAR_15) && FUNC_3(VAR_19, VAR_0))
  return VAR_21;


 if (FUNC_5(VAR_19)) {
  VAR_21 |= VAR_4 | VAR_8;
 } else {
  FUNC_6(VAR_12, VAR_19);
  if (FUNC_5(VAR_19))
   VAR_21 |= VAR_4 | VAR_8;
 }
 return VAR_21;
}

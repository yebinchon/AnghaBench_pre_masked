
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {int sk_shutdown; scalar_t__ sk_state; int sk_receive_queue; int sk_error_queue; scalar_t__ sk_err; } ;
struct file {int dummy; } ;
typedef int poll_table ;
typedef int __poll_t ;


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
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_0 (struct sock*) ;
 int FUNC_1 (int ,struct sock*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct sock*,int ) ;
 int FUNC_4 (struct file*,struct socket*,int *) ;
 scalar_t__ FUNC_5 (struct sock*) ;

__poll_t FUNC_6(struct file *VAR_15, struct socket *VAR_16,
      poll_table *VAR_17)
{
 struct sock *VAR_18 = VAR_16->sk;
 __poll_t VAR_19;

 FUNC_4(VAR_15, VAR_16, VAR_17);
 VAR_19 = 0;


 if (VAR_18->sk_err || !FUNC_2(&VAR_18->sk_error_queue))
  VAR_19 |= VAR_0 |
   (FUNC_3(VAR_18, VAR_12) ? VAR_4 : 0);

 if (VAR_18->sk_shutdown & VAR_9)
  VAR_19 |= VAR_5 | VAR_2 | VAR_6;
 if (VAR_18->sk_shutdown == VAR_10)
  VAR_19 |= VAR_1;


 if (!FUNC_2(&VAR_18->sk_receive_queue))
  VAR_19 |= VAR_2 | VAR_6;


 if (FUNC_0(VAR_18)) {
  if (VAR_18->sk_state == VAR_13)
   VAR_19 |= VAR_1;

  if (VAR_18->sk_state == VAR_14)
   return VAR_19;
 }


 if (FUNC_5(VAR_18))
  VAR_19 |= VAR_3 | VAR_8 | VAR_7;
 else
  FUNC_1(VAR_11, VAR_18);

 return VAR_19;
}

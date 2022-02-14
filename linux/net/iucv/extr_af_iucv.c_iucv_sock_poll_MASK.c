
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {scalar_t__ sk_state; int sk_shutdown; int sk_receive_queue; int sk_error_queue; scalar_t__ sk_err; } ;
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
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (struct sock*) ;
 scalar_t__ FUNC_1 (struct sock*) ;
 int FUNC_2 (int ,struct sock*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct sock*,int ) ;
 int FUNC_5 (struct file*,struct socket*,int *) ;
 scalar_t__ FUNC_6 (struct sock*) ;

__poll_t FUNC_7(struct file *VAR_16, struct socket *VAR_17,
       poll_table *VAR_18)
{
 struct sock *VAR_19 = VAR_17->sk;
 __poll_t VAR_20 = 0;

 FUNC_5(VAR_16, VAR_17, VAR_18);

 if (VAR_19->sk_state == VAR_11)
  return FUNC_0(VAR_19);

 if (VAR_19->sk_err || !FUNC_3(&VAR_19->sk_error_queue))
  VAR_20 |= VAR_0 |
   (FUNC_4(VAR_19, VAR_15) ? VAR_4 : 0);

 if (VAR_19->sk_shutdown & VAR_12)
  VAR_20 |= VAR_5;

 if (VAR_19->sk_shutdown == VAR_13)
  VAR_20 |= VAR_1;

 if (!FUNC_3(&VAR_19->sk_receive_queue) ||
     (VAR_19->sk_shutdown & VAR_12))
  VAR_20 |= VAR_2 | VAR_6;

 if (VAR_19->sk_state == VAR_9)
  VAR_20 |= VAR_1;

 if (VAR_19->sk_state == VAR_10)
  VAR_20 |= VAR_2;

 if (FUNC_6(VAR_19) && FUNC_1(VAR_19))
  VAR_20 |= VAR_3 | VAR_8 | VAR_7;
 else
  FUNC_2(VAR_14, VAR_19);

 return VAR_20;
}

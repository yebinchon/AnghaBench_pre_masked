
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {struct sock* sk; } ;
struct sock {scalar_t__ sk_state; int sk_shutdown; int sk_receive_queue; int sk_error_queue; scalar_t__ sk_err; } ;
struct file {int dummy; } ;
typedef int poll_table ;
typedef int __poll_t ;
struct TYPE_2__ {int flags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*,struct socket*,struct sock*) ;
 scalar_t__ VAR_4 ;
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
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_1 (struct sock*) ;
 TYPE_1__* FUNC_2 (struct sock*) ;
 int FUNC_3 (struct file*,int ,int *) ;
 int FUNC_4 (int ,struct sock*) ;
 int FUNC_5 (struct sock*) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (struct sock*,int ) ;
 scalar_t__ FUNC_8 (struct sock*) ;
 int FUNC_9 (int ,int *) ;

__poll_t FUNC_10(struct file *VAR_19, struct socket *VAR_20,
     poll_table *VAR_21)
{
 struct sock *VAR_22 = VAR_20->sk;
 __poll_t VAR_23 = 0;

 FUNC_0("sock %p, sk %p", VAR_20, VAR_22);

 FUNC_3(VAR_19, FUNC_5(VAR_22), VAR_21);

 if (VAR_22->sk_state == VAR_4)
  return FUNC_1(VAR_22);

 if (VAR_22->sk_err || !FUNC_6(&VAR_22->sk_error_queue))
  VAR_23 |= VAR_6 |
   (FUNC_7(VAR_22, VAR_18) ? VAR_10 : 0);

 if (VAR_22->sk_shutdown & VAR_15)
  VAR_23 |= VAR_11 | VAR_8 | VAR_12;

 if (VAR_22->sk_shutdown == VAR_16)
  VAR_23 |= VAR_7;

 if (!FUNC_6(&VAR_22->sk_receive_queue))
  VAR_23 |= VAR_8 | VAR_12;

 if (VAR_22->sk_state == VAR_0)
  VAR_23 |= VAR_7;

 if (VAR_22->sk_state == VAR_2 ||
   VAR_22->sk_state == VAR_3 ||
   VAR_22->sk_state == VAR_1)
  return VAR_23;

 if (!FUNC_9(VAR_5, &FUNC_2(VAR_22)->flags) && FUNC_8(VAR_22))
  VAR_23 |= VAR_9 | VAR_14 | VAR_13;
 else
  FUNC_4(VAR_17, VAR_22);

 return VAR_23;
}

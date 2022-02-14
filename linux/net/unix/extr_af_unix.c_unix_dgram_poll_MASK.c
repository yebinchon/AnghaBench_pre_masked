
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {int sk_shutdown; scalar_t__ sk_type; scalar_t__ sk_state; int sk_receive_queue; int sk_error_queue; scalar_t__ sk_err; } ;
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
 scalar_t__ VAR_15 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct sock*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct sock*,int ) ;
 int FUNC_4 (struct file*,struct socket*,int *) ;
 scalar_t__ FUNC_5 (struct sock*,struct sock*) ;
 struct sock* FUNC_6 (struct sock*) ;
 scalar_t__ FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*) ;
 unsigned int FUNC_10 (struct sock*) ;

__attribute__((used)) static __poll_t FUNC_11(struct file *VAR_16, struct socket *VAR_17,
        poll_table *VAR_18)
{
 struct sock *VAR_19 = VAR_17->sk, *VAR_20;
 unsigned int VAR_21;
 __poll_t VAR_22;

 FUNC_4(VAR_16, VAR_17, VAR_18);
 VAR_22 = 0;


 if (VAR_19->sk_err || !FUNC_2(&VAR_19->sk_error_queue))
  VAR_22 |= VAR_0 |
   (FUNC_3(VAR_19, VAR_12) ? VAR_4 : 0);

 if (VAR_19->sk_shutdown & VAR_9)
  VAR_22 |= VAR_5 | VAR_2 | VAR_6;
 if (VAR_19->sk_shutdown == VAR_10)
  VAR_22 |= VAR_1;


 if (!FUNC_2(&VAR_19->sk_receive_queue))
  VAR_22 |= VAR_2 | VAR_6;


 if (VAR_19->sk_type == VAR_13) {
  if (VAR_19->sk_state == VAR_14)
   VAR_22 |= VAR_1;

  if (VAR_19->sk_state == VAR_15)
   return VAR_22;
 }


 if (!(FUNC_0(VAR_18) & (VAR_7|VAR_8|VAR_3)))
  return VAR_22;

 VAR_21 = FUNC_10(VAR_19);
 if (VAR_21) {
  FUNC_8(VAR_19);

  VAR_20 = FUNC_6(VAR_19);
  if (VAR_20 && FUNC_6(VAR_20) != VAR_19 &&
      FUNC_7(VAR_20) &&
      FUNC_5(VAR_19, VAR_20))
   VAR_21 = 0;

  FUNC_9(VAR_19);
 }

 if (VAR_21)
  VAR_22 |= VAR_3 | VAR_8 | VAR_7;
 else
  FUNC_1(VAR_11, VAR_19);

 return VAR_22;
}

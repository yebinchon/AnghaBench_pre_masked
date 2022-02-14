
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {scalar_t__ state; struct sock* sk; } ;
struct sock {scalar_t__ sk_type; int sk_shutdown; int (* sk_state_change ) (struct sock*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,int ) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*,int) ;

__attribute__((used)) static int FUNC_5(struct socket *VAR_9, int VAR_10)
{
 int VAR_11;
 struct sock *VAR_12;







 VAR_10++;

 if ((VAR_10 & ~VAR_4) || !VAR_10)
  return -VAR_0;







 VAR_12 = VAR_9->sk;
 if (VAR_9->state == VAR_8) {
  VAR_11 = -VAR_1;
  if (VAR_12->sk_type == VAR_6)
   return VAR_11;
 } else {
  VAR_9->state = VAR_7;
  VAR_11 = 0;
 }


 VAR_10 = VAR_10 & (VAR_2 | VAR_3);
 if (VAR_10) {
  FUNC_0(VAR_12);
  VAR_12->sk_shutdown |= VAR_10;
  VAR_12->sk_state_change(VAR_12);
  FUNC_1(VAR_12);

  if (VAR_12->sk_type == VAR_6) {
   FUNC_2(VAR_12, VAR_5);
   FUNC_4(VAR_12, VAR_10);
  }
 }

 return VAR_11;
}

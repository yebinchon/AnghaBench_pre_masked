
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {struct sock* sk; } ;
struct sock {struct sk_security_struct* sk_security; } ;
struct sk_security_struct {scalar_t__ nlbl_state; } ;
struct netlbl_lsm_secattr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct netlbl_lsm_secattr*) ;
 int FUNC_2 (struct netlbl_lsm_secattr*) ;
 int FUNC_3 (struct sock*,struct netlbl_lsm_secattr*) ;
 int FUNC_4 (struct sock*) ;
 scalar_t__ FUNC_5 (int,int) ;

int FUNC_6(struct socket *VAR_4,
         int VAR_5,
         int VAR_6)
{
 int VAR_7 = 0;
 struct sock *VAR_8 = VAR_4->sk;
 struct sk_security_struct *VAR_9 = VAR_8->sk_security;
 struct netlbl_lsm_secattr VAR_10;

 if (FUNC_5(VAR_5, VAR_6) &&
     (VAR_9->nlbl_state == VAR_3 ||
      VAR_9->nlbl_state == VAR_2)) {
  FUNC_2(&VAR_10);
  FUNC_0(VAR_8);



  VAR_7 = FUNC_3(VAR_8, &VAR_10);
  FUNC_4(VAR_8);
  if (VAR_7 == 0)
   VAR_7 = -VAR_0;
  else if (VAR_7 == -VAR_1)
   VAR_7 = 0;
  FUNC_1(&VAR_10);
 }

 return VAR_7;
}

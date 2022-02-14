
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {int dummy; } ;
struct sock {struct sk_security_struct* sk_security; } ;
struct sk_security_struct {scalar_t__ nlbl_state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sock*,struct sockaddr*) ;

int FUNC_1(struct sock *VAR_2,
      struct sockaddr *VAR_3)
{
 struct sk_security_struct *VAR_4 = VAR_2->sk_security;

 if (VAR_4->nlbl_state != VAR_1 &&
     VAR_4->nlbl_state != VAR_0)
  return 0;

 return FUNC_0(VAR_2, VAR_3);
}

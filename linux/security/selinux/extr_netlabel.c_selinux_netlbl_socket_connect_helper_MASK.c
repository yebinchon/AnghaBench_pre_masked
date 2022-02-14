
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {scalar_t__ sa_family; } ;
struct sock {struct sk_security_struct* sk_security; } ;
struct sk_security_struct {int nlbl_state; } ;
struct netlbl_lsm_secattr {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sock*,struct sockaddr*,struct netlbl_lsm_secattr*) ;
 int FUNC_1 (struct sock*) ;
 struct netlbl_lsm_secattr* FUNC_2 (struct sock*) ;

__attribute__((used)) static int FUNC_3(struct sock *VAR_4,
      struct sockaddr *VAR_5)
{
 int VAR_6;
 struct sk_security_struct *VAR_7 = VAR_4->sk_security;
 struct netlbl_lsm_secattr *VAR_8;




 if (VAR_5->sa_family == VAR_0) {
  FUNC_1(VAR_4);
  VAR_7->nlbl_state = VAR_3;
  VAR_6 = 0;
  return VAR_6;
 }
 VAR_8 = FUNC_2(VAR_4);
 if (VAR_8 == ((void*)0)) {
  VAR_6 = -VAR_1;
  return VAR_6;
 }
 VAR_6 = FUNC_0(VAR_4, VAR_5, VAR_8);
 if (VAR_6 == 0)
  VAR_7->nlbl_state = VAR_2;

 return VAR_6;
}

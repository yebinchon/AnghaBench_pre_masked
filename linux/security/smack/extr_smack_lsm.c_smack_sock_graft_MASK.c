
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_smack {struct smack_known* smk_out; struct smack_known* smk_in; } ;
struct socket {int dummy; } ;
struct sock {scalar_t__ sk_family; struct socket_smack* sk_security; } ;
struct smack_known {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct smack_known* FUNC_0 () ;

__attribute__((used)) static void FUNC_1(struct sock *VAR_2, struct socket *VAR_3)
{
 struct socket_smack *VAR_4;
 struct smack_known *VAR_5 = FUNC_0();

 if (VAR_2 == ((void*)0) ||
     (VAR_2->sk_family != VAR_0 && VAR_2->sk_family != VAR_1))
  return;

 VAR_4 = VAR_2->sk_security;
 VAR_4->smk_in = VAR_5;
 VAR_4->smk_out = VAR_5;

}

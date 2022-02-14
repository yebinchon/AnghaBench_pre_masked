
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_smack {struct smack_known* smk_packet; } ;
struct sock {struct socket_smack* sk_security; } ;
struct smack_known {int dummy; } ;
struct request_sock {scalar_t__ peer_secid; } ;


 struct smack_known* FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct sock *VAR_0,
     const struct request_sock *VAR_1)
{
 struct socket_smack *VAR_2 = VAR_0->sk_security;
 struct smack_known *VAR_3;

 if (VAR_1->peer_secid != 0) {
  VAR_3 = FUNC_0(VAR_1->peer_secid);
  VAR_2->smk_packet = VAR_3;
 } else
  VAR_2->smk_packet = ((void*)0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket_smack {struct smack_known* smk_out; } ;
struct sock {struct socket_smack* sk_security; } ;
struct smack_known {int smk_secid; } ;
struct sk_buff {int secmark; } ;
struct nf_hook_state {int dummy; } ;


 unsigned int VAR_0 ;
 struct sock* FUNC_0 (struct sk_buff*) ;

__attribute__((used)) static unsigned int FUNC_1(void *VAR_1,
     struct sk_buff *VAR_2,
     const struct nf_hook_state *VAR_3)
{
 struct sock *VAR_4 = FUNC_0(VAR_2);
 struct socket_smack *VAR_5;
 struct smack_known *VAR_6;

 if (VAR_4 && VAR_4->sk_security) {
  VAR_5 = VAR_4->sk_security;
  VAR_6 = VAR_5->smk_out;
  VAR_2->secmark = VAR_6->smk_secid;
 }

 return VAR_0;
}

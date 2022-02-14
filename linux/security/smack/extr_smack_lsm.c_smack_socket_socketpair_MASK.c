
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket_smack {int smk_out; int smk_packet; } ;
struct socket {TYPE_1__* sk; } ;
struct TYPE_2__ {struct socket_smack* sk_security; } ;



__attribute__((used)) static int FUNC_0(struct socket *VAR_0,
                     struct socket *VAR_1)
{
 struct socket_smack *VAR_2 = VAR_0->sk->sk_security;
 struct socket_smack *VAR_3 = VAR_1->sk->sk_security;

 VAR_2->smk_packet = VAR_3->smk_out;
 VAR_3->smk_packet = VAR_2->smk_out;

 return 0;
}

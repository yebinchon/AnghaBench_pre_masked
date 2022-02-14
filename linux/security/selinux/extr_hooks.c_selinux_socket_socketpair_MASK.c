
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {TYPE_1__* sk; } ;
struct sk_security_struct {int sid; int peer_sid; } ;
struct TYPE_2__ {struct sk_security_struct* sk_security; } ;



__attribute__((used)) static int FUNC_0(struct socket *VAR_0,
         struct socket *VAR_1)
{
 struct sk_security_struct *VAR_2 = VAR_0->sk->sk_security;
 struct sk_security_struct *VAR_3 = VAR_1->sk->sk_security;

 VAR_2->peer_sid = VAR_3->sid;
 VAR_3->peer_sid = VAR_2->sid;

 return 0;
}

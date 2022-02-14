
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {struct sk_security_struct* sk_security; } ;
struct sk_security_struct {int sclass; int peer_sid; int sid; } ;


 int FUNC_0 (struct sk_security_struct*) ;

__attribute__((used)) static void FUNC_1(const struct sock *VAR_0, struct sock *VAR_1)
{
 struct sk_security_struct *VAR_2 = VAR_0->sk_security;
 struct sk_security_struct *VAR_3 = VAR_1->sk_security;

 VAR_3->sid = VAR_2->sid;
 VAR_3->peer_sid = VAR_2->peer_sid;
 VAR_3->sclass = VAR_2->sclass;

 FUNC_0(VAR_3);
}

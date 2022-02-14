
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {struct sk_security_struct* sk_security; } ;
struct sk_security_struct {int nlbl_state; } ;



void FUNC_0(struct sock *VAR_0, struct sock *VAR_1)
{
 struct sk_security_struct *VAR_2 = VAR_0->sk_security;
 struct sk_security_struct *VAR_3 = VAR_1->sk_security;

 VAR_3->nlbl_state = VAR_2->nlbl_state;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tun_security_struct {int sid; } ;
struct sock {struct sk_security_struct* sk_security; } ;
struct sk_security_struct {int sclass; int sid; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct sock *VAR_1, void *VAR_2)
{
 struct tun_security_struct *VAR_3 = VAR_2;
 struct sk_security_struct *VAR_4 = VAR_1->sk_security;
 VAR_4->sid = VAR_3->sid;
 VAR_4->sclass = VAR_0;

 return 0;
}

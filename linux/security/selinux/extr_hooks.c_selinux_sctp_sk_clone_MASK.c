
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {struct sk_security_struct* sk_security; } ;
struct sk_security_struct {int sclass; int peer_sid; int sid; } ;
struct sctp_endpoint {int peer_secid; int secid; } ;


 int FUNC_0 (struct sock*,struct sock*) ;
 int FUNC_1 () ;
 void FUNC_2 (struct sock*,struct sock*) ;

__attribute__((used)) static void FUNC_3(struct sctp_endpoint *VAR_0, struct sock *VAR_1,
      struct sock *VAR_2)
{
 struct sk_security_struct *VAR_3 = VAR_1->sk_security;
 struct sk_security_struct *VAR_4 = VAR_2->sk_security;




 if (!FUNC_1())
  return FUNC_2(VAR_1, VAR_2);

 VAR_4->sid = VAR_0->secid;
 VAR_4->peer_sid = VAR_0->peer_secid;
 VAR_4->sclass = VAR_3->sclass;
 FUNC_0(VAR_1, VAR_2);
}

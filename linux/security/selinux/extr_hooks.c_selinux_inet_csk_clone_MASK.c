
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {struct sk_security_struct* sk_security; } ;
struct sk_security_struct {int peer_sid; int sid; } ;
struct request_sock {TYPE_1__* rsk_ops; int peer_secid; int secid; } ;
struct TYPE_2__ {int family; } ;


 int FUNC_0 (struct sock*,int ) ;

__attribute__((used)) static void FUNC_1(struct sock *VAR_0,
       const struct request_sock *VAR_1)
{
 struct sk_security_struct *VAR_2 = VAR_0->sk_security;

 VAR_2->sid = VAR_1->secid;
 VAR_2->peer_sid = VAR_1->peer_secid;







 FUNC_0(VAR_0, VAR_1->rsk_ops->family);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {struct proto* sk_prot; } ;
struct proto {int dummy; } ;
struct inet_connection_sock {TYPE_1__* icsk_ulp_ops; } ;
struct TYPE_2__ {int (* update ) (struct sock*,struct proto*) ;} ;


 struct inet_connection_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*,struct proto*) ;

void FUNC_2(struct sock *VAR_0, struct proto *VAR_1)
{
 struct inet_connection_sock *VAR_2 = FUNC_0(VAR_0);

 if (!VAR_2->icsk_ulp_ops) {
  VAR_0->sk_prot = VAR_1;
  return;
 }

 if (VAR_2->icsk_ulp_ops->update)
  VAR_2->icsk_ulp_ops->update(VAR_0, VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sock {int dummy; } ;
struct TYPE_3__ {int policy; } ;
struct TYPE_4__ {TYPE_1__ u; } ;
struct pfkey_sock {TYPE_2__ dump; } ;
struct net {int dummy; } ;


 struct net* FUNC_0 (struct sock*) ;
 int FUNC_1 (int *,struct net*) ;

__attribute__((used)) static void FUNC_2(struct pfkey_sock *VAR_0)
{
 struct net *VAR_1 = FUNC_0((struct sock *)VAR_0);

 FUNC_1(&VAR_0->dump.u.policy, VAR_1);
}

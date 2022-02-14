
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int state; } ;
struct TYPE_4__ {TYPE_1__ u; } ;
struct pfkey_sock {TYPE_2__ dump; int sk; } ;
struct net {int dummy; } ;


 struct net* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct net*) ;

__attribute__((used)) static void FUNC_2(struct pfkey_sock *VAR_0)
{
 struct net *VAR_1 = FUNC_0(&VAR_0->sk);

 FUNC_1(&VAR_0->dump.u.state, VAR_1);
}

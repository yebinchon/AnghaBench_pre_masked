
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct TYPE_2__ {int optlen; } ;
struct ip_options_rcu {TYPE_1__ opt; } ;
struct inet_sock {int inet_opt; } ;


 struct inet_sock* FUNC_0 (struct sock*) ;
 struct ip_options_rcu* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct sock *VAR_0)
{
 struct inet_sock *VAR_1 = FUNC_0(VAR_0);
 struct ip_options_rcu *VAR_2;
 int VAR_3 = 0;

 FUNC_2();
 VAR_2 = FUNC_1(VAR_1->inet_opt);
 if (VAR_2)
  VAR_3 = VAR_2->opt.optlen;

 FUNC_3();
 return VAR_3;
}

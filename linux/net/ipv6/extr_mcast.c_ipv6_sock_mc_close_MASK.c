
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct ipv6_pinfo {int ipv6_mc_list; } ;


 int FUNC_0 (struct sock*) ;
 struct ipv6_pinfo* FUNC_1 (struct sock*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

void FUNC_5(struct sock *VAR_0)
{
 struct ipv6_pinfo *VAR_1 = FUNC_1(VAR_0);

 if (!FUNC_2(VAR_1->ipv6_mc_list))
  return;
 FUNC_3();
 FUNC_0(VAR_0);
 FUNC_4();
}

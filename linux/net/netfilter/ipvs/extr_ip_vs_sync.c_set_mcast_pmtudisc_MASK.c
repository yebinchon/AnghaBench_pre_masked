
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_family; } ;
struct ipv6_pinfo {int pmtudisc; } ;
struct inet_sock {int pmtudisc; } ;


 scalar_t__ VAR_0 ;
 struct ipv6_pinfo* FUNC_0 (struct sock*) ;
 struct inet_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;

__attribute__((used)) static void FUNC_4(struct sock *VAR_1, int VAR_2)
{
 struct inet_sock *VAR_3 = FUNC_1(VAR_1);


 FUNC_2(VAR_1);
 VAR_3->pmtudisc = VAR_2;
 FUNC_3(VAR_1);
}

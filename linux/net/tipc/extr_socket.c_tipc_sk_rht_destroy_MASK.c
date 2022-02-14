
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_net {int sk_rht; } ;
struct net {int dummy; } ;


 struct tipc_net* FUNC_0 (struct net*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int VAR_0 ;

void FUNC_3(struct net *VAR_1)
{
 struct tipc_net *VAR_2 = FUNC_0(VAR_1, VAR_0);


 FUNC_2();

 FUNC_1(&VAR_2->sk_rht);
}

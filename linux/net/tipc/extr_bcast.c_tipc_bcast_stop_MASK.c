
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_net {int bcl; int bcbase; } ;
struct net {int dummy; } ;


 int FUNC_0 (int ) ;
 struct tipc_net* FUNC_1 (struct net*,int ) ;
 int FUNC_2 () ;
 int VAR_0 ;

void FUNC_3(struct net *VAR_1)
{
 struct tipc_net *VAR_2 = FUNC_1(VAR_1, VAR_0);

 FUNC_2();
 FUNC_0(VAR_2->bcbase);
 FUNC_0(VAR_2->bcl);
}

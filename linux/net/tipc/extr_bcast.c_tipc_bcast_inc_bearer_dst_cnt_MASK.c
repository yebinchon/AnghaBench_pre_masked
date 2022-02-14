
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_bc_base {int * dests; } ;
struct net {int dummy; } ;


 struct tipc_bc_base* FUNC_0 (struct net*) ;
 int FUNC_1 (struct net*) ;
 int FUNC_2 (struct net*) ;
 int FUNC_3 (struct net*) ;

void FUNC_4(struct net *VAR_0, int VAR_1)
{
 struct tipc_bc_base *VAR_2 = FUNC_0(VAR_0);

 FUNC_1(VAR_0);
 VAR_2->dests[VAR_1]++;
 FUNC_3(VAR_0);
 FUNC_2(VAR_0);
}

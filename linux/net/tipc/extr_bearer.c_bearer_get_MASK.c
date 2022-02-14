
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_net {int * bearer_list; } ;
struct tipc_bearer {int dummy; } ;
struct net {int dummy; } ;


 struct tipc_bearer* FUNC_0 (int ) ;
 struct tipc_net* FUNC_1 (struct net*) ;

__attribute__((used)) static struct tipc_bearer *FUNC_2(struct net *VAR_0, int VAR_1)
{
 struct tipc_net *VAR_2 = FUNC_1(VAR_0);

 return FUNC_0(VAR_2->bearer_list[VAR_1]);
}

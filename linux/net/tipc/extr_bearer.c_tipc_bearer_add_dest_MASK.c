
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct tipc_net {int * bearer_list; } ;
struct tipc_bearer {int disc; } ;
struct net {int dummy; } ;


 struct tipc_net* FUNC_0 (struct net*,int ) ;
 struct tipc_bearer* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int VAR_0 ;

void FUNC_5(struct net *VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct tipc_net *VAR_4 = FUNC_0(VAR_1, VAR_0);
 struct tipc_bearer *VAR_5;

 FUNC_2();
 VAR_5 = FUNC_1(VAR_4->bearer_list[VAR_2]);
 if (VAR_5)
  FUNC_4(VAR_5->disc);
 FUNC_3();
}

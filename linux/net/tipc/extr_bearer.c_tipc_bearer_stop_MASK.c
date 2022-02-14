
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct tipc_net {int ** bearer_list; } ;
struct tipc_bearer {int dummy; } ;
struct net {int dummy; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct net*,struct tipc_bearer*) ;
 struct tipc_net* FUNC_1 (struct net*,int ) ;
 struct tipc_bearer* FUNC_2 (int *) ;
 int VAR_1 ;

void FUNC_3(struct net *VAR_2)
{
 struct tipc_net *VAR_3 = FUNC_1(VAR_2, VAR_1);
 struct tipc_bearer *VAR_4;
 u32 VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  VAR_4 = FUNC_2(VAR_3->bearer_list[VAR_5]);
  if (VAR_4) {
   FUNC_0(VAR_2, VAR_4);
   VAR_3->bearer_list[VAR_5] = ((void*)0);
  }
 }
}

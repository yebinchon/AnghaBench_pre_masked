
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct tipc_net {int * bearer_list; } ;
struct tipc_bearer {int name; } ;
struct net {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 struct tipc_bearer* FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;
 struct tipc_net* FUNC_2 (struct net*) ;

int FUNC_3(struct net *VAR_2, char *VAR_3, u32 VAR_4)
{
 struct tipc_net *VAR_5 = FUNC_2(VAR_2);
 struct tipc_bearer *VAR_6;

 if (VAR_4 >= VAR_1)
  return -VAR_0;

 VAR_6 = FUNC_0(VAR_5->bearer_list[VAR_4]);
 if (!VAR_6)
  return -VAR_0;

 FUNC_1(VAR_3, VAR_6->name);
 return 0;
}

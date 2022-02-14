
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_node {int dummy; } ;
struct net {int dummy; } ;


 scalar_t__ FUNC_0 (struct net*,int ) ;
 int FUNC_1 (struct tipc_node*) ;
 struct tipc_node* FUNC_2 (struct net*,int ) ;
 int FUNC_3 (struct tipc_node*) ;

bool FUNC_4(struct net *VAR_0, u32 VAR_1)
{
 struct tipc_node *VAR_2;
 bool VAR_3 = 0;

 if (FUNC_0(VAR_0, VAR_1))
  return 1;

 VAR_2 = FUNC_2(VAR_0, VAR_1);
 if (!VAR_2)
  return 0;
 VAR_3 = FUNC_1(VAR_2);
 FUNC_3(VAR_2);
 return VAR_3;
}

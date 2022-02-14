
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_node {int dummy; } ;
struct net {int dummy; } ;
struct list_head {int dummy; } ;


 scalar_t__ FUNC_0 (struct net*,int ) ;
 int FUNC_1 (struct list_head*) ;
 int FUNC_2 (char*,int ) ;
 struct tipc_node* FUNC_3 (struct net*,int ) ;
 int FUNC_4 (struct tipc_node*) ;
 int FUNC_5 (struct tipc_node*) ;
 int FUNC_6 (struct tipc_node*) ;

void FUNC_7(struct net *VAR_0, struct list_head *VAR_1, u32 VAR_2)
{
 struct tipc_node *VAR_3;

 if (FUNC_0(VAR_0, VAR_2))
  return;

 VAR_3 = FUNC_3(VAR_0, VAR_2);
 if (!VAR_3) {
  FUNC_2("Node unsubscribe rejected, unknown node 0x%x\n", VAR_2);
  return;
 }
 FUNC_5(VAR_3);
 FUNC_1(VAR_1);
 FUNC_6(VAR_3);
 FUNC_4(VAR_3);
}

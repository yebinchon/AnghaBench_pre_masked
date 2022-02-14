
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_net {int nametbl_lock; } ;
struct publication {int key; int port; int node; int lower; int type; int binding_node; int upper; } ;
struct net {int dummy; } ;


 int FUNC_0 (struct publication*,int ) ;
 int FUNC_1 (char*,int ,int ,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct publication* FUNC_4 (struct net*,int ,int ,int ,int ,int ) ;
 struct tipc_net* FUNC_5 (struct net*) ;
 int FUNC_6 (struct net*,int *,int ) ;

__attribute__((used)) static void FUNC_7(struct net *VAR_1, struct publication *VAR_2, u32 VAR_3)
{
 struct tipc_net *VAR_4 = FUNC_5(VAR_1);
 struct publication *VAR_5;

 FUNC_2(&VAR_4->nametbl_lock);
 VAR_5 = FUNC_4(VAR_1, VAR_2->type, VAR_2->lower, VAR_2->upper,
         VAR_2->node, VAR_2->key);
 if (VAR_5)
  FUNC_6(VAR_1, &VAR_5->binding_node, VAR_3);
 FUNC_3(&VAR_4->nametbl_lock);

 if (VAR_5 != VAR_2) {
  FUNC_1("Unable to remove publication from failed node\n"
         " (type=%u, lower=%u, node=0x%x, port=%u, key=%u)\n",
         VAR_2->type, VAR_2->lower, VAR_2->node, VAR_2->port,
         VAR_2->key);
 }

 if (VAR_5)
  FUNC_0(VAR_5, VAR_0);
}

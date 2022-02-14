
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_net {int nametbl_lock; struct name_table* nametbl; } ;
struct net {int dummy; } ;
struct name_table {int cluster_scope_lock; int cluster_scope; int node_scope; int * services; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 struct name_table* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct tipc_net* FUNC_5 (struct net*) ;

int FUNC_6(struct net *VAR_3)
{
 struct tipc_net *VAR_4 = FUNC_5(VAR_3);
 struct name_table *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++)
  FUNC_0(&VAR_5->services[VAR_6]);

 FUNC_1(&VAR_5->node_scope);
 FUNC_1(&VAR_5->cluster_scope);
 FUNC_3(&VAR_5->cluster_scope_lock);
 VAR_4->nametbl = VAR_5;
 FUNC_4(&VAR_4->nametbl_lock);
 return 0;
}

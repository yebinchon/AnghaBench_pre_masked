
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct publication {scalar_t__ scope; int binding_node; } ;
struct net {int dummy; } ;
struct name_table {int cluster_scope_lock; int cluster_scope; int node_scope; } ;
struct distr_item {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int ) ;
 struct sk_buff* FUNC_4 (struct net*,int ,int ,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct distr_item*,struct publication*) ;
 struct name_table* FUNC_7 (struct net*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

struct sk_buff *FUNC_10(struct net *VAR_3, struct publication *VAR_4)
{
 struct name_table *VAR_5 = FUNC_7(VAR_3);
 struct distr_item *VAR_6;
 struct sk_buff *VAR_7;

 if (VAR_4->scope == VAR_2) {
  FUNC_2(&VAR_4->binding_node, &VAR_5->node_scope);
  return ((void*)0);
 }
 FUNC_8(&VAR_5->cluster_scope_lock);
 FUNC_1(&VAR_4->binding_node, &VAR_5->cluster_scope);
 FUNC_9(&VAR_5->cluster_scope_lock);
 VAR_7 = FUNC_4(VAR_3, VAR_1, VAR_0, 0);
 if (!VAR_7) {
  FUNC_5("Publication distribution failure\n");
  return ((void*)0);
 }

 VAR_6 = (struct distr_item *)FUNC_3(FUNC_0(VAR_7));
 FUNC_6(VAR_6, VAR_4);
 return VAR_7;
}

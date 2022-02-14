
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct publication {scalar_t__ scope; int binding_node; } ;
struct net {int dummy; } ;
struct name_table {int cluster_scope_lock; } ;
struct distr_item {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 struct sk_buff* FUNC_3 (struct net*,int ,int ,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct distr_item*,struct publication*) ;
 struct name_table* FUNC_6 (struct net*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

struct sk_buff *FUNC_9(struct net *VAR_3, struct publication *VAR_4)
{
 struct name_table *VAR_5 = FUNC_6(VAR_3);
 struct sk_buff *VAR_6;
 struct distr_item *VAR_7;

 FUNC_7(&VAR_5->cluster_scope_lock);
 FUNC_1(&VAR_4->binding_node);
 FUNC_8(&VAR_5->cluster_scope_lock);
 if (VAR_4->scope == VAR_1)
  return ((void*)0);

 VAR_6 = FUNC_3(VAR_3, VAR_2, VAR_0, 0);
 if (!VAR_6) {
  FUNC_4("Withdrawal distribution failure\n");
  return ((void*)0);
 }

 VAR_7 = (struct distr_item *)FUNC_2(FUNC_0(VAR_6));
 FUNC_5(VAR_7, VAR_4);
 return VAR_6;
}

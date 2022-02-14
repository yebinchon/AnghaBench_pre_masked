
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sk_buff_head {int dummy; } ;
struct net {int dummy; } ;
struct name_table {int cluster_scope_lock; int cluster_scope; } ;


 int FUNC_0 (struct sk_buff_head*) ;
 int FUNC_1 (struct net*,struct sk_buff_head*,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct name_table* FUNC_4 (struct net*) ;
 int FUNC_5 (struct net*,struct sk_buff_head*,int ,int ) ;

void FUNC_6(struct net *VAR_0, u32 VAR_1)
{
 struct name_table *VAR_2 = FUNC_4(VAR_0);
 struct sk_buff_head VAR_3;

 FUNC_0(&VAR_3);

 FUNC_2(&VAR_2->cluster_scope_lock);
 FUNC_1(VAR_0, &VAR_3, VAR_1, &VAR_2->cluster_scope);
 FUNC_5(VAR_0, &VAR_3, VAR_1, 0);
 FUNC_3(&VAR_2->cluster_scope_lock);
}

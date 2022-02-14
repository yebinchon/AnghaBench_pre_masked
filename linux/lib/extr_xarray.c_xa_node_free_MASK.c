
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xa_node {int rcu_head; int array; int private_list; } ;


 int FUNC_0 (struct xa_node*,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_3(struct xa_node *VAR_2)
{
 FUNC_0(VAR_2, !FUNC_2(&VAR_2->private_list));
 VAR_2->array = VAR_0;
 FUNC_1(&VAR_2->rcu_head, VAR_1);
}

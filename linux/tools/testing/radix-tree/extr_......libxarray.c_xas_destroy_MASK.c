
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xa_state {struct xa_node* xa_alloc; } ;
struct xa_node {int private_list; } ;


 int FUNC_0 (struct xa_node*,int) ;
 int FUNC_1 (int ,struct xa_node*) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_3(struct xa_state *VAR_1)
{
 struct xa_node *VAR_2 = VAR_1->xa_alloc;

 if (!VAR_2)
  return;
 FUNC_0(VAR_2, !FUNC_2(&VAR_2->private_list));
 FUNC_1(VAR_0, VAR_2);
 VAR_1->xa_alloc = ((void*)0);
}

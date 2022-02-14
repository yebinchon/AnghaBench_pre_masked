
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct list_head {int dummy; } ;
struct bb_node {int l; int e_succs; int e_prevs; } ;


 int FUNC_0 (int *) ;
 struct bb_node* FUNC_1 (int,int) ;
 int FUNC_2 (int *,struct list_head*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static struct bb_node *FUNC_4(struct list_head *VAR_0)
{
 struct bb_node *VAR_1;

 VAR_1 = FUNC_1(1, sizeof(*VAR_1));
 if (!VAR_1) {
  FUNC_3("OOM when allocating BB node");
  return ((void*)0);
 }

 FUNC_0(&VAR_1->e_prevs);
 FUNC_0(&VAR_1->e_succs);
 FUNC_2(&VAR_1->l, VAR_0);

 return VAR_1;
}

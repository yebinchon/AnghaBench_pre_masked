
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gcov_node {struct gcov_node* parent; int children; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct gcov_node*) ;
 struct gcov_node VAR_0 ;

__attribute__((used)) static void FUNC_2(struct gcov_node *VAR_1)
{
 struct gcov_node *VAR_2;

 while ((VAR_1 != &VAR_0) && FUNC_0(&VAR_1->children)) {
  VAR_2 = VAR_1->parent;
  FUNC_1(VAR_1);
  VAR_1 = VAR_2;
 }
}

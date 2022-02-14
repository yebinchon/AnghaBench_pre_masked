
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgraph_node {struct cgraph_node* next; } ;


 scalar_t__ FUNC_0 (struct cgraph_node*) ;
 struct cgraph_node* VAR_0 ;

__attribute__((used)) static inline struct cgraph_node *FUNC_1(void)
{
 struct cgraph_node *VAR_1;

 for (VAR_1 = VAR_0; VAR_1; VAR_1 = VAR_1->next)
  if (FUNC_0(VAR_1))
   return VAR_1;
 return ((void*)0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgraph_node {struct cgraph_node* next; } ;


 scalar_t__ FUNC_0 (struct cgraph_node*) ;

__attribute__((used)) static inline struct cgraph_node *FUNC_1(struct cgraph_node *VAR_0)
{
 for (VAR_0 = VAR_0->next; VAR_0; VAR_0 = VAR_0->next)
  if (FUNC_0(VAR_0))
   return VAR_0;
 return ((void*)0);
}

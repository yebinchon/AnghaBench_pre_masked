
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objagg_hints_node {int dummy; } ;
struct objagg_hints {int ht_params; int node_ht; } ;


 struct objagg_hints_node* FUNC_0 (int *,void*,int ) ;

__attribute__((used)) static struct objagg_hints_node *
FUNC_1(struct objagg_hints *VAR_0, void *VAR_1)
{
 if (!VAR_0)
  return ((void*)0);
 return FUNC_0(&VAR_0->node_ht, VAR_1,
          VAR_0->ht_params);
}

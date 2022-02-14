
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct objagg_hints {int node_ht; scalar_t__ refcount; } ;


 int FUNC_0 (struct objagg_hints*) ;
 int FUNC_1 (struct objagg_hints*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct objagg_hints *VAR_0)
{
 if (--VAR_0->refcount)
  return;
 FUNC_1(VAR_0);
 FUNC_2(&VAR_0->node_ht);
 FUNC_0(VAR_0);
}

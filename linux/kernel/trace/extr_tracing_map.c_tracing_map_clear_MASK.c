
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tracing_map {unsigned int max_elts; int elts; int map; int drops; int hits; int next_elt; } ;


 int * FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

void FUNC_5(struct tracing_map *VAR_0)
{
 unsigned int VAR_1;

 FUNC_2(&VAR_0->next_elt, -1);
 FUNC_1(&VAR_0->hits, 0);
 FUNC_1(&VAR_0->drops, 0);

 FUNC_3(VAR_0->map);

 for (VAR_1 = 0; VAR_1 < VAR_0->max_elts; VAR_1++)
  FUNC_4(*(FUNC_0(VAR_0->elts, VAR_1)));
}

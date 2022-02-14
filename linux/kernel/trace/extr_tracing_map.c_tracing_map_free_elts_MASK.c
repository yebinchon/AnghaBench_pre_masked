
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tracing_map {unsigned int max_elts; int * elts; } ;


 int ** FUNC_0 (int *,unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct tracing_map *VAR_0)
{
 unsigned int VAR_1;

 if (!VAR_0->elts)
  return;

 for (VAR_1 = 0; VAR_1 < VAR_0->max_elts; VAR_1++) {
  FUNC_2(*(FUNC_0(VAR_0->elts, VAR_1)));
  *(FUNC_0(VAR_0->elts, VAR_1)) = ((void*)0);
 }

 FUNC_1(VAR_0->elts);
 VAR_0->elts = ((void*)0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tracing_map_elt {int dummy; } ;
struct tracing_map {unsigned int max_elts; int elts; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int ** FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (unsigned int,int) ;
 int * FUNC_3 (struct tracing_map*) ;
 int FUNC_4 (struct tracing_map*) ;

__attribute__((used)) static int FUNC_5(struct tracing_map *VAR_1)
{
 unsigned int VAR_2;

 VAR_1->elts = FUNC_2(VAR_1->max_elts,
         sizeof(struct tracing_map_elt *));
 if (!VAR_1->elts)
  return -VAR_0;

 for (VAR_2 = 0; VAR_2 < VAR_1->max_elts; VAR_2++) {
  *(FUNC_1(VAR_1->elts, VAR_2)) = FUNC_3(VAR_1);
  if (FUNC_0(*(FUNC_1(VAR_1->elts, VAR_2)))) {
   *(FUNC_1(VAR_1->elts, VAR_2)) = ((void*)0);
   FUNC_4(VAR_1);

   return -VAR_0;
  }
 }

 return 0;
}

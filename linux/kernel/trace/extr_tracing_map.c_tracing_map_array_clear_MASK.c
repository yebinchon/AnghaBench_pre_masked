
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tracing_map_array {unsigned int n_pages; int * pages; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

void FUNC_1(struct tracing_map_array *VAR_1)
{
 unsigned int VAR_2;

 if (!VAR_1->pages)
  return;

 for (VAR_2 = 0; VAR_2 < VAR_1->n_pages; VAR_2++)
  FUNC_0(VAR_1->pages[VAR_2], 0, VAR_0);
}

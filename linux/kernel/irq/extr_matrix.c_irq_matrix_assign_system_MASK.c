
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_matrix {unsigned int matrix_bits; int online_maps; unsigned int alloc_start; unsigned int alloc_end; int systembits_inalloc; int total_allocated; int system_map; int maps; } ;
struct cpumap {int allocated; int alloc_map; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (unsigned int,int ) ;
 struct cpumap* FUNC_3 (int ) ;
 int FUNC_4 (unsigned int,struct irq_matrix*) ;

void FUNC_5(struct irq_matrix *VAR_0, unsigned int VAR_1,
         bool VAR_2)
{
 struct cpumap *VAR_3 = FUNC_3(VAR_0->maps);

 FUNC_0(VAR_1 > VAR_0->matrix_bits);
 FUNC_0(VAR_0->online_maps > 1 || (VAR_0->online_maps && !VAR_2));

 FUNC_1(VAR_1, VAR_0->system_map);
 if (VAR_2) {
  FUNC_0(!FUNC_2(VAR_1, VAR_3->alloc_map));
  VAR_3->allocated--;
  VAR_0->total_allocated--;
 }
 if (VAR_1 >= VAR_0->alloc_start && VAR_1 < VAR_0->alloc_end)
  VAR_0->systembits_inalloc++;

 FUNC_4(VAR_1, VAR_0);
}

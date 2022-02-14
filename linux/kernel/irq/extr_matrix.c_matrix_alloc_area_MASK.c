
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_matrix {unsigned int alloc_start; unsigned int alloc_end; int scratch_map; int system_map; } ;
struct cpumap {int alloc_map; int managed_map; } ;


 unsigned int FUNC_0 (int ,unsigned int,unsigned int,unsigned int,int ) ;
 int FUNC_1 (int ,int ,int ,unsigned int) ;
 int FUNC_2 (int ,unsigned int,unsigned int) ;

__attribute__((used)) static unsigned int FUNC_3(struct irq_matrix *VAR_0, struct cpumap *VAR_1,
          unsigned int VAR_2, bool VAR_3)
{
 unsigned int VAR_4, VAR_5 = VAR_0->alloc_start;
 unsigned int VAR_6 = VAR_0->alloc_end;

 FUNC_1(VAR_0->scratch_map, VAR_1->managed_map, VAR_0->system_map, VAR_6);
 FUNC_1(VAR_0->scratch_map, VAR_0->scratch_map, VAR_1->alloc_map, VAR_6);
 VAR_4 = FUNC_0(VAR_0->scratch_map, VAR_6, VAR_5, VAR_2, 0);
 if (VAR_4 >= VAR_6)
  return VAR_4;
 if (VAR_3)
  FUNC_2(VAR_1->managed_map, VAR_4, VAR_2);
 else
  FUNC_2(VAR_1->alloc_map, VAR_4, VAR_2);
 return VAR_4;
}

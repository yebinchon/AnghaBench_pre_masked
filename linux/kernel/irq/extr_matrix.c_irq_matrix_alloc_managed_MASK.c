
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_matrix {unsigned int alloc_end; int total_allocated; int scratch_map; int maps; } ;
struct cpumask {int dummy; } ;
struct cpumap {int managed_allocated; int allocated; int alloc_map; int managed_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (int ,int ,int ,unsigned int) ;
 scalar_t__ FUNC_1 (struct cpumask const*) ;
 unsigned int FUNC_2 (int ,unsigned int) ;
 unsigned int FUNC_3 (struct irq_matrix*,struct cpumask const*) ;
 struct cpumap* FUNC_4 (int ,unsigned int) ;
 int FUNC_5 (unsigned int,int ) ;
 int FUNC_6 (unsigned int,unsigned int,struct irq_matrix*,struct cpumap*) ;

int FUNC_7(struct irq_matrix *VAR_3, const struct cpumask *VAR_4,
        unsigned int *VAR_5)
{
 unsigned int VAR_6, VAR_7, VAR_8 = VAR_3->alloc_end;
 struct cpumap *VAR_9;

 if (FUNC_1(VAR_4))
  return -VAR_0;

 VAR_7 = FUNC_3(VAR_3, VAR_4);
 if (VAR_7 == VAR_2)
  return -VAR_1;

 VAR_9 = FUNC_4(VAR_3->maps, VAR_7);
 VAR_8 = VAR_3->alloc_end;

 FUNC_0(VAR_3->scratch_map, VAR_9->managed_map, VAR_9->alloc_map, VAR_8);
 VAR_6 = FUNC_2(VAR_3->scratch_map, VAR_8);
 if (VAR_6 >= VAR_8)
  return -VAR_1;
 FUNC_5(VAR_6, VAR_9->alloc_map);
 VAR_9->allocated++;
 VAR_9->managed_allocated++;
 VAR_3->total_allocated++;
 *VAR_5 = VAR_7;
 FUNC_6(VAR_6, VAR_7, VAR_3, VAR_9);
 return VAR_6;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_matrix {unsigned int alloc_end; int global_reserved; int global_available; int total_allocated; int maps; } ;
struct cpumask {int dummy; } ;
struct cpumap {int available; int allocated; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (struct irq_matrix*,struct cpumap*,int,int) ;
 unsigned int FUNC_1 (struct irq_matrix*,struct cpumask const*) ;
 struct cpumap* FUNC_2 (int ,unsigned int) ;
 int FUNC_3 (unsigned int,unsigned int,struct irq_matrix*,struct cpumap*) ;

int FUNC_4(struct irq_matrix *VAR_2, const struct cpumask *VAR_3,
       bool VAR_4, unsigned int *VAR_5)
{
 unsigned int VAR_6, VAR_7;
 struct cpumap *VAR_8;

 VAR_6 = FUNC_1(VAR_2, VAR_3);
 if (VAR_6 == VAR_1)
  return -VAR_0;

 VAR_8 = FUNC_2(VAR_2->maps, VAR_6);
 VAR_7 = FUNC_0(VAR_2, VAR_8, 1, 0);
 if (VAR_7 >= VAR_2->alloc_end)
  return -VAR_0;
 VAR_8->allocated++;
 VAR_8->available--;
 VAR_2->total_allocated++;
 VAR_2->global_available--;
 if (VAR_4)
  VAR_2->global_reserved--;
 *VAR_5 = VAR_6;
 FUNC_3(VAR_7, VAR_6, VAR_2, VAR_8);
 return VAR_7;

}

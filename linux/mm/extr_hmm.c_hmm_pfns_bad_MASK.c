
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct mm_walk {struct hmm_vma_walk* private; } ;
struct hmm_vma_walk {struct hmm_range* range; } ;
struct hmm_range {unsigned long start; int * values; int * pfns; } ;


 size_t VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int FUNC_0(unsigned long VAR_3,
   unsigned long VAR_4,
   struct mm_walk *VAR_5)
{
 struct hmm_vma_walk *VAR_6 = VAR_5->private;
 struct hmm_range *VAR_7 = VAR_6->range;
 uint64_t *VAR_8 = VAR_7->pfns;
 unsigned long VAR_9;

 VAR_9 = (VAR_3 - VAR_7->start) >> VAR_1;
 for (; VAR_3 < VAR_4; VAR_3 += VAR_2, VAR_9++)
  VAR_8[VAR_9] = VAR_7->values[VAR_0];

 return 0;
}

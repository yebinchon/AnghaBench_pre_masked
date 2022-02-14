
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct mm_walk {TYPE_1__* vma; struct hmm_vma_walk* private; } ;
struct hmm_vma_walk {unsigned long last; struct hmm_range* range; } ;
struct hmm_range {unsigned long start; int * values; int * pfns; } ;
struct TYPE_2__ {int vm_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 unsigned long VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mm_walk*,unsigned long,int,int *) ;

__attribute__((used)) static int FUNC_1(unsigned long VAR_6, unsigned long VAR_7,
         bool VAR_8, bool VAR_9,
         struct mm_walk *VAR_10)
{
 struct hmm_vma_walk *VAR_11 = VAR_10->private;
 struct hmm_range *VAR_12 = VAR_11->range;
 uint64_t *VAR_13 = VAR_12->pfns;
 unsigned long VAR_14;

 VAR_11->last = VAR_6;
 VAR_14 = (VAR_6 - VAR_12->start) >> VAR_3;

 if (VAR_9 && VAR_10->vma && !(VAR_10->vma->vm_flags & VAR_5))
  return -VAR_1;

 for (; VAR_6 < VAR_7; VAR_6 += VAR_4, VAR_14++) {
  VAR_13[VAR_14] = VAR_12->values[VAR_2];
  if (VAR_8 || VAR_9) {
   int VAR_15;

   VAR_15 = FUNC_0(VAR_10, VAR_6, VAR_9,
            &VAR_13[VAR_14]);
   if (VAR_15 != -VAR_0)
    return VAR_15;
  }
 }

 return (VAR_8 || VAR_9) ? -VAR_0 : 0;
}

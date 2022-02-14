
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {unsigned long const vm_flags; int vm_mm; int vm_end; } ;
struct hmm_vma_walk {unsigned long last; unsigned int flags; struct hmm_range* range; int * pgmap; } ;
struct hmm_range {unsigned long start; unsigned long end; int * pfns; scalar_t__ valid; struct hmm* hmm; } ;
struct TYPE_3__ {TYPE_2__* mm; } ;
struct hmm {TYPE_1__ mmu_notifier; } ;
struct TYPE_4__ {int mmap_sem; } ;


 long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int VAR_7 ;
 struct vm_area_struct* FUNC_0 (TYPE_2__*,unsigned long) ;
 int FUNC_1 (struct hmm_range*,int *,unsigned long,unsigned long) ;
 int VAR_8 ;
 int FUNC_2 (int *) ;
 unsigned long FUNC_3 (unsigned long,int ) ;
 int FUNC_4 (int ,unsigned long,unsigned long,int *,struct hmm_vma_walk*) ;

long FUNC_5(struct hmm_range *VAR_9, unsigned int VAR_10)
{
 const unsigned long VAR_11 = VAR_4 | VAR_6 | VAR_5;
 unsigned long VAR_12 = VAR_9->start, VAR_13;
 struct hmm_vma_walk VAR_14;
 struct hmm *VAR_15 = VAR_9->hmm;
 struct vm_area_struct *VAR_16;
 int VAR_17;

 FUNC_2(&VAR_15->mmu_notifier.mm->mmap_sem);

 do {

  if (!VAR_9->valid)
   return -VAR_0;

  VAR_16 = FUNC_0(VAR_15->mmu_notifier.mm, VAR_12);
  if (VAR_16 == ((void*)0) || (VAR_16->vm_flags & VAR_11))
   return -VAR_1;

  if (!(VAR_16->vm_flags & VAR_7)) {





   FUNC_1(VAR_9, VAR_9->pfns,
    VAR_9->start, VAR_9->end);
   return -VAR_2;
  }

  VAR_14.pgmap = ((void*)0);
  VAR_14.last = VAR_12;
  VAR_14.flags = VAR_10;
  VAR_14.range = VAR_9;
  VAR_13 = FUNC_3(VAR_9->end, VAR_16->vm_end);

  FUNC_4(VAR_16->vm_mm, VAR_12, VAR_13, &VAR_8,
    &VAR_14);

  do {
   VAR_17 = FUNC_4(VAR_16->vm_mm, VAR_12, VAR_13,
     &VAR_8, &VAR_14);
   VAR_12 = VAR_14.last;


  } while (VAR_17 == -VAR_0 && VAR_9->valid);

  if (VAR_17) {
   unsigned long VAR_18;

   VAR_18 = (VAR_14.last - VAR_9->start) >> VAR_3;
   FUNC_1(VAR_9, &VAR_9->pfns[VAR_18],
    VAR_14.last, VAR_9->end);
   return VAR_17;
  }
  VAR_12 = VAR_13;

 } while (VAR_12 < VAR_9->end);

 return (VAR_14.last - VAR_9->start) >> VAR_3;
}

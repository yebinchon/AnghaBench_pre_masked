
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int vm_flags; unsigned long vm_end; } ;
struct page {int dummy; } ;
struct mm_struct {int mmap_sem; } ;
struct frame_vector {unsigned int nr_allocated; int got_ref; int is_pfns; int nr_frames; scalar_t__ ptrs; } ;
struct TYPE_2__ {struct mm_struct* mm; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int) ;
 TYPE_1__* VAR_5 ;
 int FUNC_1 (int *) ;
 struct vm_area_struct* FUNC_2 (struct mm_struct*,unsigned long,unsigned long) ;
 int FUNC_3 (struct vm_area_struct*,unsigned long,unsigned long*) ;
 unsigned long* FUNC_4 (struct frame_vector*) ;
 int FUNC_5 (unsigned long,unsigned int,unsigned int,struct page**,int*) ;
 unsigned long FUNC_6 (unsigned long) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (struct vm_area_struct*) ;

int FUNC_9(unsigned long VAR_6, unsigned int VAR_7,
       unsigned int VAR_8, struct frame_vector *VAR_9)
{
 struct mm_struct *VAR_10 = VAR_5->mm;
 struct vm_area_struct *VAR_11;
 int VAR_12 = 0;
 int VAR_13;
 int VAR_14;

 if (VAR_7 == 0)
  return 0;

 if (FUNC_0(VAR_7 > VAR_9->nr_allocated))
  VAR_7 = VAR_9->nr_allocated;

 VAR_6 = FUNC_6(VAR_6);

 FUNC_1(&VAR_10->mmap_sem);
 VAR_14 = 1;
 VAR_11 = FUNC_2(VAR_10, VAR_6, VAR_6 + 1);
 if (!VAR_11) {
  VAR_12 = -VAR_0;
  goto out;
 }
 if (FUNC_8(VAR_11)) {
  VAR_12 = -VAR_1;
  goto out;
 }

 if (!(VAR_11->vm_flags & (VAR_3 | VAR_4))) {
  VAR_9->got_ref = 1;
  VAR_9->is_pfns = 0;
  VAR_12 = FUNC_5(VAR_6, VAR_7,
   VAR_8, (struct page **)(VAR_9->ptrs), &VAR_14);
  goto out;
 }

 VAR_9->got_ref = 0;
 VAR_9->is_pfns = 1;
 do {
  unsigned long *VAR_15 = FUNC_4(VAR_9);

  while (VAR_12 < VAR_7 && VAR_6 + VAR_2 <= VAR_11->vm_end) {
   VAR_13 = FUNC_3(VAR_11, VAR_6, &VAR_15[VAR_12]);
   if (VAR_13) {
    if (VAR_12 == 0)
     VAR_12 = VAR_13;
    goto out;
   }
   VAR_6 += VAR_2;
   VAR_12++;
  }




  if (VAR_12 >= VAR_7 || VAR_6 < VAR_11->vm_end)
   break;
  VAR_11 = FUNC_2(VAR_10, VAR_6, VAR_6 + 1);
 } while (VAR_11 && VAR_11->vm_flags & (VAR_3 | VAR_4));
out:
 if (VAR_14)
  FUNC_7(&VAR_10->mmap_sem);
 if (!VAR_12)
  VAR_12 = -VAR_0;
 if (VAR_12 > 0)
  VAR_9->nr_frames = VAR_12;
 return VAR_12;
}

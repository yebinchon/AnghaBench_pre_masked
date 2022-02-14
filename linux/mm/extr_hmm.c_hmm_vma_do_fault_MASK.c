
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_fault_t ;
typedef int uint64_t ;
struct vm_area_struct {int dummy; } ;
struct mm_walk {struct vm_area_struct* vma; struct hmm_vma_walk* private; } ;
struct hmm_vma_walk {int flags; struct hmm_range* range; } ;
struct hmm_range {int * values; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct vm_area_struct*,unsigned long,unsigned int) ;

__attribute__((used)) static int FUNC_1(struct mm_walk *VAR_10, unsigned long VAR_11,
       bool VAR_12, uint64_t *VAR_13)
{
 unsigned int VAR_14 = VAR_4;
 struct hmm_vma_walk *VAR_15 = VAR_10->private;
 struct hmm_range *VAR_16 = VAR_15->range;
 struct vm_area_struct *VAR_17 = VAR_10->vma;
 vm_fault_t VAR_18;

 if (!VAR_17)
  goto err;

 if (VAR_15->flags & VAR_6)
  VAR_14 |= VAR_3;
 if (VAR_12)
  VAR_14 |= VAR_5;

 VAR_18 = FUNC_0(VAR_17, VAR_11, VAR_14);
 if (VAR_18 & VAR_9) {

  return -VAR_0;
 }
 if (VAR_18 & VAR_8)
  goto err;

 return -VAR_1;

err:
 *VAR_13 = VAR_16->values[VAR_7];
 return -VAR_2;
}

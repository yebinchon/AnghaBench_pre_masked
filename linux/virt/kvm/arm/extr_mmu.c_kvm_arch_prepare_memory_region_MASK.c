
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {scalar_t__ vm_start; int vm_flags; scalar_t__ vm_pgoff; int vm_end; } ;
struct kvm_userspace_memory_region {scalar_t__ userspace_addr; scalar_t__ memory_size; int flags; scalar_t__ guest_phys_addr; } ;
struct kvm_memory_slot {int base_gfn; int npages; int flags; } ;
struct kvm {int mmu_lock; } ;
typedef int phys_addr_t ;
typedef scalar_t__ hva_t ;
typedef scalar_t__ gpa_t ;
typedef enum kvm_mr_change { ____Placeholder_kvm_mr_change } kvm_mr_change ;
struct TYPE_4__ {TYPE_1__* mm; } ;
struct TYPE_3__ {int mmap_sem; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_2__* VAR_11 ;
 int FUNC_0 (int *) ;
 struct vm_area_struct* FUNC_1 (TYPE_1__*,scalar_t__) ;
 int FUNC_2 (struct kvm*,scalar_t__,int,scalar_t__,int) ;
 int FUNC_3 (struct kvm*) ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct kvm*,struct kvm_memory_slot*) ;
 int FUNC_9 (struct kvm*,scalar_t__,scalar_t__) ;
 int FUNC_10 (int *) ;

int FUNC_11(struct kvm *VAR_12,
       struct kvm_memory_slot *VAR_13,
       const struct kvm_userspace_memory_region *VAR_14,
       enum kvm_mr_change VAR_15)
{
 hva_t VAR_16 = VAR_14->userspace_addr;
 hva_t VAR_17 = VAR_16 + VAR_14->memory_size;
 bool VAR_18 = !(VAR_14->flags & VAR_4);
 int VAR_19 = 0;

 if (VAR_15 != VAR_5 && VAR_15 != VAR_7 &&
   VAR_15 != VAR_6)
  return 0;





 if (VAR_13->base_gfn + VAR_13->npages >=
     (FUNC_3(VAR_12) >> VAR_8))
  return -VAR_0;

 FUNC_0(&VAR_11->mm->mmap_sem);
 do {
  struct vm_area_struct *VAR_20 = FUNC_1(VAR_11->mm, VAR_16);
  hva_t VAR_21, VAR_22;

  if (!VAR_20 || VAR_20->vm_start >= VAR_17)
   break;





  if (VAR_18 && !(VAR_20->vm_flags & VAR_10)) {
   VAR_19 = -VAR_2;
   break;
  }




  VAR_21 = FUNC_4(VAR_16, VAR_20->vm_start);
  VAR_22 = FUNC_5(VAR_17, VAR_20->vm_end);

  if (VAR_20->vm_flags & VAR_9) {
   gpa_t VAR_23 = VAR_14->guest_phys_addr +
        (VAR_21 - VAR_14->userspace_addr);
   phys_addr_t VAR_24;

   VAR_24 = (phys_addr_t)VAR_20->vm_pgoff << VAR_8;
   VAR_24 += VAR_21 - VAR_20->vm_start;


   if (VAR_13->flags & VAR_3) {
    VAR_19 = -VAR_1;
    goto out;
   }

   VAR_19 = FUNC_2(VAR_12, VAR_23, VAR_24,
          VAR_22 - VAR_21,
          VAR_18);
   if (VAR_19)
    break;
  }
  VAR_16 = VAR_22;
 } while (VAR_16 < VAR_17);

 if (VAR_15 == VAR_6)
  goto out;

 FUNC_6(&VAR_12->mmu_lock);
 if (VAR_19)
  FUNC_9(VAR_12, VAR_14->guest_phys_addr, VAR_14->memory_size);
 else
  FUNC_8(VAR_12, VAR_13);
 FUNC_7(&VAR_12->mmu_lock);
out:
 FUNC_10(&VAR_11->mm->mmap_sem);
 return VAR_19;
}

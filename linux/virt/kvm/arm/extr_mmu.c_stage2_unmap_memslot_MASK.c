
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {scalar_t__ vm_start; int vm_flags; int vm_end; } ;
struct kvm_memory_slot {scalar_t__ userspace_addr; scalar_t__ base_gfn; scalar_t__ npages; } ;
struct kvm {int dummy; } ;
typedef scalar_t__ phys_addr_t ;
typedef scalar_t__ hva_t ;
typedef scalar_t__ gpa_t ;
struct TYPE_2__ {int mm; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 struct vm_area_struct* FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (struct kvm*,scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct kvm *VAR_4,
     struct kvm_memory_slot *VAR_5)
{
 hva_t VAR_6 = VAR_5->userspace_addr;
 phys_addr_t VAR_7 = VAR_5->base_gfn << VAR_0;
 phys_addr_t VAR_8 = VAR_1 * VAR_5->npages;
 hva_t VAR_9 = VAR_6 + VAR_8;
 do {
  struct vm_area_struct *VAR_10 = FUNC_0(VAR_3->mm, VAR_6);
  hva_t VAR_11, VAR_12;

  if (!VAR_10 || VAR_10->vm_start >= VAR_9)
   break;




  VAR_11 = FUNC_1(VAR_6, VAR_10->vm_start);
  VAR_12 = FUNC_2(VAR_9, VAR_10->vm_end);

  if (!(VAR_10->vm_flags & VAR_2)) {
   gpa_t VAR_13 = VAR_7 + (VAR_11 - VAR_5->userspace_addr);
   FUNC_3(VAR_4, VAR_13, VAR_12 - VAR_11);
  }
  VAR_6 = VAR_12;
 } while (VAR_6 < VAR_9);
}

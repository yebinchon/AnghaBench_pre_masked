
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct kvm_mmu_memory_cache {int dummy; } ;
struct TYPE_4__ {struct kvm_mmu_memory_cache mmu_page_cache; } ;
struct kvm_vcpu {struct kvm* kvm; TYPE_1__ arch; } ;
struct kvm_memory_slot {int dummy; } ;
struct kvm {unsigned long mmu_notifier_seq; int mmu_lock; } ;
typedef int pud_t ;
typedef int pte_t ;
typedef int pmd_t ;
typedef int phys_addr_t ;
typedef int pgprot_t ;
typedef scalar_t__ kvm_pfn_t ;
typedef int gfn_t ;
struct TYPE_6__ {TYPE_2__* mm; } ;
struct TYPE_5__ {int mmap_sem; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned long VAR_9 ;
 unsigned long VAR_10 ;
 unsigned long VAR_11 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,unsigned long) ;
 TYPE_3__* VAR_12 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct kvm_memory_slot*,unsigned long,unsigned long) ;
 struct vm_area_struct* FUNC_4 (TYPE_2__*,unsigned long,unsigned long) ;
 scalar_t__ FUNC_5 (struct kvm*,int,int,int*) ;
 int FUNC_6 (struct vm_area_struct*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__,unsigned long) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int FUNC_10 (char*,...) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 int FUNC_12 (struct kvm_vcpu*) ;
 int FUNC_13 (struct kvm*) ;
 int FUNC_14 (scalar_t__,int ) ;
 int FUNC_15 (scalar_t__,int ) ;
 int FUNC_16 (scalar_t__,int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (scalar_t__) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (unsigned long,struct vm_area_struct*) ;
 int FUNC_27 (scalar_t__) ;
 int FUNC_28 (scalar_t__) ;
 scalar_t__ FUNC_29 (struct kvm*) ;
 int FUNC_30 (struct kvm_vcpu*) ;
 int FUNC_31 (struct kvm*,int) ;
 int FUNC_32 (struct kvm_memory_slot*) ;
 scalar_t__ FUNC_33 (struct kvm*,unsigned long) ;
 int FUNC_34 (struct kvm_mmu_memory_cache*,int ,int ) ;
 int FUNC_35 () ;
 int FUNC_36 (int *) ;
 int FUNC_37 (int *) ;
 scalar_t__ FUNC_38 (struct kvm*,int) ;
 int FUNC_39 (struct kvm*,struct kvm_mmu_memory_cache*,int,int *) ;
 int FUNC_40 (struct kvm*,struct kvm_mmu_memory_cache*,int,int *,unsigned long) ;
 int FUNC_41 (struct kvm*,struct kvm_mmu_memory_cache*,int,int *) ;
 scalar_t__ FUNC_42 (scalar_t__*,int*) ;
 scalar_t__ FUNC_43 (int) ;
 int FUNC_44 (int *) ;
 unsigned long FUNC_45 (struct vm_area_struct*) ;

__attribute__((used)) static int FUNC_46(struct kvm_vcpu *VAR_13, phys_addr_t VAR_14,
     struct kvm_memory_slot *VAR_15, unsigned long VAR_16,
     unsigned long VAR_17)
{
 int VAR_18;
 bool VAR_19, VAR_20, VAR_21 = 0;
 bool VAR_22, VAR_23;
 unsigned long VAR_24;
 gfn_t VAR_25 = VAR_14 >> VAR_8;
 struct kvm *VAR_26 = VAR_13->kvm;
 struct kvm_mmu_memory_cache *VAR_27 = &VAR_13->arch.mmu_page_cache;
 struct vm_area_struct *VAR_28;
 kvm_pfn_t VAR_29;
 pgprot_t VAR_30 = VAR_6;
 bool VAR_31 = FUNC_32(VAR_15);
 unsigned long VAR_32, VAR_33 = 0;

 VAR_19 = FUNC_12(VAR_13);
 VAR_22 = FUNC_30(VAR_13);
 FUNC_0(VAR_19 && VAR_22);

 if (VAR_17 == VAR_1 && !VAR_19 && !VAR_22) {
  FUNC_10("Unexpected L2 read permission error\n");
  return -VAR_0;
 }


 FUNC_2(&VAR_12->mm->mmap_sem);
 VAR_28 = FUNC_4(VAR_12->mm, VAR_16, VAR_16 + 1);
 if (FUNC_43(!VAR_28)) {
  FUNC_10("Failed to find VMA for hva 0x%lx\n", VAR_16);
  FUNC_44(&VAR_12->mm->mmap_sem);
  return -VAR_0;
 }

 VAR_32 = FUNC_45(VAR_28);
 if (VAR_31 ||
     !FUNC_3(VAR_15, VAR_16, VAR_32)) {
  VAR_21 = 1;
  VAR_32 = VAR_9;
 }
 if (VAR_32 == VAR_10 ||
     (VAR_32 == VAR_11 && FUNC_29(VAR_26)))
  VAR_25 = (VAR_14 & FUNC_7(FUNC_6(VAR_28))) >> VAR_8;
 FUNC_44(&VAR_12->mm->mmap_sem);


 VAR_18 = FUNC_34(VAR_27, FUNC_13(VAR_26),
         VAR_2);
 if (VAR_18)
  return VAR_18;

 VAR_24 = VAR_13->kvm->mmu_notifier_seq;
 FUNC_35();

 VAR_29 = FUNC_5(VAR_26, VAR_25, VAR_19, &VAR_20);
 if (VAR_29 == VAR_3) {
  FUNC_26(VAR_16, VAR_28);
  return 0;
 }
 if (FUNC_9(VAR_29))
  return -VAR_0;

 if (FUNC_11(VAR_29)) {
  VAR_30 = VAR_7;
  VAR_33 |= VAR_4;
 } else if (VAR_31) {





  VAR_33 |= VAR_5;





  if (!VAR_19)
   VAR_20 = 0;
 }

 FUNC_36(&VAR_26->mmu_lock);
 if (FUNC_33(VAR_26, VAR_24))
  goto out_unlock;

 if (VAR_32 == VAR_9 && !VAR_21) {
  if (FUNC_3(VAR_15, VAR_16, VAR_10) &&
      FUNC_42(&VAR_29, &VAR_14))
   VAR_32 = VAR_10;
 }

 if (VAR_20)
  FUNC_28(VAR_29);

 if (VAR_17 != VAR_1)
  FUNC_1(VAR_29, VAR_32);

 if (VAR_22)
  FUNC_8(VAR_29, VAR_32);
 VAR_23 = VAR_22 ||
  (VAR_17 == VAR_1 && FUNC_38(VAR_26, VAR_14));

 if (VAR_32 == VAR_11) {
  pud_t VAR_34 = FUNC_16(VAR_29, VAR_30);

  VAR_34 = FUNC_18(VAR_34);
  if (VAR_20)
   VAR_34 = FUNC_25(VAR_34);

  if (VAR_23)
   VAR_34 = FUNC_24(VAR_34);

  VAR_18 = FUNC_41(VAR_26, VAR_27, VAR_14, &VAR_34);
 } else if (VAR_32 == VAR_10) {
  pmd_t VAR_35 = FUNC_14(VAR_29, VAR_30);

  VAR_35 = FUNC_17(VAR_35);

  if (VAR_20)
   VAR_35 = FUNC_21(VAR_35);

  if (VAR_23)
   VAR_35 = FUNC_20(VAR_35);

  VAR_18 = FUNC_39(VAR_26, VAR_27, VAR_14, &VAR_35);
 } else {
  pte_t VAR_36 = FUNC_15(VAR_29, VAR_30);

  if (VAR_20) {
   VAR_36 = FUNC_23(VAR_36);
   FUNC_31(VAR_26, VAR_25);
  }

  if (VAR_23)
   VAR_36 = FUNC_22(VAR_36);

  VAR_18 = FUNC_40(VAR_26, VAR_27, VAR_14, &VAR_36, VAR_33);
 }

out_unlock:
 FUNC_37(&VAR_26->mmu_lock);
 FUNC_27(VAR_29);
 FUNC_19(VAR_29);
 return VAR_18;
}

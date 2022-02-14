
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_mmu_memory_cache {int member_0; } ;
struct kvm {int mmu_lock; } ;
typedef int pte_t ;
typedef unsigned long phys_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long FUNC_0 (unsigned long) ;
 int FUNC_1 (struct kvm*) ;
 int FUNC_2 (unsigned long,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct kvm_mmu_memory_cache*) ;
 int FUNC_5 (struct kvm_mmu_memory_cache*,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct kvm*,struct kvm_mmu_memory_cache*,unsigned long,int *,int ) ;

int FUNC_9(struct kvm *VAR_5, phys_addr_t VAR_6,
     phys_addr_t VAR_7, unsigned long VAR_8, bool VAR_9)
{
 phys_addr_t VAR_10, VAR_11;
 int VAR_12 = 0;
 unsigned long VAR_13;
 struct kvm_mmu_memory_cache VAR_14 = { 0, };

 VAR_11 = (VAR_6 + VAR_8 + VAR_4 - 1) & VAR_2;
 VAR_13 = FUNC_0(VAR_7);

 for (VAR_10 = VAR_6; VAR_10 < VAR_11; VAR_10 += VAR_4) {
  pte_t VAR_15 = FUNC_2(VAR_13, VAR_3);

  if (VAR_9)
   VAR_15 = FUNC_3(VAR_15);

  VAR_12 = FUNC_5(&VAR_14,
          FUNC_1(VAR_5),
          VAR_0);
  if (VAR_12)
   goto out;
  FUNC_6(&VAR_5->mmu_lock);
  VAR_12 = FUNC_8(VAR_5, &VAR_14, VAR_10, &VAR_15,
      VAR_1);
  FUNC_7(&VAR_5->mmu_lock);
  if (VAR_12)
   goto out;

  VAR_13++;
 }

out:
 FUNC_4(&VAR_14);
 return VAR_12;
}

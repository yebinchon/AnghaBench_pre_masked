
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_memory_slot {int flags; scalar_t__ base_gfn; scalar_t__ npages; } ;
typedef scalar_t__ gfn_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (struct kvm_memory_slot*,scalar_t__) ;
 scalar_t__ FUNC_1 (struct kvm_memory_slot*) ;

__attribute__((used)) static unsigned long FUNC_2(struct kvm_memory_slot *VAR_3, gfn_t VAR_4,
           gfn_t *VAR_5, bool VAR_6)
{
 if (!VAR_3 || VAR_3->flags & VAR_2)
  return VAR_0;

 if (FUNC_1(VAR_3) && VAR_6)
  return VAR_1;

 if (VAR_5)
  *VAR_5 = VAR_3->npages - (VAR_4 - VAR_3->base_gfn);

 return FUNC_0(VAR_3, VAR_4);
}

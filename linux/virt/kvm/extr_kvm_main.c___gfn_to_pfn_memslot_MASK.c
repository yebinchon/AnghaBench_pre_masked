
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_memory_slot {int dummy; } ;
typedef int kvm_pfn_t ;
typedef int gfn_t ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (struct kvm_memory_slot*,int ,int *,int) ;
 int FUNC_1 (unsigned long,int,int*,int,int*) ;
 scalar_t__ FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (struct kvm_memory_slot*) ;

kvm_pfn_t FUNC_4(struct kvm_memory_slot *VAR_3, gfn_t VAR_4,
          bool VAR_5, bool *VAR_6, bool VAR_7,
          bool *VAR_8)
{
 unsigned long VAR_9 = FUNC_0(VAR_3, VAR_4, ((void*)0), VAR_7);

 if (VAR_9 == VAR_0) {
  if (VAR_8)
   *VAR_8 = 0;
  return VAR_1;
 }

 if (FUNC_2(VAR_9)) {
  if (VAR_8)
   *VAR_8 = 0;
  return VAR_2;
 }


 if (VAR_8 && FUNC_3(VAR_3)) {
  *VAR_8 = 0;
  VAR_8 = ((void*)0);
 }

 return FUNC_1(VAR_9, VAR_5, VAR_6, VAR_7,
     VAR_8);
}

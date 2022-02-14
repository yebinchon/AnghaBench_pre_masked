
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_memory_slot {int dummy; } ;
struct kvm {int dummy; } ;
typedef int gpa_t ;
typedef int gfn_t ;


 int VAR_0 ;
 int FUNC_0 (struct kvm_memory_slot*,int,void*,int,unsigned long) ;
 struct kvm_memory_slot* FUNC_1 (struct kvm*,int) ;
 int FUNC_2 (int) ;

int FUNC_3(struct kvm *VAR_1, gpa_t VAR_2, void *VAR_3,
     unsigned long VAR_4)
{
 gfn_t VAR_5 = VAR_2 >> VAR_0;
 struct kvm_memory_slot *VAR_6 = FUNC_1(VAR_1, VAR_5);
 int VAR_7 = FUNC_2(VAR_2);

 return FUNC_0(VAR_6, VAR_5, VAR_3, VAR_7, VAR_4);
}

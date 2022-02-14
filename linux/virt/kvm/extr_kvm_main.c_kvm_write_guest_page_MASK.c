
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_memory_slot {int dummy; } ;
struct kvm {int dummy; } ;
typedef int gfn_t ;


 int FUNC_0 (struct kvm_memory_slot*,int ,void const*,int,int) ;
 struct kvm_memory_slot* FUNC_1 (struct kvm*,int ) ;

int FUNC_2(struct kvm *VAR_0, gfn_t VAR_1,
    const void *VAR_2, int VAR_3, int VAR_4)
{
 struct kvm_memory_slot *VAR_5 = FUNC_1(VAR_0, VAR_1);

 return FUNC_0(VAR_5, VAR_1, VAR_2, VAR_3, VAR_4);
}

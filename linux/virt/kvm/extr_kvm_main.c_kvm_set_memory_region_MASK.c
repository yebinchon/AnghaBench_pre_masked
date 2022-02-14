
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_userspace_memory_region {int dummy; } ;
struct kvm {int slots_lock; } ;


 int FUNC_0 (struct kvm*,struct kvm_userspace_memory_region const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct kvm *VAR_0,
     const struct kvm_userspace_memory_region *VAR_1)
{
 int VAR_2;

 FUNC_1(&VAR_0->slots_lock);
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_0->slots_lock);
 return VAR_2;
}

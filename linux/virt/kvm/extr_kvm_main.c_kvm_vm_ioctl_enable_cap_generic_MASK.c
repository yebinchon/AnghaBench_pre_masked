
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_enable_cap {int cap; int* args; int flags; } ;
struct kvm {int manual_dirty_log_protect; } ;


 int VAR_0 ;

 int FUNC_0 (struct kvm*,struct kvm_enable_cap*) ;

__attribute__((used)) static int FUNC_1(struct kvm *VAR_1,
        struct kvm_enable_cap *VAR_2)
{
 switch (VAR_2->cap) {







 default:
  return FUNC_0(VAR_1, VAR_2);
 }
}

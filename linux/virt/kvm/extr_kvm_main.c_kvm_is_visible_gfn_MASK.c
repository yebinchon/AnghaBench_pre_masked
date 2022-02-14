
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kvm_memory_slot {scalar_t__ id; int flags; } ;
struct kvm {int dummy; } ;
typedef int gfn_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 struct kvm_memory_slot* FUNC_0 (struct kvm*,int ) ;

bool FUNC_1(struct kvm *VAR_2, gfn_t VAR_3)
{
 struct kvm_memory_slot *VAR_4 = FUNC_0(VAR_2, VAR_3);

 if (!VAR_4 || VAR_4->id >= VAR_1 ||
       VAR_4->flags & VAR_0)
  return 0;

 return 1;
}

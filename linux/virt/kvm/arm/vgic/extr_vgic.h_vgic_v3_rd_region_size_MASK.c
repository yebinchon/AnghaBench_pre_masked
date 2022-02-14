
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vgic_redist_region {size_t count; } ;
struct kvm {int online_vcpus; } ;


 size_t VAR_0 ;
 size_t FUNC_0 (int *) ;

__attribute__((used)) static inline size_t
FUNC_1(struct kvm *VAR_1, struct vgic_redist_region *VAR_2)
{
 if (!VAR_2->count)
  return FUNC_0(&VAR_1->online_vcpus) * VAR_0;
 else
  return VAR_2->count * VAR_0;
}

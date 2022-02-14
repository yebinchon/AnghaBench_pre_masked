
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vgic_dist {scalar_t__ vgic_dist_base; } ;
struct TYPE_2__ {struct vgic_dist vgic; } ;
struct kvm {TYPE_1__ arch; } ;
typedef scalar_t__ gpa_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline bool FUNC_0(struct kvm *VAR_1, gpa_t VAR_2, size_t VAR_3)
{
 struct vgic_dist *VAR_4 = &VAR_1->arch.vgic;

 return (VAR_2 + VAR_3 > VAR_4->vgic_dist_base) &&
  (VAR_2 < VAR_4->vgic_dist_base + VAR_0);
}

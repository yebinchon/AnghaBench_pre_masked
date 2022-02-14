
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct vgic_dist {int nr_spis; int implementation_rev; int enabled; } ;
struct kvm_vcpu {TYPE_2__* kvm; } ;
typedef int gpa_t ;
struct TYPE_3__ {struct vgic_dist vgic; } ;
struct TYPE_4__ {int online_vcpus; TYPE_1__ arch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static unsigned long FUNC_1(struct kvm_vcpu *VAR_7,
         gpa_t VAR_8, unsigned int VAR_9)
{
 struct vgic_dist *VAR_10 = &VAR_7->kvm->arch.vgic;
 u32 VAR_11;

 switch (VAR_8 & 0x0c) {
 case 129:
  VAR_11 = VAR_10->enabled ? VAR_0 : 0;
  break;
 case 130:
  VAR_11 = VAR_10->nr_spis + VAR_6;
  VAR_11 = (VAR_11 >> 5) - 1;
  VAR_11 |= (FUNC_0(&VAR_7->kvm->online_vcpus) - 1) << 5;
  break;
 case 128:
  VAR_11 = (VAR_5 << VAR_2) |
   (VAR_10->implementation_rev << VAR_3) |
   (VAR_4 << VAR_1);
  break;
 default:
  return 0;
 }

 return VAR_11;
}

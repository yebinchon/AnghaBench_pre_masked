
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
struct TYPE_4__ {TYPE_1__ arch; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static unsigned long FUNC_1(struct kvm_vcpu *VAR_12,
         gpa_t VAR_13, unsigned int VAR_14)
{
 struct vgic_dist *VAR_15 = &VAR_12->kvm->arch.vgic;
 u32 VAR_16 = 0;

 switch (VAR_13 & 0x0c) {
 case 130:
  if (VAR_15->enabled)
   VAR_16 |= VAR_2;
  VAR_16 |= VAR_0 | VAR_1;
  break;
 case 128:
  VAR_16 = VAR_15->nr_spis + VAR_11;
  VAR_16 = (VAR_16 >> 5) - 1;
  if (FUNC_0(VAR_12->kvm)) {
   VAR_16 |= (VAR_8 - 1) << 19;
   VAR_16 |= VAR_6;
  } else {
   VAR_16 |= (VAR_9 - 1) << 19;
  }
  break;
 case 129:
  VAR_16 = (VAR_10 << VAR_4) |
   (VAR_15->implementation_rev << VAR_5) |
   (VAR_7 << VAR_3);
  break;
 default:
  return 0;
 }

 return VAR_16;
}

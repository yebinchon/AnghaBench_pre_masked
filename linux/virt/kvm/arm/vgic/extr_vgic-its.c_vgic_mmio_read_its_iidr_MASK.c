
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u32 ;
struct vgic_its {unsigned long abi_rev; } ;
struct kvm {int dummy; } ;
typedef int gpa_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;

__attribute__((used)) static unsigned long FUNC_0(struct kvm *VAR_5,
          struct vgic_its *VAR_6,
          gpa_t VAR_7, unsigned int VAR_8)
{
 u32 VAR_9;

 VAR_9 = (VAR_6->abi_rev << VAR_2) & VAR_1;
 VAR_9 |= (VAR_4 << VAR_0) | VAR_3;
 return VAR_9;
}

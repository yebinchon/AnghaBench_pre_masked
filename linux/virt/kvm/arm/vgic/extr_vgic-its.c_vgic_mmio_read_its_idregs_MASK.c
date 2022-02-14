
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vgic_its {int dummy; } ;
struct kvm {int dummy; } ;
typedef int gpa_t ;


 int VAR_0 ;
__attribute__((used)) static unsigned long FUNC_0(struct kvm *VAR_1,
            struct vgic_its *VAR_2,
            gpa_t VAR_3, unsigned int VAR_4)
{
 switch (VAR_3 & 0xffff) {
 case 131:
  return 0x92;
 case 130:
  return 0xb4;
 case 129:
  return VAR_0 | 0x0b;
 case 128:
  return 0x40;

 case 135:
  return 0x0d;
 case 134:
  return 0xf0;
 case 133:
  return 0x05;
 case 132:
  return 0xb1;
 }

 return 0;
}

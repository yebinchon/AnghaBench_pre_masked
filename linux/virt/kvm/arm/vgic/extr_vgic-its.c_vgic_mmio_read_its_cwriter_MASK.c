
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vgic_its {int cwriter; } ;
struct kvm {int dummy; } ;
typedef int gpa_t ;


 unsigned long FUNC_0 (int ,int,unsigned int) ;

__attribute__((used)) static unsigned long FUNC_1(struct kvm *VAR_0,
      struct vgic_its *VAR_1,
      gpa_t VAR_2, unsigned int VAR_3)
{
 return FUNC_0(VAR_1->cwriter, VAR_2 & 0x7, VAR_3);
}

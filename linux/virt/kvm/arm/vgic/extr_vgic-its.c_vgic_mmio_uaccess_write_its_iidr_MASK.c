
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct vgic_its {int dummy; } ;
struct kvm {int dummy; } ;
typedef int gpa_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct vgic_its*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct kvm *VAR_2,
         struct vgic_its *VAR_3,
         gpa_t VAR_4, unsigned int VAR_5,
         unsigned long VAR_6)
{
 u32 VAR_7 = FUNC_0(VAR_6);

 if (VAR_7 >= VAR_1)
  return -VAR_0;
 return FUNC_1(VAR_3, VAR_7);
}

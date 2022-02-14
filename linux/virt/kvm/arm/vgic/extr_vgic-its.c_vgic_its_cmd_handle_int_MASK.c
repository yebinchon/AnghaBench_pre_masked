
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct vgic_its {int dummy; } ;
struct kvm {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct kvm*,struct vgic_its*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct kvm *VAR_0, struct vgic_its *VAR_1,
       u64 *VAR_2)
{
 u32 VAR_3 = FUNC_1(VAR_2);
 u64 VAR_4 = FUNC_0(VAR_2);

 return FUNC_2(VAR_0, VAR_1, VAR_4, VAR_3);
}

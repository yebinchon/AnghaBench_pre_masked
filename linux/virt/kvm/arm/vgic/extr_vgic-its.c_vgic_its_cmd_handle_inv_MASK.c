
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct vgic_its {int dummy; } ;
struct kvm {int dummy; } ;
struct its_ite {int irq; } ;


 int VAR_0 ;
 struct its_ite* FUNC_0 (struct vgic_its*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct kvm*,int ,int *,int) ;

__attribute__((used)) static int FUNC_4(struct kvm *VAR_1, struct vgic_its *VAR_2,
       u64 *VAR_3)
{
 u32 VAR_4 = FUNC_1(VAR_3);
 u32 VAR_5 = FUNC_2(VAR_3);
 struct its_ite *VAR_6;


 VAR_6 = FUNC_0(VAR_2, VAR_4, VAR_5);
 if (!VAR_6)
  return VAR_0;

 return FUNC_3(VAR_1, VAR_6->irq, ((void*)0), 1);
}

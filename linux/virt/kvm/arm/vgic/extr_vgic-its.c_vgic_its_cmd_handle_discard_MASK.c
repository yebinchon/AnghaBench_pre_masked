
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct vgic_its {int dummy; } ;
struct kvm {int dummy; } ;
struct its_ite {scalar_t__ collection; } ;


 int VAR_0 ;
 struct its_ite* FUNC_0 (struct vgic_its*,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct kvm*,struct its_ite*) ;
 int FUNC_4 (struct kvm*) ;

__attribute__((used)) static int FUNC_5(struct kvm *VAR_1, struct vgic_its *VAR_2,
           u64 *VAR_3)
{
 u32 VAR_4 = FUNC_1(VAR_3);
 u32 VAR_5 = FUNC_2(VAR_3);
 struct its_ite *VAR_6;


 VAR_6 = FUNC_0(VAR_2, VAR_4, VAR_5);
 if (VAR_6 && VAR_6->collection) {





  FUNC_4(VAR_1);

  FUNC_3(VAR_1, VAR_6);
  return 0;
 }

 return VAR_0;
}

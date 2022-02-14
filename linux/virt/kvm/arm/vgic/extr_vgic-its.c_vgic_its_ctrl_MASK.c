
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct vgic_its_abi {int (* save_tables ) (struct vgic_its*) ;int (* restore_tables ) (struct vgic_its*) ;} ;
struct vgic_its {int its_lock; } ;
struct kvm {int lock; } ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (struct kvm*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct vgic_its*) ;
 int FUNC_4 (struct vgic_its*) ;
 int FUNC_5 (struct kvm*) ;
 struct vgic_its_abi* FUNC_6 (struct vgic_its*) ;
 int FUNC_7 (struct kvm*,struct vgic_its*) ;

__attribute__((used)) static int FUNC_8(struct kvm *VAR_2, struct vgic_its *VAR_3, u64 VAR_4)
{
 const struct vgic_its_abi *VAR_5 = FUNC_6(VAR_3);
 int VAR_6 = 0;

 if (VAR_4 == VAR_1)
  return 0;

 FUNC_1(&VAR_2->lock);
 FUNC_1(&VAR_3->its_lock);

 if (!FUNC_0(VAR_2)) {
  FUNC_2(&VAR_3->its_lock);
  FUNC_2(&VAR_2->lock);
  return -VAR_0;
 }

 switch (VAR_4) {
 case 130:
  FUNC_7(VAR_2, VAR_3);
  break;
 case 128:
  VAR_6 = VAR_5->save_tables(VAR_3);
  break;
 case 129:
  VAR_6 = VAR_5->restore_tables(VAR_3);
  break;
 }

 FUNC_5(VAR_2);
 FUNC_2(&VAR_3->its_lock);
 FUNC_2(&VAR_2->lock);
 return VAR_6;
}

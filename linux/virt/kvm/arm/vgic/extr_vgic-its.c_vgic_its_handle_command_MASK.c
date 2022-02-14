
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct vgic_its {int its_lock; } ;
struct kvm {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct kvm*,struct vgic_its*,int *) ;
 int FUNC_4 (struct kvm*,struct vgic_its*,int *) ;
 int FUNC_5 (struct kvm*,struct vgic_its*,int *) ;
 int FUNC_6 (struct kvm*,struct vgic_its*,int *) ;
 int FUNC_7 (struct kvm*,struct vgic_its*,int *) ;
 int FUNC_8 (struct kvm*,struct vgic_its*,int *) ;
 int FUNC_9 (struct kvm*,struct vgic_its*,int *) ;
 int FUNC_10 (struct kvm*,struct vgic_its*,int *) ;
 int FUNC_11 (struct kvm*,struct vgic_its*,int *) ;
 int FUNC_12 (struct kvm*,struct vgic_its*,int *) ;

__attribute__((used)) static int FUNC_13(struct kvm *VAR_1, struct vgic_its *VAR_2,
       u64 *VAR_3)
{
 int VAR_4 = -VAR_0;

 FUNC_1(&VAR_2->its_lock);
 switch (FUNC_0(VAR_3)) {
 case 133:
  VAR_4 = FUNC_9(VAR_1, VAR_2, VAR_3);
  break;
 case 134:
  VAR_4 = FUNC_8(VAR_1, VAR_2, VAR_3);
  break;
 case 132:
  VAR_4 = FUNC_10(VAR_1, VAR_2, VAR_3);
  break;
 case 131:
  VAR_4 = FUNC_10(VAR_1, VAR_2, VAR_3);
  break;
 case 129:
  VAR_4 = FUNC_12(VAR_1, VAR_2, VAR_3);
  break;
 case 138:
  VAR_4 = FUNC_4(VAR_1, VAR_2, VAR_3);
  break;
 case 139:
  VAR_4 = FUNC_3(VAR_1, VAR_2, VAR_3);
  break;
 case 130:
  VAR_4 = FUNC_11(VAR_1, VAR_2, VAR_3);
  break;
 case 137:
  VAR_4 = FUNC_5(VAR_1, VAR_2, VAR_3);
  break;
 case 136:
  VAR_4 = FUNC_6(VAR_1, VAR_2, VAR_3);
  break;
 case 135:
  VAR_4 = FUNC_7(VAR_1, VAR_2, VAR_3);
  break;
 case 128:

  VAR_4 = 0;
  break;
 }
 FUNC_2(&VAR_2->its_lock);

 return VAR_4;
}

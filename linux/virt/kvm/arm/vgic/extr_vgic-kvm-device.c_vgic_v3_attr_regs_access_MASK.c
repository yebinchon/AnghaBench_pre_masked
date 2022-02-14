
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct vgic_reg_attr {int addr; struct kvm_vcpu* vcpu; } ;
struct kvm_vcpu {int dummy; } ;
struct kvm_device_attr {int group; int attr; } ;
struct kvm_device {TYPE_1__* kvm; } ;
typedef int gpa_t ;
struct TYPE_4__ {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;




 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (struct kvm_vcpu*,int,int,int*) ;
 int FUNC_7 (struct kvm_vcpu*,int,int ,int*) ;
 int FUNC_8 (struct kvm_vcpu*,int,unsigned int,int*) ;
 int FUNC_9 (struct kvm_device*,struct kvm_device_attr*,struct vgic_reg_attr*) ;
 int FUNC_10 (struct kvm_vcpu*,int,int ,int*) ;

__attribute__((used)) static int FUNC_11(struct kvm_device *VAR_7,
        struct kvm_device_attr *VAR_8,
        u64 *VAR_9, bool VAR_10)
{
 struct vgic_reg_attr VAR_11;
 gpa_t VAR_12;
 struct kvm_vcpu *VAR_13;
 int VAR_14;
 u32 VAR_15;

 VAR_14 = FUNC_9(VAR_7, VAR_8, &VAR_11);
 if (VAR_14)
  return VAR_14;

 VAR_13 = VAR_11.vcpu;
 VAR_12 = VAR_11.addr;

 FUNC_1(&VAR_7->kvm->lock);

 if (FUNC_3(!FUNC_5(VAR_7->kvm))) {
  VAR_14 = -VAR_0;
  goto out;
 }

 if (!FUNC_0(VAR_7->kvm)) {
  VAR_14 = -VAR_0;
  goto out;
 }

 switch (VAR_8->group) {
 case 130:
  if (VAR_10)
   VAR_15 = *VAR_9;

  VAR_14 = FUNC_7(VAR_13, VAR_10, VAR_12, &VAR_15);
  if (!VAR_10)
   *VAR_9 = VAR_15;
  break;
 case 128:
  if (VAR_10)
   VAR_15 = *VAR_9;

  VAR_14 = FUNC_10(VAR_13, VAR_10, VAR_12, &VAR_15);
  if (!VAR_10)
   *VAR_9 = VAR_15;
  break;
 case 131: {
  u64 VAR_16;

  VAR_16 = (VAR_8->attr & VAR_5);
  VAR_14 = FUNC_6(VAR_13, VAR_10,
        VAR_16, VAR_9);
  break;
 }
 case 129: {
  unsigned int VAR_17, VAR_18;

  VAR_17 = (VAR_8->attr & VAR_2) >>
   VAR_3;
  if (VAR_17 == VAR_6) {
   VAR_18 = VAR_8->attr &
    VAR_4;
   VAR_14 = FUNC_8(VAR_13, VAR_10,
             VAR_18, VAR_9);
  } else {
   VAR_14 = -VAR_1;
  }
  break;
 }
 default:
  VAR_14 = -VAR_1;
  break;
 }

 FUNC_4(VAR_7->kvm);
out:
 FUNC_2(&VAR_7->kvm->lock);
 return VAR_14;
}
